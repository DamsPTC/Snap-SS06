/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 0002d4ec; end: 0002d58b;  */

long * FUN_0002d4ec(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  code *pcVar6;
  
  uVar1 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    lVar4 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar4;
    *(short *)(param_1 + 2) = (short)param_2[2];
    iVar2 = *(int *)(param_3 + 0x1c);
    lVar3 = 0;
    __s10Foundation3URLVMa();
    pcVar6 = *(code **)(*(long *)(lVar3 + -8) + 0x10);
    _swift_bridgeObjectRetain(lVar4);
    (*pcVar6)((long)param_1 + (long)iVar2,(long)param_2 + (long)iVar2,lVar3);
  }
  else {
    lVar4 = *param_2;
    *param_1 = lVar4;
    uVar5 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar4 + (uVar5 + 0x10 & (uVar5 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 0002d58c; end: 0002d5cf;  */

void FUN_0002d58c(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  iVar1 = *(int *)(param_2 + 0x1c);
  lVar2 = 0;
  __s10Foundation3URLVMa();
                    /* WARNING: Could not recover jumptable at 0x0002d5cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1 + iVar1,lVar2);
  return;
}



/* Entry: 0002d5d0; end: 0002d643;  */

undefined8 * FUN_0002d5d0(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  code *pcVar4;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
  iVar2 = *(int *)(param_3 + 0x1c);
  lVar3 = 0;
  __s10Foundation3URLVMa();
  pcVar4 = *(code **)(*(long *)(lVar3 + -8) + 0x10);
  _swift_bridgeObjectRetain(uVar1);
  (*pcVar4)((long)param_1 + (long)iVar2,(long)param_2 + (long)iVar2,lVar3);
  return param_1;
}



/* Entry: 0002d644; end: 0002d79b;  */

undefined8 * FUN_0002d644(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  uVar3 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  *(undefined1 *)((long)param_1 + 0x11) = *(undefined1 *)((long)param_2 + 0x11);
  iVar1 = *(int *)(param_3 + 0x1c);
  lVar2 = 0;
  __s10Foundation3URLVMa();
  (**(code **)(*(long *)(lVar2 + -8) + 0x18))
            ((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,lVar2);
  return param_1;
}



/* Entry: 0002d79c; end: 0002d7a7;  */

void FUN_0002d79c(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077b398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_0099ba10)();
  return;
}



/* Entry: 0002d7a8; end: 0002d823;  */

ulong FUN_0002d7a8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  
  if ((int)param_2 == 0x7fffffff) {
    uVar2 = *(ulong *)(param_1 + 8);
    if (0xfffffffe < uVar2) {
      uVar2 = 0xffffffff;
    }
    return (ulong)((int)uVar2 + 1);
  }
  lVar1 = 0;
  __s10Foundation3URLVMa();
  uVar2 = param_1 + *(int *)(param_3 + 0x1c);
                    /* WARNING: Could not recover jumptable at 0x0002d820. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x30))(uVar2,param_2,lVar1);
  return uVar2;
}



/* Entry: 0002d824; end: 0002d82f;  */

void FUN_0002d824(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077b590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_storeEnumTagSinglePayloadGeneric_0099bb68)();
  return;
}



/* Entry: 0002d830; end: 0002d8a3;  */

void FUN_0002d830(long param_1,undefined8 param_2,int param_3,long param_4)

{
  long lVar1;
  
  if (param_3 == 0x7fffffff) {
    *(ulong *)(param_1 + 8) = (ulong)((int)param_2 - 1);
    return;
  }
  lVar1 = 0;
  __s10Foundation3URLVMa();
                    /* WARNING: Could not recover jumptable at 0x0002d8a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))
            (param_1 + *(int *)(param_4 + 0x1c),param_2,param_2,lVar1);
  return;
}



/* Entry: 0002d8a4; end: 0002d92b;  */

void FUN_0002d8a4(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_40 = &UNK_007cde78;
  puStack_38 = &UNK_007cde90;
  puStack_30 = &UNK_007cdea8;
  lVar1 = 0x13f;
  __s10Foundation3URLVMa();
  if (param_2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_initStructMetadata(param_1,0x100,4,&puStack_40,param_1 + 0x10);
  }
  return;
}



/* Entry: 0002d92c; end: 0002d943;  */

undefined1  [16] __s23ExtensionsStickerPicker09ExtensionB0V2idSSvg(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  _swift_bridgeObjectRetain(*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 0002d944; end: 0002d9ef;  */

void FUN_0002d944(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 0002d9f0; end: 0002d9f3;  */

void FUN_0002d9f0(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae6ca8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007cdec0;
  _swift_getWitnessTable(&UNK_007cdec0,&UNK_0099e708);
  puRam0000000000ae6ca8 = puVar1;
  return;
}



/* Entry: 0002d9f4; end: 0002da33;  */

void FUN_0002d9f4(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae6ca8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007cdec0;
  _swift_getWitnessTable(&UNK_007cdec0,&UNK_0099e708);
  puRam0000000000ae6ca8 = puVar1;
  return;
}



/* Entry: 0002da34; end: 0002db97;  */

int FUN_0002da34(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_0002dab0;
        goto LAB_0002da94;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_0002da94:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_0002dab0:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 0002db98; end: 0002dc0f;  */

void FUN_0002db98(void)

{
  undefined8 uVar1;
  
  uVar1 = 0xae6ce8;
  func_0x000115a8(0xae6ce8,&UNK_007cdf40);
  _swift_initStaticObject();
  uRam0000000000b647d0 = uVar1;
  return;
}



/* Entry: 0002dc10; end: 0002dc23;  */

bool FUN_0002dc10(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 0002dc24; end: 0002dccf;  */

void FUN_0002dc24(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 0002dcd0; end: 0002dcd3;  */

void FUN_0002dcd0(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae6cf0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007cdf48;
  _swift_getWitnessTable(&UNK_007cdf48,&UNK_0099e7d0);
  puRam0000000000ae6cf0 = puVar1;
  return;
}



/* Entry: 0002dcd4; end: 0002dd13;  */

void FUN_0002dcd4(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae6cf0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007cdf48;
  _swift_getWitnessTable(&UNK_007cdf48,&UNK_0099e7d0);
  puRam0000000000ae6cf0 = puVar1;
  return;
}



/* Entry: 0002dd14; end: 0002de8b;  */

int FUN_0002dd14(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_0002dd90;
        goto LAB_0002dd74;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_0002dd74:
      return ((uint)*param_1 | uVar1 << 8) - 8;
    }
  }
LAB_0002dd90:
  iVar2 = *param_1 - 9;
  if (*param_1 < 9) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 0002de8c; end: 0002df37;  */

void FUN_0002de8c(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 0002df38; end: 0002df3b;  */

void FUN_0002df38(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae6cf8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007cdfc0;
  _swift_getWitnessTable(&UNK_007cdfc0,&__s23ExtensionsStickerPicker0B8ExtErrorON);
  puRam0000000000ae6cf8 = puVar1;
  return;
}



/* Entry: 0002df3c; end: 0002df7b;  */

void FUN_0002df3c(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae6cf8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007cdfc0;
  _swift_getWitnessTable(&UNK_007cdfc0,&__s23ExtensionsStickerPicker0B8ExtErrorON);
  puRam0000000000ae6cf8 = puVar1;
  return;
}



/* Entry: 0002df7c; end: 0002e0ef;  */

void FUN_0002df7c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00779040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_0099b708)();
  return;
}



/* Entry: 0002e0f0; end: 0002e39b;  */

void __s23ExtensionsStickerPicker0B5FeedsVACycfC(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR___swiftEmptyArrayStorage_0099b8f0;
  *param_1 = PTR___swiftEmptyArrayStorage_0099b8f0;
  param_1[1] = puVar1;
  param_1[2] = puVar1;
  param_1[3] = puVar1;
  param_1[4] = puVar1;
  return;
}



/* Entry: 0002e39c; end: 0002e447;  */

undefined1  [16]
__s23ExtensionsStickerPicker0bC16StringsProvidingPAAE5title3forSSAA7PillTagO_tF
          (byte param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if (param_1 < 4) {
    if (param_1 < 2) {
      if (param_1 == 0) {
        auVar3._8_8_ = 0xeb00000000232353;
        auVar3._0_8_ = 0x544e454345522323;
        return auVar3;
      }
      lVar2 = 0x38;
    }
    else {
      lVar2 = 0x40;
      if (param_1 != 2) {
        lVar2 = 0x48;
      }
    }
  }
  else {
    lVar1 = 0x60;
    if (param_1 != 7) {
      lVar1 = 0x68;
    }
    lVar2 = 0x50;
    if (param_1 != 6) {
      lVar2 = lVar1;
    }
    lVar1 = 0x70;
    if (param_1 != 4) {
      lVar1 = 0x58;
    }
    if (param_1 < 6) {
      lVar2 = lVar1;
    }
  }
  (**(code **)(param_3 + lVar2))(param_2,param_3);
  auVar4._8_8_ = param_3;
  auVar4._0_8_ = param_2;
  return auVar4;
}



/* Entry: 0002e448; end: 0002e487;  */

void __s23ExtensionsStickerPicker0bC16StringsProvidingPAAE11description3forSSAA0B8ExtErrorO_tF
               (char param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = 0x80;
  if (param_1 != '\x01') {
    lVar1 = 0x78;
  }
                    /* WARNING: Could not recover jumptable at 0x0002e468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + lVar1))(param_2,param_3);
  return;
}



/* Entry: 0002e488; end: 0002e54b;  */

void FUN_0002e488(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x20);
  lVar3 = *(long *)(unaff_x22 + 0x28);
  FUN_0002f158(uVar1);
  lVar3 = *(long *)(lVar3 + 0x80);
  if (lVar3 == 0) {
    _swift_bridgeObjectRelease(param_2);
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
    _swift_bridgeObjectRelease(param_2);
    func_0x00791560();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    if (lVar3 != 0) {
      uVar1 = *(undefined8 *)(unaff_x22 + 0x10);
      __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF
                (uVar1,*(undefined8 *)(unaff_x22 + 0x18));
      lVar2 = lVar3;
      func_0x00793d20(lVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      _objc_release(uVar1);
      _objc_release(lVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0002e548. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 0002e54c; end: 0002e6b3;  */

bool FUN_0002e54c(undefined8 param_1)

{
  bool bVar1;
  long lVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  long lVar7;
  long lVar8;
  
  lVar2 = 0xae6dd0;
  func_0x000115a8(0xae6dd0,&UNK_007ce690);
  (*(code *)PTR____chkstk_darwin_00999f48)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = &stack0xffffffffffffffc0 + -extraout_x8;
  lVar2 = 0;
  __s10Foundation3URLVMa();
  lVar8 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  FUN_0002e6b4(puVar6,param_1);
  puVar3 = puVar6;
  (**(code **)(lVar8 + 0x30))(puVar6,1,lVar2);
  if ((int)puVar3 == 1) {
    func_0x0002f32c(puVar6);
    bVar1 = false;
  }
  else {
    lVar4 = lVar7;
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,lVar2);
    __s10Foundation3URLV4pathSSvg();
    puVar5 = PTR__OBJC_CLASS___UIImage_00ac2a88;
    _objc_allocWithZone();
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lVar4,puVar6);
    _swift_bridgeObjectRelease(puVar6);
    func_0x00785080();
    _objc_release(lVar4);
    bVar1 = puVar5 != (undefined *)0x0;
    if (puVar5 != (undefined *)0x0) {
      _objc_release(puVar5);
    }
    (**(code **)(lVar8 + 8))(lVar7,lVar2);
  }
  return bVar1;
}



/* Entry: 0002e6b4; end: 0002e85f;  */

void FUN_0002e6b4(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  long lVar6;
  undefined1 *puVar7;
  code *pcVar8;
  long lVar9;
  
  lVar2 = 0xae6dd0;
  puVar4 = &UNK_007ce690;
  func_0x000115a8(0xae6dd0,&UNK_007ce690);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar7 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar6 = (long)puVar7 - extraout_x12;
  FUN_0002f158(param_2);
  lVar2 = *(long *)(unaff_x20 + 0x80);
  if (lVar2 != 0) {
    func_0x00793280();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 != 0) {
      __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(lVar6);
      _objc_release(lVar2);
      lVar2 = 0;
      __s10Foundation3URLVMa();
      uVar5 = 0;
      goto LAB_0002e790;
    }
  }
  lVar2 = 0;
  __s10Foundation3URLVMa();
  uVar5 = 1;
LAB_0002e790:
  lVar9 = *(long *)(lVar2 + -8);
  pcVar8 = *(code **)(lVar9 + 0x38);
  (*pcVar8)(lVar6,uVar5,1,lVar2);
  FUN_0002f2dc(lVar6,puVar7);
  __s10Foundation3URLVMa(0);
  puVar3 = puVar7;
  (**(code **)(lVar9 + 0x30))(puVar7,1,lVar2);
  bVar1 = (int)puVar3 != 1;
  if (bVar1) {
    __s10Foundation3URLV22appendingPathComponentyACSSF(param_1,param_2,puVar4);
    _swift_bridgeObjectRelease(puVar4);
    func_0x0002f32c(lVar6);
    (**(code **)(lVar9 + 8))(puVar7,lVar2);
  }
  else {
    func_0x0002f32c(lVar6);
    _swift_bridgeObjectRelease(puVar4);
    func_0x0002f32c(puVar7);
  }
  (*pcVar8)(param_1,!bVar1,1,lVar2);
  return;
}



/* Entry: 0002e860; end: 0002e95f;  */

void FUN_0002e860(long *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  ulong *puVar3;
  uint uVar4;
  ulong uVar5;
  ulong uStack_38;
  
  uVar1 = *param_2;
  uVar5 = (ulong)uVar1;
  __s10Foundation12CharacterSetV8containsySbs7UnicodeO6ScalarVF();
  if ((uVar5 & 1) == 0) {
    puVar3 = (ulong *)0x0;
    uVar5 = 0xe000000000000000;
  }
  else {
    if (uVar1 < 0x80) {
      uVar4 = uVar1 + 1;
    }
    else {
      uVar2 = (uVar1 & 0x3f) * 0x100;
      if (uVar1 < 0x800) {
        uVar4 = (uVar1 >> 6) + uVar2 + 0x81c1;
      }
      else {
        uVar2 = (uVar2 | uVar1 >> 6 & 0x3f) * 0x100;
        uVar4 = ((uVar2 | uVar1 >> 0xc & 0x3f) << 8 | uVar1 >> 0x12) + 0x818181f1;
        if (uVar1 >> 0x10 == 0) {
          uVar4 = (uVar1 >> 0xc) + uVar2 + 0x8181e1;
        }
      }
    }
    uVar5 = (ulong)(4 - ((uint)LZCOUNT(uVar4) >> 3));
    uStack_38 = (ulong)uVar4 + 0xfefefefefefeff & (-1L << ((uVar5 & 7) << 3) ^ 0xffffffffffffffffU);
    puVar3 = &uStack_38;
    __sSS18_uncheckedFromUTF8ySSSRys5UInt8VGFZ();
  }
  *param_1 = (long)puVar3;
  param_1[1] = uVar5;
  return;
}



/* Entry: 0002e960; end: 0002ed2b;  */

/* WARNING: Type propagation algorithm not settling */

undefined * FUN_0002e960(code *param_1,undefined8 param_2,undefined8 *******param_3,ulong param_4)

{
  undefined8 *******pppppppuVar1;
  ulong uVar2;
  byte bVar3;
  undefined *puVar4;
  code *pcVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *******pppppppuVar9;
  uint uVar10;
  byte *pbVar11;
  uint uVar12;
  ulong uVar13;
  long unaff_x21;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 *******pppppppuStack_80;
  ulong uStack_78;
  undefined8 *******pppppppuStack_70;
  ulong uStack_68;
  
  uVar2 = (ulong)param_3 & 0xffffffffffff;
  if ((param_4 & 0x2000000000000000) != 0) {
    uVar2 = param_4 >> 0x38 & 0xf;
  }
  uVar10 = (uint)((ulong)param_3 >> 0x3b) & 1;
  if ((param_4 & 0x1000000000000000) == 0) {
    uVar10 = 1;
  }
  uVar16 = 7;
  if (uVar10 == 0) {
    uVar16 = 0xb;
  }
  uVar7 = 0xf;
  FUN_0002ed84(0xf,uVar16 | uVar2 << 0x10);
  puVar4 = PTR___swiftEmptyArrayStorage_0099b8f0;
  if (uVar7 == 0) {
    return puVar4;
  }
  FUN_0003bcc8(0,uVar7 & ((long)uVar7 >> 0x3f ^ 0xffffffffffffffffU),0);
  if ((long)uVar7 < 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x2ed20);
    (*pcVar5)();
  }
  uVar14 = 4L << uVar10;
  pppppppuVar1 = (undefined8 *******)((param_4 & 0xfffffffffffffff) + 0x20);
  uVar16 = 0xf;
LAB_0002ea3c:
  do {
    uVar15 = uVar16 & 0xc;
    uVar10 = (uint)(uVar15 != uVar14) & (uint)uVar16;
    uVar8 = uVar16;
    if (uVar10 == 1) {
      uVar13 = uVar16 >> 0x10;
      if (uVar2 <= uVar13) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x2ed10);
        (*pcVar5)();
      }
LAB_0002ea94:
      if ((param_4 >> 0x3c & 1) != 0) goto LAB_0002eb60;
LAB_0002ea98:
      if ((param_4 >> 0x3d & 1) == 0) {
        pppppppuVar9 = pppppppuVar1;
        if (((ulong)param_3 >> 0x3c & 1) == 0) {
          pppppppuVar9 = param_3;
          __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg(param_3,param_4);
        }
      }
      else {
        pppppppuStack_80 = param_3;
        uStack_78 = param_4 & 0xffffffffffffff;
        pppppppuVar9 = &pppppppuStack_80;
      }
      pbVar11 = (byte *)((long)pppppppuVar9 + uVar13);
      uVar6 = (uint)*pbVar11;
      if ((char)*pbVar11 < '\0') {
        uVar12 = (uint)LZCOUNT(uVar6 << 0x18 ^ 0xffffffff);
        if (uVar12 < 3) {
          if (uVar12 != 1) {
            uVar6 = pbVar11[1] & 0x3f | (uVar6 & 0x1f) << 6;
          }
        }
        else if (uVar12 == 3) {
          uVar6 = (uVar6 & 0xf) << 0xc | (pbVar11[1] & 0x3f) << 6 | pbVar11[2] & 0x3f;
        }
        else {
          uVar6 = (uVar6 & 0xf) << 0x12 | (pbVar11[1] & 0x3f) << 0xc | (pbVar11[2] & 0x3f) << 6 |
                  pbVar11[3] & 0x3f;
        }
      }
    }
    else {
      if (uVar15 == uVar14) {
        FUN_0002269c(uVar16,param_3,param_4);
      }
      uVar13 = uVar8 >> 0x10;
      if (uVar2 <= uVar13) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x2ed14);
        (*pcVar5)();
      }
      if ((uVar8 & 1) != 0) goto LAB_0002ea94;
      FUN_0002ef84();
      uVar13 = uVar8 >> 0x10;
      if ((param_4 >> 0x3c & 1) == 0) goto LAB_0002ea98;
LAB_0002eb60:
      uVar8 = uVar8 & 0xffffffffffff0000;
      __ss11_StringGutsV27foreignErrorCorrectedScalar10startingAts7UnicodeO0F0V_Si12scalarLengthtSS5IndexV_tF
                (uVar8,param_3,param_4);
      uVar6 = (uint)uVar8;
    }
    pppppppuStack_80 = (undefined8 *******)CONCAT44(pppppppuStack_80._4_4_,uVar6);
    (*param_1)(&pppppppuStack_70,&pppppppuStack_80);
    uVar8 = uStack_68;
    pppppppuVar9 = pppppppuStack_70;
    if (unaff_x21 != 0) {
      _swift_release(puVar4);
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x2ed2c);
      (*pcVar5)();
    }
    uVar13 = *(ulong *)(puVar4 + 0x10);
    if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar13) {
      FUN_0003bcc8(1 < *(ulong *)(puVar4 + 0x18),uVar13 + 1,1);
    }
    *(ulong *)(puVar4 + 0x10) = uVar13 + 1;
    *(undefined8 ********)(puVar4 + uVar13 * 0x10 + 0x20) = pppppppuVar9;
    *(ulong *)(puVar4 + uVar13 * 0x10 + 0x28) = uVar8;
    if (uVar10 == 0) {
      if (uVar15 == uVar14) {
        FUN_0002269c(uVar16,param_3,param_4);
      }
      if (uVar2 <= uVar16 >> 0x10) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x2ed1c);
        (*pcVar5)();
      }
      if ((uVar16 & 1) != 0) goto LAB_0002ebf4;
      uVar8 = uVar16;
      FUN_0002ef84(uVar16,param_3,param_4);
      uVar16 = uVar16 & 0xc | uVar8 & 0xfffffffffffffff3 | 1;
      if ((param_4 >> 0x3c & 1) == 0) goto LAB_0002ebf8;
LAB_0002ea20:
      __sSS17UnicodeScalarViewV13_foreignIndex5afterSS0E0VAF_tF(uVar16,param_3,param_4);
      uVar7 = uVar7 - 1;
      if (uVar7 == 0) {
        return puVar4;
      }
      goto LAB_0002ea3c;
    }
    if (uVar2 <= uVar16 >> 0x10) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x2ed18);
      (*pcVar5)();
    }
LAB_0002ebf4:
    if ((param_4 >> 0x3c & 1) != 0) goto LAB_0002ea20;
LAB_0002ebf8:
    uVar16 = uVar16 >> 0x10;
    if ((param_4 >> 0x3d & 1) == 0) {
      pppppppuVar9 = pppppppuVar1;
      if (((ulong)param_3 >> 0x3c & 1) == 0) {
        pppppppuVar9 = param_3;
        __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg(param_3,param_4);
      }
      bVar3 = *(byte *)((long)pppppppuVar9 + uVar16);
    }
    else {
      pppppppuStack_70 = param_3;
      uStack_68 = param_4 & 0xffffffffffffff;
      bVar3 = *(byte *)((long)&pppppppuStack_70 + uVar16);
    }
    uVar10 = (uint)LZCOUNT((uint)bVar3 << 0x18 ^ 0xffffffff);
    if (-1 < (char)bVar3) {
      uVar10 = 1;
    }
    uVar16 = (uVar16 + uVar10) * 0x10000 | 5;
    uVar7 = uVar7 - 1;
    if (uVar7 == 0) {
      return puVar4;
    }
  } while( true );
}



/* Entry: 0002ed2c; end: 0002ed57;  */

void FUN_0002ed2c(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x78));
  _objc_release(*(undefined8 *)(unaff_x20 + 0x80));
  _swift_defaultActor_destroy();
                    /* WARNING: Could not recover jumptable at 0x0077b2f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_defaultActor_deallocate_0099c080)();
  return;
}



/* Entry: 0002ed58; end: 0002ed63;  */

void FUN_0002ed58(void)

{
  return;
}



/* Entry: 0002ed64; end: 0002ed83;  */

void FUN_0002ed64(void)

{
  _objc_opt_self(&PTR_PTR_00ae6d40);
  return;
}



/* Entry: 0002ed84; end: 0002ef83;  */

long FUN_0002ed84(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  byte bVar1;
  char cVar2;
  code *pcVar3;
  bool bVar4;
  ulong uVar5;
  uint uVar6;
  char *pcVar7;
  long lVar8;
  long lVar9;
  char acStack_72 [2];
  ulong uStack_70;
  ulong uStack_68;
  
  FUN_0002f058(param_1,param_3,param_4);
  FUN_0002f058(param_2,param_3,param_4);
  param_2 = param_2 >> 0xe;
  if (param_1 >> 0xe < param_2) {
    lVar9 = 0;
    do {
      lVar8 = lVar9 + 1;
      if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x2ef80);
        (*pcVar3)();
      }
      if ((param_4 >> 0x3c & 1) == 0) {
        param_1 = param_1 >> 0x10;
        if ((param_4 >> 0x3d & 1) == 0) {
          uVar5 = (param_4 & 0xfffffffffffffff) + 0x20;
          if ((param_3 >> 0x3c & 1) == 0) {
            uVar5 = param_3;
            __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg(param_3,param_4);
          }
          bVar1 = *(byte *)(uVar5 + param_1);
        }
        else {
          uStack_70 = param_3;
          uStack_68 = param_4 & 0xffffffffffffff;
          bVar1 = *(byte *)((long)&uStack_70 + param_1);
        }
        uVar6 = (uint)LZCOUNT((uint)bVar1 << 0x18 ^ 0xffffffff);
        if (-1 < (char)bVar1) {
          uVar6 = 1;
        }
        param_1 = (param_1 + uVar6) * 0x10000;
      }
      else {
        __sSS17UnicodeScalarViewV13_foreignIndex5afterSS0E0VAF_tF();
      }
      lVar9 = lVar9 + 1;
    } while (param_1 >> 0xe < param_2);
  }
  else if (param_2 < param_1 >> 0xe) {
    lVar8 = 0;
    do {
      bVar4 = SBORROW8(lVar8,1);
      lVar8 = lVar8 + -1;
      if (bVar4) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x2ef84);
        (*pcVar3)();
      }
      if ((param_4 >> 0x3c & 1) == 0) {
        if ((param_4 >> 0x3d & 1) == 0) {
          uVar5 = (param_4 & 0xfffffffffffffff) + 0x20;
          if ((param_3 >> 0x3c & 1) == 0) {
            uVar5 = param_3;
            __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg(param_3,param_4);
          }
          lVar9 = 0;
          do {
            pcVar7 = (char *)(uVar5 + (param_1 >> 0x10) + -1 + lVar9);
            lVar9 = lVar9 + -1;
          } while (*pcVar7 < -0x40);
          lVar9 = -lVar9;
        }
        else {
          uStack_70 = param_3;
          uStack_68 = param_4 & 0xffffffffffffff;
          if (acStack_72[(param_1 >> 0x10) + 1] < -0x40) {
            lVar9 = 1;
            pcVar7 = acStack_72 + (param_1 >> 0x10);
            do {
              lVar9 = lVar9 + 1;
              cVar2 = *pcVar7;
              pcVar7 = pcVar7 + -1;
            } while (cVar2 < -0x40);
          }
          else {
            lVar9 = 1;
          }
        }
        param_1 = param_1 + lVar9 * -0x10000 & 0xffffffffffff0000 | 5;
      }
      else {
        __sSS17UnicodeScalarViewV13_foreignIndex6beforeSS0E0VAF_tF();
      }
    } while (param_2 < param_1 >> 0xe);
  }
  else {
    lVar8 = 0;
  }
  return lVar8;
}



/* Entry: 0002ef84; end: 0002f057;  */

ulong FUN_0002ef84(ulong param_1,ulong param_2,ulong param_3)

{
  char *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uStack_20;
  ulong uStack_18;
  
  if (((param_1 & 0xc000) != 0) || (param_1 < 0x10000)) {
    return param_1 & 0xffffffffffff0000;
  }
  uVar3 = param_1 >> 0x10;
  if ((param_3 >> 0x3c & 1) != 0) {
    uVar2 = param_2 & 0xffffffffffff;
    if ((param_3 & 0x2000000000000000) != 0) {
      uVar2 = param_3 >> 0x38 & 0xf;
    }
    if (uVar3 == uVar2) {
      return param_1;
    }
                    /* WARNING: Could not recover jumptable at 0x00778cc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ss11_StringGutsV18foreignScalarAlignySS5IndexVAEF_0099b440)();
    return param_1;
  }
  if ((param_3 >> 0x3d & 1) == 0) {
    if ((param_2 >> 0x3c & 1) == 0) {
      __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg();
      uVar2 = param_2;
    }
    else {
      uVar2 = (param_3 & 0xfffffffffffffff) + 0x20;
      param_3 = param_2 & 0xffffffffffff;
    }
    if (uVar3 == param_3) goto LAB_0002f00c;
    do {
      pcVar1 = (char *)(uVar2 + uVar3);
      uVar3 = uVar3 - 1;
    } while (*pcVar1 < -0x40);
  }
  else {
    uStack_20 = param_2;
    uStack_18 = param_3 & 0xffffffffffffff;
    if (uVar3 == (param_3 >> 0x38 & 0xf)) goto LAB_0002f00c;
    do {
      pcVar1 = (char *)((long)&uStack_20 + uVar3);
      uVar3 = uVar3 - 1;
    } while (*pcVar1 < -0x40);
  }
  uVar3 = uVar3 + 1;
LAB_0002f00c:
  return uVar3 << 0x10;
}



/* Entry: 0002f058; end: 0002f0eb;  */

void FUN_0002f058(ulong param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  code *pcVar2;
  uint uVar3;
  
  uVar3 = (uint)(param_2 >> 0x3b) & 1;
  if ((param_3 & 0x1000000000000000) == 0) {
    uVar3 = 1;
  }
  if (((param_1 & 1) == 0) || ((param_1 & 0xc) == 4L << (ulong)uVar3)) {
    FUN_0002f0ec();
    if ((param_1 & 1) == 0) {
      FUN_0002ef84();
    }
  }
  else {
    uVar1 = param_2 & 0xffffffffffff;
    if ((param_3 & 0x2000000000000000) != 0) {
      uVar1 = param_3 >> 0x38 & 0xf;
    }
    if (uVar1 < param_1 >> 0x10) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x2f0a8);
      (*pcVar2)();
    }
  }
  return;
}



/* Entry: 0002f0ec; end: 0002f157;  */

void FUN_0002f0ec(ulong param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  code *pcVar2;
  uint uVar3;
  
  uVar3 = (uint)(param_2 >> 0x3b) & 1;
  if ((param_3 & 0x1000000000000000) == 0) {
    uVar3 = 1;
  }
  if ((param_1 & 0xc) == 4L << uVar3) {
    FUN_0002269c();
  }
  uVar1 = param_2 & 0xffffffffffff;
  if ((param_3 & 0x2000000000000000) != 0) {
    uVar1 = param_3 >> 0x38 & 0xf;
  }
  if (param_1 >> 0x10 <= uVar1) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x2f158);
  (*pcVar2)();
}



/* Entry: 0002f158; end: 0002f2db;  */

undefined1  [16] FUN_0002f158(undefined8 param_1,long param_2)

{
  long *plVar1;
  undefined1 auVar2 [16];
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long extraout_x8;
  long lVar10;
  undefined1 *puVar11;
  long lVar12;
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 *puStack_50;
  
  lVar3 = 0;
  __s10Foundation12CharacterSetVMa();
  lVar12 = *(long *)(lVar3 + -8);
  lVar4 = lVar3;
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar12 + 0x40));
  puVar11 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  __s10Foundation3URLV14pathComponentsSaySSGvg();
  lVar10 = *(long *)(lVar4 + 0x10);
  if (lVar10 == 0) {
    _swift_bridgeObjectRelease();
    __s10Foundation3URLV14absoluteStringSSvg();
  }
  else {
    plVar1 = (long *)(lVar4 + 0x10) + lVar10 * 2;
    lVar10 = *plVar1;
    param_2 = plVar1[1];
    _swift_bridgeObjectRetain(param_2);
    _swift_bridgeObjectRelease(lVar4);
    lVar4 = lVar10;
  }
  __s10Foundation12CharacterSetV12charactersInACSSh_tcfC
            (puVar11,0xd000000000000040,0x80000000008b5650);
  uVar5 = 0x2f374;
  puStack_50 = puVar11;
  FUN_0002e960(0x2f374,&uStack_60,lVar4,param_2);
  _swift_bridgeObjectRelease(param_2);
  uVar6 = 0xae6938;
  uStack_60 = uVar5;
  func_0x000115a8(0xae6938,&UNK_007cdb30);
  uVar7 = uVar6;
  func_0x0002f390();
  uVar8 = 0;
  uVar9 = 0xe000000000000000;
  __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0,0xe000000000000000,uVar6,uVar7);
  _swift_bridgeObjectRelease(uVar5);
  uStack_60 = uVar8;
  uStack_58 = uVar9;
  _swift_bridgeObjectRetain(uVar9);
  __sSS6appendyySSF(0x676e702e,0xe400000000000000);
  _swift_bridgeObjectRelease(uVar9);
  auVar2._8_8_ = uStack_58;
  auVar2._0_8_ = uStack_60;
  (**(code **)(lVar12 + 8))(puVar11,lVar3);
  return auVar2;
}



/* Entry: 0002f2dc; end: 0002f373;  */

undefined8 FUN_0002f2dc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0xae6dd0;
  func_0x000115a8(0xae6dd0,&UNK_007ce690);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 0002f374; end: 0002f3df;  */

void FUN_0002f374(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_0002e860(param_1,*(undefined8 *)(unaff_x20 + 0x10),param_2);
  return;
}



/* Entry: 0002f3e0; end: 0002f647;  */

long FUN_0002f3e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 *param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  lVar1 = 0;
  FUN_0002ed64();
  _swift_allocObject();
  _swift_bridgeObjectRetain(param_2);
  _objc_retain(param_3);
  _swift_defaultActor_initialize(lVar1);
  *(undefined8 *)(lVar1 + 0x70) = param_1;
  *(undefined8 *)(lVar1 + 0x78) = param_2;
  puVar2 = PTR__OBJC_CLASS___SCExtensionSharedDirectory_00ac2a70;
  _objc_allocWithZone();
  _swift_bridgeObjectRetain(param_2);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_1,param_2);
  _swift_bridgeObjectRelease(param_2);
  uVar3 = 0xd00000000000001e;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001e,0x80000000008b56a0);
  func_0x00784ac0();
  _objc_release(param_1);
  _objc_release(uVar3);
  _objc_release(param_3);
  *(undefined **)(lVar1 + 0x80) = puVar2;
  *(long *)(unaff_x20 + 0x28) = lVar1;
  *(undefined8 *)(unaff_x20 + 0x30) = param_4;
  uVar3 = *param_5;
  uVar5 = param_5[3];
  uVar4 = param_5[2];
  *(undefined8 *)(unaff_x20 + 0x40) = param_5[1];
  *(undefined8 *)(unaff_x20 + 0x38) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x50) = uVar5;
  *(undefined8 *)(unaff_x20 + 0x48) = uVar4;
  *(undefined8 *)(unaff_x20 + 0x58) = param_5[4];
  return unaff_x20;
}



/* Entry: 0002f648; end: 0002f743;  */

void FUN_0002f648(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x160) = param_3;
  *(undefined8 *)(unaff_x22 + 0x168) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x150) = param_1;
  *(undefined8 *)(unaff_x22 + 0x158) = param_2;
  lVar1 = 0;
  __s10Foundation4DateVMa();
  *(long *)(unaff_x22 + 0x170) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x178) = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x180) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x188) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(0x2f6b8,0,0);
  return;
}



/* Entry: 0002f744; end: 0002f94b;  */

void FUN_0002f744(double param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  
  if ((*(byte *)(unaff_x22 + 0x1b8) & 1) == 0) {
    *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x140;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_0002f94c;
    _swift_continuation_init(unaff_x22 + 0x10,1);
    FUN_0002fdac();
                    /* WARNING: Could not recover jumptable at 0x0077b284. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_0099c058)(unaff_x22 + 0x10);
    return;
  }
  lVar2 = *(long *)(unaff_x22 + 0x160);
  if (lVar2 == 0) {
    (**(code **)(*(long *)(unaff_x22 + 0x178) + 8))
              (*(undefined8 *)(unaff_x22 + 0x188),*(undefined8 *)(unaff_x22 + 0x170));
  }
  else {
    FUN_0002ff40(*(long *)(unaff_x22 + 0x168) + 0x38,unaff_x22 + 0x118);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x188);
    if (*(long *)(unaff_x22 + 0x130) == 0) {
      (**(code **)(*(long *)(unaff_x22 + 0x178) + 8))(uVar3,*(undefined8 *)(unaff_x22 + 0x170));
      FUN_000308bc(unaff_x22 + 0x118,0xae6de0,&UNK_007ce168);
    }
    else {
      lVar1 = *(long *)(unaff_x22 + 0x178);
      uVar4 = *(undefined8 *)(unaff_x22 + 0x180);
      uVar5 = *(undefined8 *)(unaff_x22 + 0x170);
      FUN_0002ff90(unaff_x22 + 0x118,unaff_x22 + 0xf0);
      __s10Foundation4DateVACycfC(uVar4);
      __s10Foundation4DateV17timeIntervalSinceySdACF(uVar3);
      pcVar7 = *(code **)(lVar1 + 8);
      (*pcVar7)(uVar4,uVar5);
      param_1 = param_1 * 1000.0;
      if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x2f944);
        (*pcVar7)();
      }
      if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x2f948);
        (*pcVar7)();
      }
      if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x2f94c);
        (*pcVar7)();
      }
      uVar5 = *(undefined8 *)(unaff_x22 + 0x188);
      uVar6 = *(undefined8 *)(unaff_x22 + 0x170);
      uVar4 = *(undefined8 *)(unaff_x22 + 0x158);
      uVar3 = *(undefined8 *)(unaff_x22 + 0x108);
      lVar1 = *(long *)(unaff_x22 + 0x110);
      FUN_0001393c(unaff_x22 + 0xf0,uVar3);
      (**(code **)(lVar1 + 8))(uVar4,lVar2,(long)param_1,uVar3,lVar1);
      (*pcVar7)(uVar5,uVar6);
      FUN_00011670(unaff_x22 + 0xf0);
    }
  }
  uVar3 = *(undefined8 *)(unaff_x22 + 0x180);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x188));
  _swift_task_dealloc(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0002f93c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 0002f94c; end: 0002f9fb;  */

void FUN_0002f94c(void)

{
  qword qVar1;
  qword qVar2;
  char *pcVar3;
  code *pcVar4;
  undefined8 uVar5;
  long *unaff_x22;
  long lVar6;
  long lVar7;
  
  lVar7 = *unaff_x22;
  lVar6 = *unaff_x22;
  *(long *)(lVar7 + 0x198) = *(long *)(lVar7 + 0x30);
  if (*(long *)(lVar7 + 0x30) == 0) {
    qVar1 = *(qword *)(lVar7 + 0x140);
    qVar2 = *(qword *)(lVar7 + 0x148);
    *(qword *)(lVar7 + 0x1a0) = qVar1;
    *(qword *)(lVar7 + 0x1a8) = qVar2;
    pcVar3 = segment_command_00000020.segname + 8;
    _swift_task_alloc();
    *(char **)(lVar7 + 0x1b0) = pcVar3;
    *(long *)pcVar3 = lVar6;
    *(code **)(pcVar3 + 8) = FUN_0002f9fc;
    uVar5 = *(undefined8 *)(lVar7 + 400);
    *(qword *)(pcVar3 + 0x20) = *(qword *)(lVar7 + 0x150);
    *(undefined8 *)(pcVar3 + 0x28) = uVar5;
    *(qword *)(pcVar3 + 0x10) = qVar1;
    *(qword *)(pcVar3 + 0x18) = qVar2;
    pcVar4 = FUN_0002e488;
  }
  else {
    _swift_willThrow();
    pcVar4 = FUN_0002fc28;
    uVar5 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(pcVar4,uVar5,0);
  return;
}



/* Entry: 0002f9fc; end: 0002fa43;  */

void FUN_0002f9fc(void)

{
  long *unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x1b0));
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_0002fa44,0,0);
  return;
}



/* Entry: 0002fa44; end: 0002fc27;  */

void FUN_0002fa44(double param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  undefined8 uVar7;
  long unaff_x22;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar5 = *(long *)(unaff_x22 + 0x160);
  if (lVar5 == 0) {
    uVar1 = *(undefined8 *)(unaff_x22 + 0x1a0);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x1a8);
    (**(code **)(*(long *)(unaff_x22 + 0x178) + 8))
              (*(undefined8 *)(unaff_x22 + 0x188),*(undefined8 *)(unaff_x22 + 0x170));
    FUN_00023358(uVar1,uVar2);
  }
  else {
    FUN_0002ff40(*(long *)(unaff_x22 + 0x168) + 0x38,unaff_x22 + 200);
    if (*(long *)(unaff_x22 + 0xe0) == 0) {
      uVar1 = *(undefined8 *)(unaff_x22 + 0x1a0);
      uVar2 = *(undefined8 *)(unaff_x22 + 0x1a8);
      (**(code **)(*(long *)(unaff_x22 + 0x178) + 8))
                (*(undefined8 *)(unaff_x22 + 0x188),*(undefined8 *)(unaff_x22 + 0x170));
      FUN_00023358(uVar1,uVar2);
      FUN_000308bc(unaff_x22 + 200,0xae6de0,&UNK_007ce168);
    }
    else {
      uVar1 = *(undefined8 *)(unaff_x22 + 0x180);
      uVar3 = *(undefined8 *)(unaff_x22 + 0x188);
      uVar2 = *(undefined8 *)(unaff_x22 + 0x170);
      lVar4 = *(long *)(unaff_x22 + 0x178);
      FUN_0002ff90(unaff_x22 + 200,unaff_x22 + 0xa0);
      __s10Foundation4DateVACycfC(uVar1);
      __s10Foundation4DateV17timeIntervalSinceySdACF(uVar3);
      pcVar6 = *(code **)(lVar4 + 8);
      (*pcVar6)(uVar1,uVar2);
      param_1 = param_1 * 1000.0;
      if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x2fc20);
        (*pcVar6)();
      }
      if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x2fc24);
        (*pcVar6)();
      }
      if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x2fc28);
        (*pcVar6)();
      }
      uVar1 = *(undefined8 *)(unaff_x22 + 0x1a0);
      uVar3 = *(undefined8 *)(unaff_x22 + 0x1a8);
      uVar8 = *(undefined8 *)(unaff_x22 + 0x188);
      uVar9 = *(undefined8 *)(unaff_x22 + 0x170);
      uVar7 = *(undefined8 *)(unaff_x22 + 0x158);
      uVar2 = *(undefined8 *)(unaff_x22 + 0xb8);
      lVar4 = *(long *)(unaff_x22 + 0xc0);
      FUN_0001393c(unaff_x22 + 0xa0,uVar2);
      (**(code **)(lVar4 + 8))(uVar7,lVar5,(long)param_1,uVar2,lVar4);
      FUN_00023358(uVar1,uVar3);
      (*pcVar6)(uVar8,uVar9);
      FUN_00011670(unaff_x22 + 0xa0);
    }
  }
  uVar1 = *(undefined8 *)(unaff_x22 + 0x180);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x188));
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0002fc18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 0002fc28; end: 0002fdab;  */

void FUN_0002fc28(double param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x22 + 0x160);
  if (lVar5 != 0) {
    FUN_0002ff40(*(long *)(unaff_x22 + 0x168) + 0x38,unaff_x22 + 0x78);
    if (*(long *)(unaff_x22 + 0x90) == 0) {
      FUN_000308bc(unaff_x22 + 0x78,0xae6de0,&UNK_007ce168);
    }
    else {
      uVar1 = *(undefined8 *)(unaff_x22 + 0x180);
      uVar2 = *(undefined8 *)(unaff_x22 + 0x188);
      uVar6 = *(undefined8 *)(unaff_x22 + 0x170);
      lVar3 = *(long *)(unaff_x22 + 0x178);
      FUN_0002ff90(unaff_x22 + 0x78,unaff_x22 + 0x50);
      __s10Foundation4DateVACycfC(uVar1);
      __s10Foundation4DateV17timeIntervalSinceySdACF(uVar2);
      (**(code **)(lVar3 + 8))(uVar1,uVar6);
      param_1 = param_1 * 1000.0;
      if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x2fda4);
        (*pcVar4)();
      }
      if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x2fda8);
        (*pcVar4)();
      }
      if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x2fdac);
        (*pcVar4)();
      }
      uVar6 = *(undefined8 *)(unaff_x22 + 0x158);
      uVar1 = *(undefined8 *)(unaff_x22 + 0x68);
      lVar3 = *(long *)(unaff_x22 + 0x70);
      FUN_0001393c(unaff_x22 + 0x50,uVar1);
      (**(code **)(lVar3 + 0x10))(uVar6,lVar5,(long)param_1,uVar1,lVar3);
      FUN_00011670(unaff_x22 + 0x50);
    }
  }
  uVar1 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x188);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x170);
  lVar5 = *(long *)(unaff_x22 + 0x178);
  _swift_willThrow();
  (**(code **)(lVar5 + 8))(uVar2,uVar6);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0002fd9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 0002fdac; end: 0002ff3f;  */

void FUN_0002fdac(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar6 = &puStack_70;
  lVar1 = 0xae64c8;
  func_0x000115a8(0xae64c8,&UNK_007cd140);
  _swift_initStaticObject();
  lVar2 = lVar1;
  func_0x00020958();
  uVar7 = 0xae64d0;
  lVar1 = lVar1 + 0x20;
  FUN_000308bc(lVar1,0xae64d0,&UNK_007cd4a0);
  uVar8 = *(undefined8 *)(param_2 + 0x20);
  __s10Foundation3URLV14absoluteStringSSvg();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  _swift_bridgeObjectRelease(uVar7);
  lVar3 = lVar2;
  FUN_0002ffa8(lVar2);
  _swift_bridgeObjectRelease(lVar2);
  lVar2 = lVar3;
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
            (lVar3,PTR___ss11AnyHashableVN_0099b3f8,PTR___sypN_0099b8d8 + 8,
             PTR___ss11AnyHashableVSHsWP_0099b400);
  _swift_bridgeObjectRelease(lVar3);
  puVar4 = &UNK_0099e9c0;
  _swift_allocObject(&UNK_0099e9c0,0x18,7);
  _swift_weakInit(puVar4 + 0x10,param_2);
  puVar5 = &UNK_0099e9e8;
  _swift_allocObject(&UNK_0099e9e8,0x20,7);
  *(undefined **)(puVar5 + 0x10) = puVar4;
  *(undefined8 *)(puVar5 + 0x18) = param_1;
  pcStack_50 = FUN_00030844;
  puStack_70 = PTR___NSConcreteStackBlock_00999f30;
  uStack_68 = 0x42000000;
  uStack_60 = 0x306bc;
  puStack_58 = &UNK_0099ea00;
  puStack_48 = puVar5;
  __Block_copy(&puStack_70);
  _swift_release(puStack_48);
  func_0x00788d00(uVar8);
  __Block_release(ppuVar6);
  _objc_release(lVar1);
  _objc_release(lVar2);
  return;
}



/* Entry: 0002ff40; end: 0002ff8f;  */

undefined8 FUN_0002ff40(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0xae6de0;
  func_0x000115a8(0xae6de0,&UNK_007ce168);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 0002ff90; end: 0002ffa7;  */

undefined8 * FUN_0002ff90(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 0002ffa8; end: 000302c7;  */

undefined * FUN_0002ffa8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined *puVar13;
  ulong uVar14;
  long lVar15;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
  undefined8 uStack_138;
  undefined1 auStack_130 [32];
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined1 auStack_e8 [40];
  undefined1 auStack_c0 [32];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  
  puVar12 = *(undefined **)(param_1 + 0x10);
  puVar13 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  if (puVar12 != (undefined *)0x0) {
    uVar5 = 0xae6ef8;
    func_0x000115a8(0xae6ef8,&UNK_007ce1c0);
    __ss18_DictionaryStorageC8allocate8capacityAByxq_GSi_tFZ(puVar12,uVar5);
    puVar13 = puVar12;
  }
  uVar9 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar14 = 0xffffffffffffffff;
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
    uVar14 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar14 = uVar14 & *(ulong *)(param_1 + 0x40);
  _swift_retain(puVar13);
  _swift_bridgeObjectRetain(param_1);
  lVar15 = 0;
  while( true ) {
    for (; uVar14 != 0; uVar14 = uVar14 - 1 & uVar14) {
      uVar7 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = lVar15 << 10 | LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) << 4;
      puVar10 = (undefined8 *)(*(long *)(param_1 + 0x30) + uVar7);
      uStack_168 = *puVar10;
      uVar1 = puVar10[1];
      puVar10 = (undefined8 *)(*(long *)(param_1 + 0x38) + uVar7);
      uVar5 = *puVar10;
      uVar2 = puVar10[1];
      uStack_160 = uVar1;
      _swift_bridgeObjectRetain_n(uVar1,2);
      _swift_bridgeObjectRetain_n(uVar2,2);
      puVar12 = PTR___sSSN_0099b040;
      _swift_dynamicCast(&uStack_158,&uStack_168,PTR___sSSN_0099b040,
                         PTR___ss11AnyHashableVN_0099b3f8,7);
      uStack_178 = uVar5;
      uStack_170 = uVar2;
      _swift_dynamicCast(auStack_130,&uStack_178,puVar12,PTR___sypN_0099b8d8 + 8,7);
      _swift_bridgeObjectRelease(uVar2);
      _swift_bridgeObjectRelease(uVar1);
      if (lStack_140 == 0) {
        _swift_release(param_1);
        FUN_000308bc(&uStack_158,0xae6f00,&UNK_007ce1c8);
        _swift_release(puVar13);
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x302c8);
        (*pcVar3)();
      }
      uStack_108 = uStack_150;
      uStack_110 = uStack_158;
      lStack_f8 = lStack_140;
      uStack_100 = uStack_148;
      uStack_f0 = uStack_138;
      FUN_000252c8(auStack_130,auStack_e8);
      uStack_98 = uStack_108;
      uStack_a0 = uStack_110;
      lStack_88 = lStack_f8;
      uStack_90 = uStack_100;
      uStack_80 = uStack_f0;
      FUN_000252c8(auStack_e8,auStack_c0);
      uVar6 = *(ulong *)(puVar13 + 0x28);
      __ss11AnyHashableV13_rawHashValue4seedS2i_tF();
      uVar11 = -1L << ((ulong)(byte)puVar13[0x20] & 0x3f);
      uVar6 = uVar6 & (uVar11 ^ 0xffffffffffffffff);
      uVar8 = uVar6 >> 6;
      uVar7 = -1L << (uVar6 & 0x3f) & (*(ulong *)(puVar13 + uVar8 * 8 + 0x40) ^ 0xffffffffffffffff);
      if (uVar7 == 0) {
        bVar4 = false;
        uVar7 = 0x3f - uVar11 >> 6;
        do {
          uVar6 = uVar8 + 1;
          if ((uVar6 == uVar7) && (bVar4)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x3029c);
            (*pcVar3)();
          }
          uVar8 = 0;
          if (uVar6 != uVar7) {
            uVar8 = uVar6;
          }
          bVar4 = (bool)(uVar6 == uVar7 | bVar4);
        } while (*(ulong *)(puVar13 + uVar8 * 8 + 0x40) == 0xffffffffffffffff);
        uVar7 = ~*(ulong *)(puVar13 + uVar8 * 8 + 0x40);
        uVar7 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
        uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
        uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
        uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
        uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) | uVar8 << 6;
      }
      else {
        uVar7 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
        uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
        uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
        uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
        uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) | uVar6 & 0x7fffffffffffffc0;
      }
      uVar8 = uVar7 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar13 + uVar8 + 0x40) = 1L << (uVar7 & 0x3f) | *(ulong *)(puVar13 + uVar8 + 0x40)
      ;
      puVar10 = (undefined8 *)(*(long *)(puVar13 + 0x30) + uVar7 * 0x28);
      puVar10[1] = uStack_98;
      *puVar10 = uStack_a0;
      puVar10[3] = lStack_88;
      puVar10[2] = uStack_90;
      puVar10[4] = uStack_80;
      FUN_000252c8(auStack_c0,*(long *)(puVar13 + 0x38) + uVar7 * 0x20);
      *(long *)(puVar13 + 0x10) = *(long *)(puVar13 + 0x10) + 1;
    }
    bVar4 = SCARRY8(lVar15,1);
    lVar15 = lVar15 + 1;
    if (bVar4) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x30298);
      (*pcVar3)();
    }
    if ((long)(uVar9 + 0x3f >> 6) <= lVar15) break;
    uVar14 = ((ulong *)(param_1 + 0x40))[lVar15];
  }
  _swift_release(puVar13);
  _swift_release(param_1);
  return puVar13;
}



/* Entry: 000302c8; end: 00030787;  */

void FUN_000302c8(undefined8 param_1,long param_2,ulong param_3,long param_4,long param_5,
                 long param_6)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  uint uVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined1 *puStack_70;
  undefined1 auStack_68 [24];
  
  _swift_beginAccess(param_5 + 0x10,auStack_68,0,0);
  param_5 = param_5 + 0x10;
  _swift_weakLoadStrong();
  if (param_5 == 0) {
    return;
  }
  if (0xe < param_3 >> 0x3c) goto LAB_00030490;
  uVar1 = (uint)(param_3 >> 0x20);
  uVar10 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar10 == 0) {
      if ((param_3 & 0xff000000000000) == 0) goto LAB_00030484;
    }
    else {
      if ((long)(int)param_2 == param_2 >> 0x20) goto LAB_00030490;
LAB_0003036c:
      FUN_000308a8(param_2,param_3);
    }
    puVar2 = PTR__OBJC_CLASS___UIImage_00ac2a88;
    _objc_allocWithZone();
    func_0x00023304(param_2,param_3);
    lVar13 = param_2;
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(param_2,param_3);
    func_0x007851c0();
    _objc_release(lVar13);
    uVar8 = param_3;
    FUN_00023344(param_2,param_3);
    if (puVar2 != (undefined *)0x0) {
      puVar3 = puVar2;
      _UIImagePNGRepresentation();
      _objc_retainAutoreleasedReturnValue();
      if (puVar3 != (undefined *)0x0) {
        puVar4 = puVar3;
        __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
        _objc_release(puVar3);
        FUN_00023358(puVar4,uVar8);
        lVar13 = *(long *)(param_5 + 0x30);
        if (lVar13 != 0) {
          _swift_retain(lVar13);
          func_0x0002c264(0x65665f6567616d69,0xeb00000000686374);
          _swift_release(lVar13);
        }
        func_0x00023304(param_2,param_3);
        plVar11 = *(long **)(*(long *)(param_6 + 0x40) + 0x28);
        *plVar11 = param_2;
        plVar11[1] = param_3;
        _swift_continuation_throwingResume(param_6);
        _swift_release(param_5);
        _objc_release(puVar2);
        FUN_00023344(param_2,param_3);
        return;
      }
      _objc_release(puVar2);
    }
  }
  else if (uVar10 == 2) {
    if (*(long *)(param_2 + 0x10) == *(long *)(param_2 + 0x18)) goto LAB_00030490;
    goto LAB_0003036c;
  }
LAB_00030484:
  FUN_00023344(param_2,param_3);
LAB_00030490:
  if (param_4 == 0) {
    lVar13 = *(long *)(param_5 + 0x30);
    if (lVar13 != 0) {
      _swift_retain(lVar13);
      func_0x0002c3fc(0x65665f6567616d69,0xeb00000000686374,0);
      _swift_release(lVar13);
    }
    puVar6 = (undefined1 *)0xd000000000000030;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000030,0x80000000008b56c0);
    _objc_release();
    FUN_00030868();
    puVar2 = &__s23ExtensionsStickerPicker0B8ExtErrorON;
    _swift_allocError(&__s23ExtensionsStickerPicker0B8ExtErrorON,puVar6,0,0);
    *puVar6 = 0;
    uVar7 = 0xae60d0;
    func_0x000115a8(0xae60d0,&UNK_007ccdd0);
    puVar9 = (undefined8 *)PTR___ss5ErrorWS_0099b720;
    _swift_allocError();
    *puVar9 = puVar2;
    _swift_continuation_throwingResumeWithError(param_6,uVar7);
  }
  else {
    _swift_errorRetain(param_4);
    lVar13 = param_4;
    __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF(param_4);
    lVar5 = lVar13;
    func_0x00780460();
    lVar12 = *(long *)(param_5 + 0x30);
    if (lVar12 != 0) {
      _swift_retain(lVar12);
      func_0x0002c3fc(0x65665f6567616d69,0xeb00000000686374,lVar5);
      _swift_release(lVar12);
    }
    _objc_release(lVar13);
    uStack_78 = 0;
    puStack_70 = (undefined1 *)0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x2b);
    _swift_bridgeObjectRelease(puStack_70);
    uStack_78 = 0xd000000000000029;
    puStack_70 = (undefined1 *)0x80000000008b5700;
    _swift_getErrorValue(param_4,auStack_80,auStack_98);
    uVar7 = uStack_88;
    __ss5ErrorP10FoundationE20localizedDescriptionSSvg(uStack_90,uStack_88);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(uVar7);
    puVar6 = puStack_70;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_78,puStack_70);
    _objc_release();
    _swift_bridgeObjectRelease();
    FUN_00030868();
    puVar2 = &__s23ExtensionsStickerPicker0B8ExtErrorON;
    _swift_allocError(&__s23ExtensionsStickerPicker0B8ExtErrorON,puVar6,0,0);
    *puVar6 = 0;
    uVar7 = 0xae60d0;
    func_0x000115a8(0xae60d0,&UNK_007ccdd0);
    puVar9 = (undefined8 *)PTR___ss5ErrorWS_0099b720;
    _swift_allocError();
    *puVar9 = puVar2;
    _swift_continuation_throwingResumeWithError(param_6,uVar7);
    _swift_errorRelease(param_4);
  }
  _swift_release(param_5);
  return;
}



/* Entry: 00030788; end: 00030843;  */

void FUN_00030788(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _objc_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
  FUN_000308bc(unaff_x20 + 0x38,0xae6de0,&UNK_007ce168);
                    /* WARNING: Could not recover jumptable at 0x0077b2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_0099b9a0)();
  return;
}



/* Entry: 00030844; end: 00030867;  */

void FUN_00030844(undefined8 param_1,long param_2,ulong param_3,long param_4)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  uint uVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long unaff_x20;
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined1 *puStack_70;
  undefined1 auStack_68 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  _swift_beginAccess(lVar3 + 0x10,auStack_68,0,0);
  lVar3 = lVar3 + 0x10;
  _swift_weakLoadStrong();
  if (lVar3 == 0) {
    return;
  }
  if (0xe < param_3 >> 0x3c) goto LAB_00030490;
  uVar2 = (uint)(param_3 >> 0x20);
  uVar12 = uVar2 >> 0x1e;
  if (uVar2 >> 0x1e < 2) {
    if (uVar12 == 0) {
      if ((param_3 & 0xff000000000000) == 0) goto LAB_00030484;
    }
    else {
      if ((long)(int)param_2 == param_2 >> 0x20) goto LAB_00030490;
LAB_0003036c:
      FUN_000308a8(param_2,param_3);
    }
    puVar4 = PTR__OBJC_CLASS___UIImage_00ac2a88;
    _objc_allocWithZone();
    func_0x00023304(param_2,param_3);
    lVar15 = param_2;
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(param_2,param_3);
    func_0x007851c0();
    _objc_release(lVar15);
    uVar10 = param_3;
    FUN_00023344(param_2,param_3);
    if (puVar4 != (undefined *)0x0) {
      puVar5 = puVar4;
      _UIImagePNGRepresentation();
      _objc_retainAutoreleasedReturnValue();
      if (puVar5 != (undefined *)0x0) {
        puVar6 = puVar5;
        __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
        _objc_release(puVar5);
        FUN_00023358(puVar6,uVar10);
        lVar15 = *(long *)(lVar3 + 0x30);
        if (lVar15 != 0) {
          _swift_retain(lVar15);
          func_0x0002c264(0x65665f6567616d69,0xeb00000000686374);
          _swift_release(lVar15);
        }
        func_0x00023304(param_2,param_3);
        plVar13 = *(long **)(*(long *)(lVar1 + 0x40) + 0x28);
        *plVar13 = param_2;
        plVar13[1] = param_3;
        _swift_continuation_throwingResume(lVar1);
        _swift_release(lVar3);
        _objc_release(puVar4);
        FUN_00023344(param_2,param_3);
        return;
      }
      _objc_release(puVar4);
    }
  }
  else if (uVar12 == 2) {
    if (*(long *)(param_2 + 0x10) == *(long *)(param_2 + 0x18)) goto LAB_00030490;
    goto LAB_0003036c;
  }
LAB_00030484:
  FUN_00023344(param_2,param_3);
LAB_00030490:
  if (param_4 == 0) {
    lVar15 = *(long *)(lVar3 + 0x30);
    if (lVar15 != 0) {
      _swift_retain(lVar15);
      func_0x0002c3fc(0x65665f6567616d69,0xeb00000000686374,0);
      _swift_release(lVar15);
    }
    puVar8 = (undefined1 *)0xd000000000000030;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000030,0x80000000008b56c0);
    _objc_release();
    FUN_00030868();
    puVar4 = &__s23ExtensionsStickerPicker0B8ExtErrorON;
    _swift_allocError(&__s23ExtensionsStickerPicker0B8ExtErrorON,puVar8,0,0);
    *puVar8 = 0;
    uVar9 = 0xae60d0;
    func_0x000115a8(0xae60d0,&UNK_007ccdd0);
    puVar11 = (undefined8 *)PTR___ss5ErrorWS_0099b720;
    _swift_allocError();
    *puVar11 = puVar4;
    _swift_continuation_throwingResumeWithError(lVar1,uVar9);
  }
  else {
    _swift_errorRetain(param_4);
    lVar15 = param_4;
    __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF(param_4);
    lVar7 = lVar15;
    func_0x00780460();
    lVar14 = *(long *)(lVar3 + 0x30);
    if (lVar14 != 0) {
      _swift_retain(lVar14);
      func_0x0002c3fc(0x65665f6567616d69,0xeb00000000686374,lVar7);
      _swift_release(lVar14);
    }
    _objc_release(lVar15);
    uStack_78 = 0;
    puStack_70 = (undefined1 *)0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x2b);
    _swift_bridgeObjectRelease(puStack_70);
    uStack_78 = 0xd000000000000029;
    puStack_70 = (undefined1 *)0x80000000008b5700;
    _swift_getErrorValue(param_4,auStack_80,auStack_98);
    uVar9 = uStack_88;
    __ss5ErrorP10FoundationE20localizedDescriptionSSvg(uStack_90,uStack_88);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(uVar9);
    puVar8 = puStack_70;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_78,puStack_70);
    _objc_release();
    _swift_bridgeObjectRelease();
    FUN_00030868();
    puVar4 = &__s23ExtensionsStickerPicker0B8ExtErrorON;
    _swift_allocError(&__s23ExtensionsStickerPicker0B8ExtErrorON,puVar8,0,0);
    *puVar8 = 0;
    uVar9 = 0xae60d0;
    func_0x000115a8(0xae60d0,&UNK_007ccdd0);
    puVar11 = (undefined8 *)PTR___ss5ErrorWS_0099b720;
    _swift_allocError();
    *puVar11 = puVar4;
    _swift_continuation_throwingResumeWithError(lVar1,uVar9);
    _swift_errorRelease(param_4);
  }
  _swift_release(lVar3);
  return;
}



/* Entry: 00030868; end: 000308a7;  */

void FUN_00030868(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae6ef0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007ce028;
  _swift_getWitnessTable(&UNK_007ce028,&__s23ExtensionsStickerPicker0B8ExtErrorON);
  puRam0000000000ae6ef0 = puVar1;
  return;
}



/* Entry: 000308a8; end: 000308bb;  */

void FUN_000308a8(undefined8 param_1,ulong param_2)

{
  uint uVar1;
  
  if (0xe < param_2 >> 0x3c) {
    return;
  }
  uVar1 = (uint)(param_2 >> 0x3e);
  if (uVar1 != 1) {
    if (uVar1 != 2) {
      return;
    }
    _swift_retain();
  }
                    /* WARNING: Could not recover jumptable at 0x0077b53c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_0099bb30)(param_2 & 0x3fffffffffffffff);
  return;
}



/* Entry: 000308bc; end: 000308fb;  */

undefined8 FUN_000308bc(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x000115a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 000308fc; end: 00030947;  */

undefined8 FUN_000308fc(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  
  _swift_allocObject();
  __s23ExtensionsStickerPicker0B20MetaDataCacheManagerC6userIdACSS_tcfc(param_1,param_2);
  return unaff_x20;
}



/* Entry: 00030948; end: 00030a37;  */

void __s23ExtensionsStickerPicker0B20MetaDataCacheManagerC6userIdACSS_tcfc
               (undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  _swift_defaultActor_initialize();
  puVar1 = PTR___swiftEmptyArrayStorage_0099b8f0;
  FUN_0002cb58();
  *(undefined **)(unaff_x20 + 0x88) = puVar1;
  *(undefined8 *)(unaff_x20 + 0x90) = 0x61635f7364656566;
  *(undefined8 *)(unaff_x20 + 0x98) = 0xeb00000000656863;
  *(undefined8 *)(unaff_x20 + 0xa0) = 0x40ac200000000000;
  *(undefined8 *)(unaff_x20 + 0x70) = param_1;
  *(undefined8 *)(unaff_x20 + 0x78) = param_2;
  puVar1 = PTR__OBJC_CLASS___SCExtensionSharedDirectory_00ac2a70;
  _objc_allocWithZone();
  _swift_bridgeObjectRetain(param_2);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_1,param_2);
  _swift_bridgeObjectRelease(param_2);
  uVar2 = 0xd000000000000021;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000021,0x80000000008b5730);
  func_0x00784ac0();
  _objc_release(param_1);
  _objc_release(uVar2);
  *(undefined **)(unaff_x20 + 0x80) = puVar1;
  return;
}



/* Entry: 00030a38; end: 00030cf3;  */

/* WARNING: Removing unreachable block (ram,0x00030dbc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00030a38(long param_1,undefined8 ****param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 ****ppppuVar2;
  undefined8 ****ppppuVar3;
  undefined8 ***pppuVar4;
  undefined8 ****ppppuVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long extraout_x8;
  undefined8 *puVar11;
  undefined8 ****unaff_x20;
  undefined8 ***pppuVar12;
  undefined8 uVar13;
  undefined8 auStack_100 [8];
  undefined8 **ppuStack_c0;
  undefined8 ***pppuStack_b8;
  undefined8 ***pppuStack_b0;
  undefined8 ***pppuStack_a8;
  undefined8 ***pppuStack_a0;
  undefined8 uStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 **ppuStack_80;
  undefined8 ***pppuStack_70;
  undefined8 uStack_68;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  ppppuVar2 = (undefined8 ****)PTR__OBJC_CLASS___NSKeyedArchiver_00ac2ac8;
  ppppuVar5 = param_2;
  _objc_opt_self();
  pppuStack_70 = (undefined8 ****)0x0;
  func_0x0077efe0();
  _objc_retainAutoreleasedReturnValue();
  ppppuVar3 = (undefined8 ****)pppuStack_70;
  _objc_retain();
  if (ppppuVar2 == (undefined8 ****)0x0) {
    ppppuVar5 = ppppuVar3;
    __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
    _objc_release(ppppuVar3);
    _swift_willThrow();
    pppuStack_70 = (undefined8 ****)0x0;
    uStack_68 = 0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x3e);
    __sSS6appendyySSF(0xd00000000000003c,0x80000000008b5920);
    unaff_x20 = &pppuStack_70;
    __sSS6appendyySSF(param_2,param_3);
    param_3 = uStack_68;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(pppuStack_70,uStack_68);
    _objc_release();
    _swift_bridgeObjectRelease(param_3);
    ppppuVar2 = ppppuVar5;
    _swift_errorRelease();
    pppuVar12 = (undefined8 ***)0x0;
    pppuStack_b8 = ppppuVar5;
  }
  else {
    ppppuVar3 = ppppuVar2;
    __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
    _objc_release(ppppuVar2);
    pppuVar12 = unaff_x20[0x10];
    if (pppuVar12 != (undefined8 ***)0x0) {
      ppppuVar2 = param_2;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_2,param_3);
      func_0x00791560();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppppuVar2);
      if (pppuVar12 != (undefined8 ***)0x0) {
        ppppuVar2 = ppppuVar3;
        __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(ppppuVar3,ppppuVar5);
        func_0x00793d20(pppuVar12);
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(ppppuVar2);
        uVar13 = *(undefined8 *)(param_1 + _DAT_00ae7018);
        _swift_beginAccess(unaff_x20 + 0x11,&pppuStack_70,0x21,0);
        _swift_bridgeObjectRetain(param_3);
        _swift_bridgeObjectRetain(uVar13);
        pppuVar4 = unaff_x20[0x11];
        _swift_isUniquelyReferenced_nonNull_native(pppuVar4);
        ppuStack_80 = unaff_x20[0x11];
        unaff_x20[0x11] = (undefined8 ***)0x8000000000000000;
        FUN_000321b4(uVar13,param_2,param_3,pppuVar4);
        _swift_bridgeObjectRelease(param_3);
        unaff_x20[0x11] = (undefined8 ***)ppuStack_80;
        _swift_endAccess(&pppuStack_70);
        pppuStack_70 = (undefined8 ****)0x0;
        uStack_68 = 0xe000000000000000;
        __ss11_StringGutsV4growyySiF(0x39);
        __sSS6appendyySSF(0xd000000000000037,0x80000000008b5960);
        __sSS6appendyySSF(param_2,param_3);
        param_3 = uStack_68;
        unaff_x20 = (undefined8 ****)pppuStack_70;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(pppuStack_70,uStack_68);
        _objc_release(pppuVar12);
        _objc_release(unaff_x20);
        _swift_bridgeObjectRelease(param_3);
      }
    }
    ppppuVar2 = ppppuVar3;
    FUN_00023358(ppppuVar3,ppppuVar5);
    pppuStack_b8 = ppppuVar3;
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_58) {
    ___stack_chk_fail();
    pcStack_88 = FUN_00030cf4;
    lVar6 = 0;
    ppuStack_c0 = pppuVar12;
    pppuStack_b0 = param_2;
    pppuStack_a8 = ppppuVar5;
    pppuStack_a0 = unaff_x20;
    uStack_98 = param_3;
    puStack_90 = &stack0xfffffffffffffff0;
    FUN_00032cdc();
    lVar7 = lVar6;
    (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
    puVar11 = (undefined8 *)((long)auStack_100 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
    iVar1 = *(int *)(lVar7 + 0x14);
    _swift_bridgeObjectRetain(ppppuVar2);
    __s10Foundation4DateVACycfC((long)puVar11 + (long)iVar1);
    *puVar11 = ppppuVar2;
    uVar8 = 0;
    __s10Foundation11JSONEncoderCMa();
    _swift_allocObject();
    __s10Foundation11JSONEncoderCACycfc();
    uVar13 = 0xae7080;
    func_0x00032d5c(0xae7080,FUN_00032cdc,&UNK_007ce2a8);
    puVar9 = puVar11;
    __s10Foundation11JSONEncoderC6encodeyAA4DataVxKSERzlFTj(puVar11,lVar6,uVar13);
    pppuVar12 = unaff_x20[0x10];
    if (pppuVar12 != (undefined8 ***)0x0) {
      pppuVar4 = unaff_x20[0x12];
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(pppuVar4,unaff_x20[0x13]);
      func_0x00791560();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(pppuVar4);
      if (pppuVar12 != (undefined8 ***)0x0) {
        puVar10 = puVar9;
        __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(puVar9,lVar6);
        func_0x00793d20(pppuVar12);
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(puVar10);
        uVar13 = 0xd00000000000001f;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001f,0x80000000008b5860)
        ;
        FUN_00023358(puVar9,lVar6);
        _objc_release(uVar13);
        _objc_release(pppuVar12);
        _swift_release(uVar8);
        func_0x00032d20(puVar11);
        return;
      }
    }
    func_0x00032d20(puVar11);
    FUN_00023358(puVar9,lVar6);
    _swift_release(uVar8);
    return;
  }
  return;
}



/* Entry: 00030cf4; end: 00030f4b;  */

/* WARNING: Removing unreachable block (ram,0x00030dbc) */

void FUN_00030cf4(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long extraout_x8;
  undefined8 *puVar7;
  long unaff_x20;
  long lVar8;
  undefined8 auStack_80 [8];
  
  lVar2 = 0;
  FUN_00032cdc();
  lVar8 = lVar2;
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar7 = (undefined8 *)((long)auStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  iVar1 = *(int *)(lVar8 + 0x14);
  _swift_bridgeObjectRetain(param_1);
  __s10Foundation4DateVACycfC((long)puVar7 + (long)iVar1);
  *puVar7 = param_1;
  uVar3 = 0;
  __s10Foundation11JSONEncoderCMa();
  _swift_allocObject();
  __s10Foundation11JSONEncoderCACycfc();
  uVar6 = 0xae7080;
  func_0x00032d5c(0xae7080,FUN_00032cdc,&UNK_007ce2a8);
  puVar4 = puVar7;
  __s10Foundation11JSONEncoderC6encodeyAA4DataVxKSERzlFTj(puVar7,lVar2,uVar6);
  lVar8 = *(long *)(unaff_x20 + 0x80);
  if (lVar8 != 0) {
    uVar6 = *(undefined8 *)(unaff_x20 + 0x90);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar6,*(undefined8 *)(unaff_x20 + 0x98));
    func_0x00791560();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    if (lVar8 != 0) {
      puVar5 = puVar4;
      __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(puVar4,lVar2);
      func_0x00793d20(lVar8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(puVar5);
      uVar6 = 0xd00000000000001f;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001f,0x80000000008b5860);
      FUN_00023358(puVar4,lVar2);
      _objc_release(uVar6);
      _objc_release(lVar8);
      _swift_release(uVar3);
      func_0x00032d20(puVar7);
      return;
    }
  }
  func_0x00032d20(puVar7);
  FUN_00023358(puVar4,lVar2);
  _swift_release(uVar3);
  return;
}



/* Entry: 00030f4c; end: 00031367;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00030f4c(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long unaff_x20;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_68 [24];
  
  _swift_beginAccess(unaff_x20 + 0x88,auStack_68,0,0);
  lVar4 = *(long *)(unaff_x20 + 0x88);
  if (*(long *)(lVar4 + 0x10) != 0) {
    _swift_bridgeObjectRetain_n(lVar4,2);
    lVar1 = param_1;
    uVar3 = param_2;
    FUN_000202c0();
    if ((uVar3 & 1) != 0) {
      uVar5 = *(undefined8 *)(*(long *)(lVar4 + 0x38) + lVar1 * 8);
      _swift_bridgeObjectRetain(uVar5);
      _swift_bridgeObjectRelease_n(lVar4,2);
      uStack_80 = 0;
      uStack_78 = 0xe000000000000000;
      __ss11_StringGutsV4growyySiF(0x37);
      __sSS6appendyySSF(0xd000000000000035,0x80000000008b58e0);
      __sSS6appendyySSF(param_1,param_2);
      uVar2 = uStack_78;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_80,uStack_78);
      _objc_release();
      _swift_bridgeObjectRelease(uVar2);
      return uVar5;
    }
    _swift_bridgeObjectRelease_n(lVar4,2);
  }
  lVar1 = param_1;
  func_0x00031174(param_1,param_2);
  lVar4 = _DAT_00ae7018;
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(lVar1 + _DAT_00ae7018);
    _swift_beginAccess(unaff_x20 + 0x88,&uStack_80,0x21,0);
    _swift_bridgeObjectRetain(param_2);
    _swift_bridgeObjectRetain(uVar6);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x88);
    _swift_isUniquelyReferenced_nonNull_native(uVar2);
    uVar5 = *(undefined8 *)(unaff_x20 + 0x88);
    *(undefined8 *)(unaff_x20 + 0x88) = 0x8000000000000000;
    FUN_000321b4(uVar6,param_1,param_2,uVar2);
    _swift_bridgeObjectRelease(param_2);
    *(undefined8 *)(unaff_x20 + 0x88) = uVar5;
    _swift_endAccess(&uStack_80);
    uStack_80 = 0;
    uStack_78 = 0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x55);
    __sSS6appendyySSF(0xd000000000000053,0x80000000008b5880);
    __sSS6appendyySSF(param_1,param_2);
    uVar2 = uStack_78;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_80,uStack_78);
    _objc_release();
    _swift_bridgeObjectRelease(uVar2);
    uVar2 = *(undefined8 *)(lVar1 + lVar4);
    _swift_bridgeObjectRetain(uVar2);
    _objc_release(lVar1);
  }
  return uVar2;
}



/* Entry: 00031368; end: 0003161b;  */

/* WARNING: Removing unreachable block (ram,0x00031494) */

undefined8 FUN_00031368(double param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long extraout_x8;
  long lVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 *puVar8;
  undefined8 auStack_a0 [8];
  
  lVar1 = 0;
  FUN_00032cdc();
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar8 = (undefined8 *)((long)auStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  lVar6 = *(long *)(unaff_x20 + 0x80);
  if (lVar6 != 0) {
    uVar7 = *(undefined8 *)(unaff_x20 + 0x90);
    uVar5 = *(undefined8 *)(unaff_x20 + 0x98);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar7,uVar5);
    func_0x00791560();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    if (lVar6 != 0) {
      lVar2 = lVar6;
      func_0x0078aee0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar2 == 0) {
        _objc_release(lVar6);
      }
      else {
        lVar3 = lVar2;
        __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
        _objc_release(lVar2);
        uVar4 = 0;
        __s10Foundation11JSONDecoderCMa();
        _swift_allocObject();
        __s10Foundation11JSONDecoderCACycfc();
        uVar7 = 0xae7078;
        func_0x00032d5c(0xae7078,FUN_00032cdc,&UNK_007ce2d0);
        __s10Foundation11JSONDecoderC6decode_4fromxxm_AA4DataVtKSeRzlFTj
                  (puVar8,lVar1,lVar3,uVar5,lVar1,uVar7);
        __s10Foundation4DateV20timeIntervalSinceNowSdvg((long)*(int *)(lVar1 + 0x14));
        if (-3600.0 < param_1) {
          uVar7 = 0xd000000000000028;
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                    (0xd000000000000028,0x80000000008b5800);
          _swift_release(uVar4);
          _objc_release(lVar6);
          FUN_00023358(lVar3,uVar5);
          _objc_release(uVar7);
          uVar7 = *puVar8;
          _swift_bridgeObjectRetain(uVar7);
          func_0x00032d20(puVar8);
          return uVar7;
        }
        uVar7 = 0xd000000000000031;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000031,0x80000000008b57c0)
        ;
        _swift_release(uVar4);
        _objc_release(lVar6);
        FUN_00023358(lVar3,uVar5);
        _objc_release(uVar7);
        func_0x00032d20(puVar8);
      }
    }
  }
  return 0;
}



/* Entry: 0003161c; end: 00031657;  */

void FUN_0003161c(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x78));
  _objc_release(*(undefined8 *)(unaff_x20 + 0x80));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x88));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x98));
  _swift_defaultActor_destroy();
                    /* WARNING: Could not recover jumptable at 0x0077b2f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_defaultActor_deallocate_0099c080)();
  return;
}



/* Entry: 00031658; end: 00031663;  */

void FUN_00031658(void)

{
  return;
}



/* Entry: 00031664; end: 0003166b; +[_TtC23ExtensionsStickerPicker20CachedItemsContainer supportsSecureCoding] */

undefined8 FUN_00031664(void)

{
  return 1;
}



/* Entry: 0003166c; end: 000318ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_0003166c(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined1 *puVar5;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  code *pcVar6;
  long lVar7;
  undefined1 auStack_90 [8];
  undefined8 uStack_78;
  undefined1 auStack_70 [24];
  long lStack_58;
  
  lVar1 = 0;
  __s10Foundation4DateVMa();
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar7 + 0x40));
  puVar5 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar4 = 0xae7058;
  func_0x000115a8(0xae7058,&UNK_007ce268);
  _swift_allocObject();
  *(undefined8 *)(lVar4 + 0x18) = 4;
  *(undefined8 *)(lVar4 + 0x10) = 2;
  uVar2 = 0;
  func_0x00032d9c(0,0xae7060,&PTR__OBJC_CLASS___NSArray_00ac2c28);
  *(undefined8 *)(lVar4 + 0x20) = uVar2;
  uVar2 = 0;
  func_0x00032d9c(0,0xae68f0,&PTR_PTR_00ac2838);
  *(undefined8 *)(lVar4 + 0x28) = uVar2;
  __sSo7NSCoderC10FoundationE12decodeObject2of6forKeyypSgSayyXlXpGSg_SStF
            (auStack_70,lVar4,0x736d657469,0xe500000000000000);
  _swift_release(lVar4);
  if (lStack_58 == 0) {
    _objc_release(param_1);
    FUN_00027748(auStack_70);
  }
  else {
    uVar2 = 0xae7068;
    func_0x000115a8(0xae7068,&UNK_007ce278);
    puVar3 = &uStack_78;
    _swift_dynamicCast(puVar3,auStack_70,PTR___sypN_0099b8d8 + 8,uVar2,6);
    if (((ulong)puVar3 & 1) == 0) {
      _objc_release(param_1);
    }
    else {
      lVar4 = 0;
      func_0x00032d9c(0,0xae7070,&PTR__OBJC_CLASS___NSDate_00ac2c88);
      __sSo7NSCoderC10FoundationE12decodeObject2of6forKeyxSgxm_SStSo8NSObjectCRbzSo8NSCodingRzlF();
      if (lVar4 != 0) {
        __s10Foundation4DateV36_unconditionallyBridgeFromObjectiveCyACSo6NSDateCSgFZ(puVar5);
        _objc_release(lVar4);
        pcVar6 = *(code **)(lVar7 + 0x20);
        (*pcVar6)((long)puVar5 - extraout_x12,puVar5,lVar1);
        *(undefined8 *)(unaff_x20 + _DAT_00ae7018) = uStack_78;
        (*pcVar6)(unaff_x20 + _DAT_00b647d8,(long)puVar5 - extraout_x12,lVar1);
        func_0x00032c4c();
        puVar5 = &stack0xffffffffffffff78;
        _objc_msgSendSuper2(puVar5,PTR_s_init_00abbf70);
        _objc_release(param_1);
        return puVar5;
      }
      _objc_release(param_1);
      _swift_bridgeObjectRelease(uStack_78);
    }
  }
  func_0x00032c4c(0);
  _swift_deallocPartialClassInstance();
  return (undefined1 *)0x0;
}



/* Entry: 000318f0; end: 00031917; -[_TtC23ExtensionsStickerPicker20CachedItemsContainer initWithCoder:] */

void FUN_000318f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_0003166c();
  return;
}



/* Entry: 00031918; end: 000319fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00031918(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_00ae7018);
  uVar1 = 0;
  func_0x00032d9c(0,0xae68f0,&PTR_PTR_00ac2838);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar2,uVar1);
  uVar1 = 0x736d657469;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x736d657469,0xe500000000000000);
  func_0x00782780(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF(_DAT_00b647d8);
  uVar2 = 0x637465467473616c;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x637465467473616c,0xeb00000000646568);
  func_0x00782780(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar2);
  return;
}



/* Entry: 000319fc; end: 00031a4b; -[_TtC23ExtensionsStickerPicker20CachedItemsContainer encodeWithCoder:] */

void FUN_000319fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_00031918(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_1);
  return;
}



/* Entry: 00031a4c; end: 00031aab; -[_TtC23ExtensionsStickerPicker20CachedItemsContainer init] */

void FUN_00031a4c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("ExtensionsStickerPicker.CachedItemsContainer",0x2c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x31a78);
  (*pcVar1)();
}



/* Entry: 00031aac; end: 00031af7; -[_TtC23ExtensionsStickerPicker20CachedItemsContainer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00031aac(long param_1)

{
  long lVar1;
  long lVar2;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_00ae7018));
  lVar1 = _DAT_00b647d8;
  lVar2 = 0;
  __s10Foundation4DateVMa();
                    /* WARNING: Could not recover jumptable at 0x00031af4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1 + lVar1,lVar2);
  return;
}



/* Entry: 00031af8; end: 00031b0b;  */

bool FUN_00031af8(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 00031b0c; end: 00031bb7;  */

void FUN_00031b0c(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 00031bb8; end: 00031bf7;  */

undefined1  [16] FUN_00031bb8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *unaff_x20;
  undefined1 auVar3 [16];
  
  uVar1 = 0x637465467473616c;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0x7364656566;
  }
  uVar2 = 0xeb00000000646568;
  if (*unaff_x20 != '\x01') {
    uVar2 = 0xe500000000000000;
  }
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Entry: 00031bf8; end: 00031ccf;  */

void FUN_00031bf8(undefined1 *param_1,long param_2,long param_3)

{
  ulong uVar1;
  undefined1 uVar2;
  
  uVar1 = 0;
  if ((param_2 == 0x7364656566 && param_3 == -0x1b00000000000000) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x7364656566,0xe500000000000000,param_2,param_3,0), (uVar1 & 1) != 0)) {
    _swift_bridgeObjectRelease(param_3);
    uVar2 = 0;
  }
  else {
    uVar1 = 0;
    if ((param_2 == 0x637465467473616c) && (param_3 == -0x14ffffffff9b9a98)) {
      _swift_bridgeObjectRelease(0xeb00000000646568);
      uVar2 = 1;
    }
    else {
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x637465467473616c,0xeb00000000646568,param_2,param_3,0);
      _swift_bridgeObjectRelease(param_3);
      uVar2 = 1;
      if ((uVar1 & 1) == 0) {
        uVar2 = 2;
      }
    }
  }
  *param_1 = uVar2;
  return;
}



/* Entry: 00031cd0; end: 00031ce7;  */

undefined1  [16] FUN_00031cd0(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 00031ce8; end: 00031d37;  */

void FUN_00031ce8(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_00033238();
                    /* WARNING: Could not recover jumptable at 0x00779130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_0099b8c0)(param_1,uVar1);
  return;
}



/* Entry: 00031d38; end: 00031ec7;  */

void FUN_00031d38(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long extraout_x8;
  long unaff_x20;
  long unaff_x21;
  long lVar6;
  undefined1 auStack_60 [14];
  undefined1 uStack_52;
  undefined1 uStack_51;
  
  lVar2 = 0xae7150;
  func_0x000115a8(0xae7150,&UNK_007ce308);
  lVar6 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  FUN_0001393c(param_1,uVar5);
  FUN_00033238();
  __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
            (auStack_60 + -extraout_x8,&UNK_0099eaa8,&UNK_0099eaa8,param_1,uVar5,uVar4);
  uStack_51 = 0;
  func_0x000115a8(0xae7130,&UNK_007ce300);
  FUN_000332fc(0xae7158,FUN_0003336c,PTR___sSayxGSEsSERzlMc_0099b1d8);
  __ss22KeyedEncodingContainerV6encode_6forKeyyqd___xtKSERd__lF();
  if (unaff_x21 == 0) {
    lVar3 = 0;
    FUN_00032cdc();
    iVar1 = *(int *)(lVar3 + 0x14);
    uStack_52 = 1;
    uVar4 = 0;
    __s10Foundation4DateVMa(0);
    uVar5 = 0xae7168;
    func_0x00032d5c(0xae7168,PTR___s10Foundation4DateVMa_0099c440,
                    PTR___s10Foundation4DateVSEAAMc_0099c450);
    __ss22KeyedEncodingContainerV6encode_6forKeyyqd___xtKSERd__lF
              (unaff_x20 + iVar1,&uStack_52,lVar2,uVar4,uVar5);
  }
  (**(code **)(lVar6 + 8))(auStack_60 + -extraout_x8,lVar2);
  return;
}



/* Entry: 00031ec8; end: 0003215b;  */

/* WARNING: Removing unreachable block (ram,0x0003210c) */
/* WARNING: Removing unreachable block (ram,0x00032064) */

void FUN_00031ec8(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long *plVar6;
  long unaff_x21;
  long lVar7;
  long lVar8;
  long lVar9;
  long alStack_a0 [4];
  long lStack_80;
  long lStack_78;
  undefined1 uStack_62;
  undefined1 uStack_61;
  long lStack_58;
  
  lVar2 = 0;
  alStack_a0[2] = param_1;
  __s10Foundation4DateVMa();
  alStack_a0[1] = *(long *)(lVar2 + -8);
  alStack_a0[3] = lVar2;
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(alStack_a0[1] + 0x40));
  lVar9 = (long)alStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0xae7120;
  func_0x000115a8(0xae7120,&UNK_007ce2f8);
  lVar7 = *(long *)(lVar2 + -8);
  lStack_78 = lVar2;
  (*(code *)PTR____chkstk_darwin_00999f48)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = lVar9 - extraout_x8_00;
  lVar3 = 0;
  FUN_00032cdc();
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  plVar6 = (long *)(lVar8 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  uVar4 = *(undefined8 *)(param_2 + 0x18);
  uVar5 = *(undefined8 *)(param_2 + 0x20);
  lVar2 = param_2;
  FUN_0001393c(param_2,uVar4);
  FUN_00033238();
  lStack_80 = lVar8;
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (lVar8,&UNK_0099eaa8,&UNK_0099eaa8,lVar2,uVar4,uVar5);
  lVar2 = alStack_a0[3];
  if (unaff_x21 == 0) {
    uVar4 = 0xae7130;
    func_0x000115a8(0xae7130,&UNK_007ce300);
    uStack_61 = 0;
    uVar5 = 0xae7138;
    FUN_000332fc(0xae7138,0x33278,PTR___sSayxGSesSeRzlMc_0099b1f8);
    lVar1 = lStack_78;
    lVar8 = lStack_80;
    __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF
              (&lStack_58,uVar4,&uStack_61,lStack_78,uVar4,uVar5);
    alStack_a0[0] = lStack_58;
    *plVar6 = lStack_58;
    uStack_62 = 1;
    uVar4 = 0xae7148;
    func_0x00032d5c(0xae7148,PTR___s10Foundation4DateVMa_0099c440,
                    PTR___s10Foundation4DateVSeAAMc_0099c460);
    __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF
              (lVar9,lVar2,&uStack_62,lVar1,lVar2,uVar4);
    (**(code **)(lVar7 + 8))(lVar8,lVar1);
    (**(code **)(alStack_a0[1] + 0x20))((long)plVar6 + (long)*(int *)(lVar3 + 0x14),lVar9,lVar2);
    FUN_000332b8(plVar6,alStack_a0[2]);
    FUN_00011670(param_2);
    func_0x00032d20(plVar6);
  }
  else {
    FUN_00011670(param_2);
  }
  return;
}



/* Entry: 0003215c; end: 00032183;  */

void FUN_0003215c(void)

{
  FUN_00031ec8();
  return;
}



/* Entry: 00032184; end: 000321b3;  */

undefined1  [16] FUN_00032184(undefined8 param_1)

{
  ulong uVar1;
  undefined1 *puVar2;
  ulong uVar3;
  long unaff_x20;
  uint uVar4;
  undefined1 auVar5 [16];
  undefined1 auStack_78 [40];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x28);
  __ss11AnyHashableV13_rawHashValue4seedS2i_tF();
  uVar3 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  uVar1 = uVar1 & (uVar3 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) == 0) {
    uVar4 = 0;
  }
  else {
    do {
      func_0x00032ddc(*(long *)(unaff_x20 + 0x30) + uVar1 * 0x28,auStack_78);
      puVar2 = auStack_78;
      __ss11AnyHashableV2eeoiySbAB_ABtFZ(puVar2,param_1);
      uVar4 = (uint)puVar2;
      func_0x00032e18(auStack_78);
      if (((ulong)puVar2 & 1) != 0) break;
      uVar1 = uVar1 + 1 & ~uVar3;
    } while ((*(ulong *)(unaff_x20 + 0x40 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) != 0);
  }
  auVar5._8_4_ = uVar4 & 1;
  auVar5._0_8_ = uVar1;
  auVar5._12_4_ = 0;
  return auVar5;
}



/* Entry: 000321b4; end: 000323e3;  */

void FUN_000321b4(undefined8 param_1,ulong param_2,ulong param_3,uint param_4)

{
  ulong *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  
  lVar9 = *unaff_x20;
  uVar3 = param_2;
  uVar4 = param_3;
  FUN_000202c0();
  lVar5 = *(long *)(lVar9 + 0x10);
  uVar8 = (ulong)~(uint)uVar4 & 1;
  lVar6 = lVar5 + uVar8;
  if (SCARRY8(lVar5,uVar8)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x3229c);
    (*pcVar2)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar6) {
    FUN_00032990(lVar6,param_4 & 1,0xae6b50,&UNK_007ce280);
    uVar3 = param_2;
    uVar8 = param_3;
    FUN_000202c0();
    if (((uint)uVar4 & 1) != ((uint)uVar8 & 1)) {
      __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF(PTR___sSSN_0099b040)
      ;
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x32264);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    FUN_00032574(0xae6b50,&UNK_007ce280);
    lVar6 = *unaff_x20;
    goto joined_r0x000322c4;
  }
  lVar6 = *unaff_x20;
joined_r0x000322c4:
  if ((uVar4 & 1) != 0) {
    uVar7 = *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8);
    *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(uVar7);
    return;
  }
  lVar5 = lVar6 + (uVar3 >> 6) * 8;
  *(ulong *)(lVar5 + 0x40) = *(ulong *)(lVar5 + 0x40) | 1L << (uVar3 & 0x3f);
  puVar1 = (ulong *)(*(long *)(lVar6 + 0x30) + uVar3 * 0x10);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
  if (SCARRY8(*(long *)(lVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x32328);
    (*pcVar2)();
  }
  *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x0077b254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_0099b978)(param_3);
  return;
}



/* Entry: 000323e4; end: 000323f7;  */

void FUN_000323e4(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  
  func_0x000115a8(0xae6b58,&UNK_007cdcd8);
  lVar11 = *unaff_x20;
  lVar7 = lVar11;
  __ss18_DictionaryStorageC4copy8originalAByxq_Gs05__RawaB0C_tFZ();
  if (*(long *)(lVar11 + 0x10) != 0) {
    lVar1 = lVar11 + 0x40;
    uVar8 = (1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar7 != lVar11 || lVar1 + uVar8 * 8 <= lVar7 + 0x40U) {
      _memmove(lVar7 + 0x40U,lVar1,uVar8 << 3);
    }
    lVar13 = 0;
    *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(lVar11 + 0x10);
    uVar9 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
    uVar8 = 0xffffffffffffffff;
    if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
      uVar8 = ~(-1L << (uVar9 & 0x3f));
    }
    uVar8 = uVar8 & *(ulong *)(lVar11 + 0x40);
    if (uVar8 == 0) goto LAB_00032640;
    do {
      uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar8 = uVar8 - 1 & uVar8;
      while( true ) {
        uVar10 = LZCOUNT(uVar10) | lVar13 << 6;
        puVar3 = (undefined8 *)(*(long *)(lVar11 + 0x30) + uVar10 * 0x10);
        uVar5 = puVar3[1];
        uVar12 = *(undefined8 *)(*(long *)(lVar11 + 0x38) + uVar10 * 8);
        puVar4 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar10 * 0x10);
        *puVar4 = *puVar3;
        puVar4[1] = uVar5;
        *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar10 * 8) = uVar12;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar12);
        if (uVar8 != 0) break;
LAB_00032640:
        do {
          lVar2 = lVar13 + 1;
          if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x326d4);
            (*pcVar6)();
          }
          if ((long)(uVar9 + 0x3f >> 6) <= lVar2) goto LAB_000326ac;
          uVar8 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar13 = lVar13 + 1;
        } while (uVar8 == 0);
        uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
        uVar8 = uVar8 - 1 & uVar8;
        lVar13 = lVar2;
      }
    } while( true );
  }
LAB_000326ac:
  _swift_release(lVar11);
  *unaff_x20 = lVar7;
  return;
}



/* Entry: 000323f8; end: 0003255f;  */

void FUN_000323f8(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  long *unaff_x20;
  long lVar12;
  long lVar13;
  
  func_0x000115a8(0xae6b60,&UNK_007cdce0);
  lVar12 = *unaff_x20;
  lVar7 = lVar12;
  __ss18_DictionaryStorageC4copy8originalAByxq_Gs05__RawaB0C_tFZ();
  if (*(long *)(lVar12 + 0x10) != 0) {
    lVar1 = lVar12 + 0x40;
    uVar8 = (1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar7 != lVar12 || lVar1 + uVar8 * 8 <= lVar7 + 0x40U) {
      _memmove(lVar7 + 0x40U,lVar1,uVar8 << 3);
    }
    lVar13 = 0;
    *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(lVar12 + 0x10);
    uVar9 = 1L << ((ulong)*(byte *)(lVar12 + 0x20) & 0x3f);
    uVar8 = 0xffffffffffffffff;
    if ((*(byte *)(lVar12 + 0x20) & 0x3f) < 6) {
      uVar8 = ~(-1L << (uVar9 & 0x3f));
    }
    uVar8 = uVar8 & *(ulong *)(lVar12 + 0x40);
    if (uVar8 == 0) goto LAB_000324d4;
    do {
      uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar8 = uVar8 - 1 & uVar8;
      while( true ) {
        uVar10 = LZCOUNT(uVar10) | lVar13 << 6;
        puVar3 = (undefined8 *)(*(long *)(lVar12 + 0x30) + uVar10 * 0x10);
        uVar5 = puVar3[1];
        uVar11 = *(undefined8 *)(*(long *)(lVar12 + 0x38) + uVar10 * 8);
        puVar4 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar10 * 0x10);
        *puVar4 = *puVar3;
        puVar4[1] = uVar5;
        *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar10 * 8) = uVar11;
        _swift_bridgeObjectRetain();
        if (uVar8 != 0) break;
LAB_000324d4:
        do {
          lVar2 = lVar13 + 1;
          if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x32560);
            (*pcVar6)();
          }
          if ((long)(uVar9 + 0x3f >> 6) <= lVar2) goto LAB_00032538;
          uVar8 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar13 = lVar13 + 1;
        } while (uVar8 == 0);
        uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
        uVar8 = uVar8 - 1 & uVar8;
        lVar13 = lVar2;
      }
    } while( true );
  }
LAB_00032538:
  _swift_release(lVar12);
  *unaff_x20 = lVar7;
  return;
}



/* Entry: 00032560; end: 00032573;  */

void FUN_00032560(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  
  func_0x000115a8(0xae6b68,&UNK_007cdce8);
  lVar11 = *unaff_x20;
  lVar7 = lVar11;
  __ss18_DictionaryStorageC4copy8originalAByxq_Gs05__RawaB0C_tFZ();
  if (*(long *)(lVar11 + 0x10) != 0) {
    lVar1 = lVar11 + 0x40;
    uVar8 = (1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar7 != lVar11 || lVar1 + uVar8 * 8 <= lVar7 + 0x40U) {
      _memmove(lVar7 + 0x40U,lVar1,uVar8 << 3);
    }
    lVar13 = 0;
    *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(lVar11 + 0x10);
    uVar9 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
    uVar8 = 0xffffffffffffffff;
    if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
      uVar8 = ~(-1L << (uVar9 & 0x3f));
    }
    uVar8 = uVar8 & *(ulong *)(lVar11 + 0x40);
    if (uVar8 == 0) goto LAB_00032640;
    do {
      uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar8 = uVar8 - 1 & uVar8;
      while( true ) {
        uVar10 = LZCOUNT(uVar10) | lVar13 << 6;
        puVar3 = (undefined8 *)(*(long *)(lVar11 + 0x30) + uVar10 * 0x10);
        uVar5 = puVar3[1];
        uVar12 = *(undefined8 *)(*(long *)(lVar11 + 0x38) + uVar10 * 8);
        puVar4 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar10 * 0x10);
        *puVar4 = *puVar3;
        puVar4[1] = uVar5;
        *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar10 * 8) = uVar12;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar12);
        if (uVar8 != 0) break;
LAB_00032640:
        do {
          lVar2 = lVar13 + 1;
          if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x326d4);
            (*pcVar6)();
          }
          if ((long)(uVar9 + 0x3f >> 6) <= lVar2) goto LAB_000326ac;
          uVar8 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar13 = lVar13 + 1;
        } while (uVar8 == 0);
        uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
        uVar8 = uVar8 - 1 & uVar8;
        lVar13 = lVar2;
      }
    } while( true );
  }
LAB_000326ac:
  _swift_release(lVar11);
  *unaff_x20 = lVar7;
  return;
}



/* Entry: 00032574; end: 000326d3;  */

void FUN_00032574(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  
  func_0x000115a8();
  lVar11 = *unaff_x20;
  lVar7 = lVar11;
  __ss18_DictionaryStorageC4copy8originalAByxq_Gs05__RawaB0C_tFZ();
  if (*(long *)(lVar11 + 0x10) != 0) {
    lVar1 = lVar11 + 0x40;
    uVar8 = (1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar7 != lVar11 || lVar1 + uVar8 * 8 <= lVar7 + 0x40U) {
      _memmove(lVar7 + 0x40U,lVar1,uVar8 << 3);
    }
    lVar13 = 0;
    *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(lVar11 + 0x10);
    uVar9 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
    uVar8 = 0xffffffffffffffff;
    if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
      uVar8 = ~(-1L << (uVar9 & 0x3f));
    }
    uVar8 = uVar8 & *(ulong *)(lVar11 + 0x40);
    if (uVar8 == 0) goto LAB_00032640;
    do {
      uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar8 = uVar8 - 1 & uVar8;
      while( true ) {
        uVar10 = LZCOUNT(uVar10) | lVar13 << 6;
        puVar3 = (undefined8 *)(*(long *)(lVar11 + 0x30) + uVar10 * 0x10);
        uVar5 = puVar3[1];
        uVar12 = *(undefined8 *)(*(long *)(lVar11 + 0x38) + uVar10 * 8);
        puVar4 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar10 * 0x10);
        *puVar4 = *puVar3;
        puVar4[1] = uVar5;
        *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar10 * 8) = uVar12;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar12);
        if (uVar8 != 0) break;
LAB_00032640:
        do {
          lVar2 = lVar13 + 1;
          if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x326d4);
            (*pcVar6)();
          }
          if ((long)(uVar9 + 0x3f >> 6) <= lVar2) goto LAB_000326ac;
          uVar8 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar13 = lVar13 + 1;
        } while (uVar8 == 0);
        uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
        uVar8 = uVar8 - 1 & uVar8;
        lVar13 = lVar2;
      }
    } while( true );
  }
LAB_000326ac:
  _swift_release(lVar11);
  *unaff_x20 = lVar7;
  return;
}



/* Entry: 000326d4; end: 000326e7;  */

void FUN_000326d4(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  ulong uVar15;
  ulong *puVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  undefined1 auStack_a8 [72];
  
  uVar6 = 0xae6b58;
  lVar17 = *unaff_x20;
  lVar1 = *(long *)(lVar17 + 0x18);
  if (*(long *)(lVar17 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  func_0x000115a8(0xae6b58,&UNK_007cdcd8);
  lVar7 = lVar17;
  __ss18_DictionaryStorageC6resize8original8capacity4moveAByxq_Gs05__RawaB0C_SiSbtFZ
            (lVar17,lVar1,param_2,uVar6);
  if (*(long *)(lVar17 + 0x10) == 0) {
LAB_00032bf0:
    _swift_release(lVar17);
    *unaff_x20 = lVar7;
    return;
  }
  puVar16 = (ulong *)(lVar17 + 0x40);
  uVar12 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar15 = uVar15 & *puVar16;
  lVar1 = lVar7 + 0x40;
  lVar10 = 0;
  do {
    if (uVar15 == 0) {
      do {
        lVar19 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x32c20);
          (*pcVar5)();
        }
        if ((long)(uVar12 + 0x3f >> 6) <= lVar19) {
          if ((param_2 & 1) != 0) {
            uVar15 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
            if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
              *puVar16 = -1L << (uVar15 & 0x3f);
            }
            else {
              _bzero(puVar16,uVar15 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar17 + 0x10) = 0;
          }
          goto LAB_00032bf0;
        }
        uVar15 = puVar16[lVar19];
        lVar10 = lVar10 + 1;
      } while (uVar15 == 0);
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
    }
    else {
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar19 = lVar10;
    }
    uVar9 = LZCOUNT(uVar9) | lVar19 << 6;
    puVar2 = (undefined8 *)(*(long *)(lVar17 + 0x30) + uVar9 * 0x10);
    uVar6 = *puVar2;
    uVar3 = puVar2[1];
    uVar18 = *(undefined8 *)(*(long *)(lVar17 + 0x38) + uVar9 * 8);
    if ((param_2 & 1) == 0) {
      _swift_bridgeObjectRetain(uVar3);
      _swift_bridgeObjectRetain(uVar18);
    }
    __ss6HasherV5_seedABSi_tcfC(auStack_a8,*(undefined8 *)(lVar7 + 0x28));
    puVar8 = auStack_a8;
    __sSS4hash4intoys6HasherVz_tF(puVar8,uVar6,uVar3);
    __ss6HasherV9_finalizeSiyF();
    uVar14 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    uVar13 = (ulong)puVar8 & (uVar14 ^ 0xffffffffffffffff);
    uVar11 = uVar13 >> 6;
    uVar9 = -1L << (uVar13 & 0x3f) & (*(ulong *)(lVar1 + uVar11 * 8) ^ 0xffffffffffffffff);
    if (uVar9 == 0) {
      bVar4 = false;
      uVar9 = 0x3f - uVar14 >> 6;
      do {
        uVar13 = uVar11 + 1;
        if ((uVar13 == uVar9) && (bVar4)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x32c24);
          (*pcVar5)();
        }
        uVar11 = 0;
        if (uVar13 != uVar9) {
          uVar11 = uVar13;
        }
        bVar4 = (bool)(uVar13 == uVar9 | bVar4);
        uVar13 = *(ulong *)(lVar1 + uVar11 * 8);
      } while (uVar13 == 0xffffffffffffffff);
      uVar13 = ~uVar13;
      uVar9 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar11 << 6;
    }
    else {
      uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar13 & 0x7fffffffffffffc0;
    }
    uVar11 = uVar9 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar11) = 1L << (uVar9 & 0x3f) | *(ulong *)(lVar1 + uVar11);
    puVar2 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar9 * 0x10);
    *puVar2 = uVar6;
    puVar2[1] = uVar3;
    *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar9 * 8) = uVar18;
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lVar10 = lVar19;
  } while( true );
}



/* Entry: 000326e8; end: 0003297b;  */

void FUN_000326e8(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  long lVar15;
  undefined8 uVar16;
  ulong uVar17;
  ulong *puVar18;
  long lVar19;
  undefined1 auStack_a8 [72];
  
  lVar15 = *unaff_x20;
  lVar1 = *(long *)(lVar15 + 0x18);
  if (*(long *)(lVar15 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar6 = 0xae6b60;
  func_0x000115a8(0xae6b60,&UNK_007cdce0);
  lVar7 = lVar15;
  __ss18_DictionaryStorageC6resize8original8capacity4moveAByxq_Gs05__RawaB0C_SiSbtFZ
            (lVar15,lVar1,param_2,uVar6);
  if (*(long *)(lVar15 + 0x10) == 0) {
LAB_00032948:
    _swift_release(lVar15);
    *unaff_x20 = lVar7;
    return;
  }
  puVar18 = (ulong *)(lVar15 + 0x40);
  uVar12 = 1L << ((ulong)*(byte *)(lVar15 + 0x20) & 0x3f);
  uVar17 = 0xffffffffffffffff;
  if ((*(byte *)(lVar15 + 0x20) & 0x3f) < 6) {
    uVar17 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar17 = uVar17 & *puVar18;
  lVar1 = lVar7 + 0x40;
  lVar10 = 0;
  do {
    if (uVar17 == 0) {
      do {
        lVar19 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x32978);
          (*pcVar5)();
        }
        if ((long)(uVar12 + 0x3f >> 6) <= lVar19) {
          if ((param_2 & 1) != 0) {
            uVar17 = 1L << ((ulong)*(byte *)(lVar15 + 0x20) & 0x3f);
            if ((*(byte *)(lVar15 + 0x20) & 0x3f) < 6) {
              *puVar18 = -1L << (uVar17 & 0x3f);
            }
            else {
              _bzero(puVar18,uVar17 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar15 + 0x10) = 0;
          }
          goto LAB_00032948;
        }
        uVar17 = puVar18[lVar19];
        lVar10 = lVar10 + 1;
      } while (uVar17 == 0);
      uVar9 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar17 = uVar17 - 1 & uVar17;
    }
    else {
      uVar9 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar17 = uVar17 - 1 & uVar17;
      lVar19 = lVar10;
    }
    uVar9 = LZCOUNT(uVar9) | lVar19 << 6;
    puVar2 = (undefined8 *)(*(long *)(lVar15 + 0x30) + uVar9 * 0x10);
    uVar6 = *puVar2;
    uVar3 = puVar2[1];
    uVar16 = *(undefined8 *)(*(long *)(lVar15 + 0x38) + uVar9 * 8);
    if ((param_2 & 1) == 0) {
      _swift_bridgeObjectRetain(uVar3);
    }
    __ss6HasherV5_seedABSi_tcfC(auStack_a8,*(undefined8 *)(lVar7 + 0x28));
    puVar8 = auStack_a8;
    __sSS4hash4intoys6HasherVz_tF(puVar8,uVar6,uVar3);
    __ss6HasherV9_finalizeSiyF();
    uVar14 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    uVar13 = (ulong)puVar8 & (uVar14 ^ 0xffffffffffffffff);
    uVar11 = uVar13 >> 6;
    uVar9 = -1L << (uVar13 & 0x3f) & (*(ulong *)(lVar1 + uVar11 * 8) ^ 0xffffffffffffffff);
    if (uVar9 == 0) {
      bVar4 = false;
      uVar9 = 0x3f - uVar14 >> 6;
      do {
        uVar13 = uVar11 + 1;
        if ((uVar13 == uVar9) && (bVar4)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x3297c);
          (*pcVar5)();
        }
        uVar11 = 0;
        if (uVar13 != uVar9) {
          uVar11 = uVar13;
        }
        bVar4 = (bool)(uVar13 == uVar9 | bVar4);
        uVar13 = *(ulong *)(lVar1 + uVar11 * 8);
      } while (uVar13 == 0xffffffffffffffff);
      uVar13 = ~uVar13;
      uVar9 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar11 << 6;
    }
    else {
      uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar13 & 0x7fffffffffffffc0;
    }
    uVar11 = uVar9 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar11) = 1L << (uVar9 & 0x3f) | *(ulong *)(lVar1 + uVar11);
    puVar2 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar9 * 0x10);
    *puVar2 = uVar6;
    puVar2[1] = uVar3;
    *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar9 * 8) = uVar16;
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lVar10 = lVar19;
  } while( true );
}



/* Entry: 0003297c; end: 0003298f;  */

void FUN_0003297c(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  ulong uVar15;
  ulong *puVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  undefined1 auStack_a8 [72];
  
  uVar6 = 0xae6b68;
  lVar17 = *unaff_x20;
  lVar1 = *(long *)(lVar17 + 0x18);
  if (*(long *)(lVar17 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  func_0x000115a8(0xae6b68,&UNK_007cdce8);
  lVar7 = lVar17;
  __ss18_DictionaryStorageC6resize8original8capacity4moveAByxq_Gs05__RawaB0C_SiSbtFZ
            (lVar17,lVar1,param_2,uVar6);
  if (*(long *)(lVar17 + 0x10) == 0) {
LAB_00032bf0:
    _swift_release(lVar17);
    *unaff_x20 = lVar7;
    return;
  }
  puVar16 = (ulong *)(lVar17 + 0x40);
  uVar12 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar15 = uVar15 & *puVar16;
  lVar1 = lVar7 + 0x40;
  lVar10 = 0;
  do {
    if (uVar15 == 0) {
      do {
        lVar19 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x32c20);
          (*pcVar5)();
        }
        if ((long)(uVar12 + 0x3f >> 6) <= lVar19) {
          if ((param_2 & 1) != 0) {
            uVar15 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
            if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
              *puVar16 = -1L << (uVar15 & 0x3f);
            }
            else {
              _bzero(puVar16,uVar15 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar17 + 0x10) = 0;
          }
          goto LAB_00032bf0;
        }
        uVar15 = puVar16[lVar19];
        lVar10 = lVar10 + 1;
      } while (uVar15 == 0);
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
    }
    else {
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar19 = lVar10;
    }
    uVar9 = LZCOUNT(uVar9) | lVar19 << 6;
    puVar2 = (undefined8 *)(*(long *)(lVar17 + 0x30) + uVar9 * 0x10);
    uVar6 = *puVar2;
    uVar3 = puVar2[1];
    uVar18 = *(undefined8 *)(*(long *)(lVar17 + 0x38) + uVar9 * 8);
    if ((param_2 & 1) == 0) {
      _swift_bridgeObjectRetain(uVar3);
      _swift_bridgeObjectRetain(uVar18);
    }
    __ss6HasherV5_seedABSi_tcfC(auStack_a8,*(undefined8 *)(lVar7 + 0x28));
    puVar8 = auStack_a8;
    __sSS4hash4intoys6HasherVz_tF(puVar8,uVar6,uVar3);
    __ss6HasherV9_finalizeSiyF();
    uVar14 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    uVar13 = (ulong)puVar8 & (uVar14 ^ 0xffffffffffffffff);
    uVar11 = uVar13 >> 6;
    uVar9 = -1L << (uVar13 & 0x3f) & (*(ulong *)(lVar1 + uVar11 * 8) ^ 0xffffffffffffffff);
    if (uVar9 == 0) {
      bVar4 = false;
      uVar9 = 0x3f - uVar14 >> 6;
      do {
        uVar13 = uVar11 + 1;
        if ((uVar13 == uVar9) && (bVar4)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x32c24);
          (*pcVar5)();
        }
        uVar11 = 0;
        if (uVar13 != uVar9) {
          uVar11 = uVar13;
        }
        bVar4 = (bool)(uVar13 == uVar9 | bVar4);
        uVar13 = *(ulong *)(lVar1 + uVar11 * 8);
      } while (uVar13 == 0xffffffffffffffff);
      uVar13 = ~uVar13;
      uVar9 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar11 << 6;
    }
    else {
      uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar13 & 0x7fffffffffffffc0;
    }
    uVar11 = uVar9 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar11) = 1L << (uVar9 & 0x3f) | *(ulong *)(lVar1 + uVar11);
    puVar2 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar9 * 0x10);
    *puVar2 = uVar6;
    puVar2[1] = uVar3;
    *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar9 * 8) = uVar18;
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lVar10 = lVar19;
  } while( true );
}



/* Entry: 00032990; end: 00032c23;  */

void FUN_00032990(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  code *pcVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  ulong uVar15;
  ulong *puVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  undefined1 auStack_a8 [72];
  
  lVar17 = *unaff_x20;
  lVar1 = *(long *)(lVar17 + 0x18);
  if (*(long *)(lVar17 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  func_0x000115a8(param_3,param_4);
  lVar7 = lVar17;
  __ss18_DictionaryStorageC6resize8original8capacity4moveAByxq_Gs05__RawaB0C_SiSbtFZ
            (lVar17,lVar1,param_2,param_3);
  if (*(long *)(lVar17 + 0x10) == 0) {
LAB_00032bf0:
    _swift_release(lVar17);
    *unaff_x20 = lVar7;
    return;
  }
  puVar16 = (ulong *)(lVar17 + 0x40);
  uVar12 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar15 = uVar15 & *puVar16;
  lVar1 = lVar7 + 0x40;
  lVar10 = 0;
  do {
    if (uVar15 == 0) {
      do {
        lVar19 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x32c20);
          (*pcVar6)();
        }
        if ((long)(uVar12 + 0x3f >> 6) <= lVar19) {
          if ((param_2 & 1) != 0) {
            uVar15 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
            if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
              *puVar16 = -1L << (uVar15 & 0x3f);
            }
            else {
              _bzero(puVar16,uVar15 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar17 + 0x10) = 0;
          }
          goto LAB_00032bf0;
        }
        uVar15 = puVar16[lVar19];
        lVar10 = lVar10 + 1;
      } while (uVar15 == 0);
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
    }
    else {
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar19 = lVar10;
    }
    uVar9 = LZCOUNT(uVar9) | lVar19 << 6;
    puVar2 = (undefined8 *)(*(long *)(lVar17 + 0x30) + uVar9 * 0x10);
    uVar3 = *puVar2;
    uVar4 = puVar2[1];
    uVar18 = *(undefined8 *)(*(long *)(lVar17 + 0x38) + uVar9 * 8);
    if ((param_2 & 1) == 0) {
      _swift_bridgeObjectRetain(uVar4);
      _swift_bridgeObjectRetain(uVar18);
    }
    __ss6HasherV5_seedABSi_tcfC(auStack_a8,*(undefined8 *)(lVar7 + 0x28));
    puVar8 = auStack_a8;
    __sSS4hash4intoys6HasherVz_tF(puVar8,uVar3,uVar4);
    __ss6HasherV9_finalizeSiyF();
    uVar14 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    uVar13 = (ulong)puVar8 & (uVar14 ^ 0xffffffffffffffff);
    uVar11 = uVar13 >> 6;
    uVar9 = -1L << (uVar13 & 0x3f) & (*(ulong *)(lVar1 + uVar11 * 8) ^ 0xffffffffffffffff);
    if (uVar9 == 0) {
      bVar5 = false;
      uVar9 = 0x3f - uVar14 >> 6;
      do {
        uVar13 = uVar11 + 1;
        if ((uVar13 == uVar9) && (bVar5)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x32c24);
          (*pcVar6)();
        }
        uVar11 = 0;
        if (uVar13 != uVar9) {
          uVar11 = uVar13;
        }
        bVar5 = (bool)(uVar13 == uVar9 | bVar5);
        uVar13 = *(ulong *)(lVar1 + uVar11 * 8);
      } while (uVar13 == 0xffffffffffffffff);
      uVar13 = ~uVar13;
      uVar9 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar11 << 6;
    }
    else {
      uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar13 & 0x7fffffffffffffc0;
    }
    uVar11 = uVar9 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar11) = 1L << (uVar9 & 0x3f) | *(ulong *)(lVar1 + uVar11);
    puVar2 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar9 * 0x10);
    *puVar2 = uVar3;
    puVar2[1] = uVar4;
    *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar9 * 8) = uVar18;
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lVar10 = lVar19;
  } while( true );
}



/* Entry: 00032c24; end: 00032c43;  */

void __s23ExtensionsStickerPicker0B20MetaDataCacheManagerCMa(void)

{
  _objc_opt_self(&PTR_PTR_00ae6f48);
  return;
}



/* Entry: 00032c44; end: 00032c5f;  */

void FUN_00032c44(void)

{
  if (lRam0000000000ae7048 != 0) {
    return;
  }
  _swift_getSingletonMetadata(0,&DAT_0083e304);
  return;
}



/* Entry: 00032c60; end: 00032cdb;  */

void FUN_00032c60(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_30 = PTR___sBbWV_0099ae78 + 0x40;
  lVar1 = 0x13f;
  __s10Foundation4DateVMa();
  if (param_2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_updateClassMetadata2(param_1,0x100,2,&puStack_30,param_1 + 0x50);
  }
  return;
}



/* Entry: 00032cdc; end: 00032cef;  */

void FUN_00032cdc(undefined8 param_1)

{
  if (lRam0000000000ae70e8 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_0083e35c);
  return;
}



/* Entry: 00032cf0; end: 00032d1f;  */

void FUN_00032cf0(undefined8 param_1,long *param_2,undefined8 param_3)

{
  if (*param_2 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,param_3);
  return;
}



/* Entry: 00032d20; end: 00032e4b;  */

undefined8 FUN_00032d20(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_00032cdc();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 00032e4c; end: 00032edf;  */

long * FUN_00032e4c(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  code *pcVar6;
  
  uVar1 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  lVar5 = *param_2;
  *param_1 = lVar5;
  if ((uVar1 >> 0x11 & 1) == 0) {
    iVar2 = *(int *)(param_3 + 0x14);
    lVar3 = 0;
    __s10Foundation4DateVMa();
    pcVar6 = *(code **)(*(long *)(lVar3 + -8) + 0x10);
    _swift_bridgeObjectRetain(lVar5);
    (*pcVar6)((long)param_1 + (long)iVar2,(long)param_2 + (long)iVar2,lVar3);
  }
  else {
    uVar4 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar5 + (uVar4 + 0x10 & (uVar4 ^ 0xffffffffffffffff)));
    _swift_retain(lVar5);
  }
  return param_1;
}


