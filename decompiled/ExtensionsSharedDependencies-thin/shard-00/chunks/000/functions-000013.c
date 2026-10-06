/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 00056958; end: 00056967; -[_TtC28SCNSEPrefetchedMediaServices22NSEPrefetchedMediaItem serverMessageId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00056958(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_00ae8328);
}



/* Entry: 00056968; end: 00056a7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00056968(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_00ae8318);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_00ae8320);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_00ae8328) = param_5;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_00abbf70);
  return;
}



/* Entry: 00056a80; end: 00056b1f; -[_TtC28SCNSEPrefetchedMediaServices22NSEPrefetchedMediaItem initWithContentId:conversationId:serverMessageId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00056a80(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  _swift_getObjectType();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  uVar3 = param_2;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  puVar1 = (undefined8 *)(param_1 + _DAT_00ae8318);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(param_1 + _DAT_00ae8320);
  *puVar1 = param_4;
  puVar1[1] = uVar3;
  *(undefined8 *)(param_1 + _DAT_00ae8328) = param_5;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  _objc_msgSendSuper2(&lStack_50,PTR_s_init_00abbf70);
  return;
}



/* Entry: 00056b20; end: 00056b7f; -[_TtC28SCNSEPrefetchedMediaServices22NSEPrefetchedMediaItem init] */

void FUN_00056b20(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCNSEPrefetchedMediaServices.NSEPrefetchedMediaItem",0x33,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x56b4c);
  (*pcVar1)();
}



/* Entry: 00056b80; end: 00056bbf; -[_TtC28SCNSEPrefetchedMediaServices22NSEPrefetchedMediaItem .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00056b80(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_00ae8318 + 8));
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(*(undefined8 *)(param_1 + _DAT_00ae8320 + 8));
  return;
}



/* Entry: 00056bc0; end: 00056bdf;  */

void FUN_00056bc0(void)

{
  _objc_opt_self(&PTR_PTR_00ac7a48);
  return;
}



/* Entry: 00056be0; end: 00056bef; -[_TtC28SCNSEPrefetchedMediaServices26NSEPrefetchedMediaServices reader] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00056be0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_0099adb8)
            (*(undefined8 *)(param_1 + _DAT_00ae8358));
  return;
}



/* Entry: 00056bf0; end: 00056c3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00056bf0(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_00ae8358) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_00abbf70);
  return;
}



/* Entry: 00056c3c; end: 00056c93; -[_TtC28SCNSEPrefetchedMediaServices26NSEPrefetchedMediaServices initWithReader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00056c3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_00ae8358) = param_3;
  puVar1 = PTR_s_init_00abbf70;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
  return;
}



/* Entry: 00056c94; end: 00056cf3; -[_TtC28SCNSEPrefetchedMediaServices26NSEPrefetchedMediaServices init] */

void FUN_00056c94(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCNSEPrefetchedMediaServices.NSEPrefetchedMediaServices",0x37,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x56cc0);
  (*pcVar1)();
}



/* Entry: 00056cf4; end: 00056d03; -[_TtC28SCNSEPrefetchedMediaServices26NSEPrefetchedMediaServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00056cf4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(*(undefined8 *)(param_1 + _DAT_00ae8358));
  return;
}



/* Entry: 00056d04; end: 00056d23;  */

void FUN_00056d04(void)

{
  _objc_opt_self(&PTR_PTR_00ac7b18);
  return;
}



/* Entry: 00056d24; end: 00056d4b;  */

void FUN_00056d24(undefined1 *param_1,undefined2 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = (undefined1)*param_2;
  func_0x00056e48();
  *param_1 = uVar1;
  return;
}



/* Entry: 00056d4c; end: 00056d63;  */

bool FUN_00056d4c(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 00056d64; end: 00056dcf;  */

void FUN_00056d64(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyys6UInt16VF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 00056dd0; end: 00056dd3;  */

void FUN_00056dd0(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  __ss6HasherV8_combineyys6UInt16VF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 00056dd4; end: 00056e3b;  */

void FUN_00056dd4(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  __ss6HasherV8_combineyys6UInt16VF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 00056e3c; end: 00056e73;  */

void FUN_00056e3c(ushort *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ushort)*unaff_x20;
  return;
}



/* Entry: 00056e74; end: 00056eb3;  */

void FUN_00056e74(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae8388 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007cfc3c;
  _swift_getWitnessTable(&UNK_007cfc3c,&UNK_0099ff90);
  puRam0000000000ae8388 = puVar1;
  return;
}



/* Entry: 00056eb4; end: 00056eb7;  */

void FUN_00056eb4(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae8390 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007cfcdc;
  _swift_getWitnessTable(&UNK_007cfcdc,&UNK_009a0020);
  puRam0000000000ae8390 = puVar1;
  return;
}



/* Entry: 00056eb8; end: 00056ef7;  */

void FUN_00056eb8(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae8390 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007cfcdc;
  _swift_getWitnessTable(&UNK_007cfcdc,&UNK_009a0020);
  puRam0000000000ae8390 = puVar1;
  return;
}



/* Entry: 00056ef8; end: 000571e7;  */

int FUN_00056ef8(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfc < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 3) {
      iVar2 = 4;
    }
    if (param_2 + 3 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_00056f74;
        goto LAB_00056f58;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_00056f58:
      return ((uint)*param_1 | uVar1 << 8) - 3;
    }
  }
LAB_00056f74:
  iVar2 = *param_1 - 4;
  if (*param_1 < 4) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 000571e8; end: 00057287;  */

undefined *
FUN_000571e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_00ac2b40;
  _objc_opt_self(PTR_PTR_00ac2b40);
  _swift_getObjCClassFromMetadata(param_5);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_1,param_2);
  _swift_bridgeObjectRelease(param_2);
  func_0x0077dda0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  return puVar1;
}



/* Entry: 00057288; end: 000574cf;  */

void FUN_00057288(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long extraout_x8;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  uVar3 = 0xae60d0;
  uStack_98 = param_1;
  FUN_00016c74(0xae60d0,&UNK_007ccdd0);
  lVar4 = 0;
  __ss6ResultOMa(0,param_8,uVar3,PTR___ss5ErrorWS_0099b720);
  (*(code *)PTR____chkstk_darwin_00999f48)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = PTR_PTR_00ac28e0;
  _objc_allocWithZone(PTR_PTR_00ac28e0);
  func_0x007849a0();
  if (param_3 == 0) {
    param_2 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_2);
  }
  FUN_00424780(puVar5,param_2);
  _objc_release(param_2);
  puVar6 = &UNK_009a0118;
  _swift_allocObject(&UNK_009a0118,0x30,7);
  *(undefined8 *)(puVar6 + 0x10) = param_7;
  *(undefined8 *)(puVar6 + 0x18) = param_8;
  *(undefined8 *)(puVar6 + 0x20) = param_4;
  *(undefined8 *)(puVar6 + 0x28) = param_5;
  puVar7 = &UNK_009a0140;
  _swift_allocObject(&UNK_009a0140,0x30,7);
  *(undefined8 *)(puVar7 + 0x10) = param_7;
  *(undefined8 *)(puVar7 + 0x18) = param_8;
  *(undefined8 *)(puVar7 + 0x20) = 0x574e0;
  *(undefined **)(puVar7 + 0x28) = puVar6;
  pcStack_70 = FUN_00057638;
  puStack_90 = PTR___NSConcreteStackBlock_00999f30;
  uStack_88 = 0x42000000;
  pcStack_80 = FUN_00057658;
  puStack_78 = &UNK_009a0158;
  ppuVar8 = &puStack_90;
  puStack_68 = puVar7;
  __Block_copy(ppuVar8);
  puVar1 = puStack_68;
  _swift_retain(puVar7);
  _swift_release(puVar1);
  FUN_00425a60(param_6,puVar5,ppuVar8);
  _objc_retainAutoreleasedReturnValue();
  __Block_release(ppuVar8);
  _objc_release(puVar5);
  puVar5 = puVar7;
  _swift_isEscapingClosureAtFileLocation(puVar7,"",0x39,0x5d,0x1a,1);
  _swift_release(puVar7);
  if (((ulong)puVar5 & 1) == 0) {
    FUN_000576e8(auStack_a0 + -extraout_x8,param_6,param_8);
    _objc_release(param_6);
    FUN_00057a00(uStack_98,lVar4,&puStack_90);
    _swift_release(puVar6);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x574d0);
  (*pcVar2)();
}



/* Entry: 000574d0; end: 000574eb;  */

void FUN_000574d0(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 000574ec; end: 00057637;  */

/* WARNING: Removing unreachable block (ram,0x000575b8) */

void FUN_000574ec(undefined8 param_1,code *param_2,undefined8 param_3,undefined8 param_4,
                 long param_5,undefined8 param_6)

{
  long lVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long lVar3;
  undefined8 auStack_70 [2];
  
  lVar1 = 0;
  auStack_70[0] = param_1;
  __ss6ResultOMa(0,param_4,param_5,param_6);
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = (long)auStack_70 - extraout_x8;
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(*(long *)(param_5 + -8) + 0x40));
  (*(code *)PTR____chkstk_darwin_00999f48)();
  (*param_2)(lVar2,lVar2 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  _swift_storeEnumTagMultiPayload(lVar2,lVar1,0);
  (**(code **)(lVar3 + 0x20))(auStack_70[0],lVar2,lVar1);
  return;
}



/* Entry: 00057638; end: 00057657;  */

void FUN_00057638(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x20))();
  return;
}



/* Entry: 00057658; end: 000576cb;  */

void FUN_00057658(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined1 *puVar2;
  undefined1 auStack_50 [24];
  undefined8 uStack_38;
  
  puVar2 = auStack_50;
  pcVar1 = *(code **)(param_1 + 0x20);
  _swift_unknownObjectRetain(param_2);
  (*pcVar1)(auStack_50,param_2);
  _swift_unknownObjectRelease(param_2);
  func_0x0003f2c4(auStack_50,uStack_38);
  __ss27_bridgeAnythingToObjectiveCyyXlxlF();
  FUN_00036564(auStack_50);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar2);
  return;
}



/* Entry: 000576cc; end: 000576e7;  */

void FUN_000576cc(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x0077b53c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_0099bb30)(uVar1);
  return;
}



/* Entry: 000576e8; end: 000579ff;  */

void FUN_000576e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  undefined1 *puVar14;
  long extraout_x8;
  long extraout_x12;
  undefined1 *puVar15;
  long lVar16;
  undefined1 auStack_d0 [8];
  undefined8 uStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  uVar5 = 0xae60d0;
  uStack_c8 = param_1;
  uStack_a8 = param_2;
  FUN_00016c74(0xae60d0,&UNK_007ccdd0);
  lVar6 = 0xff;
  __ss6ResultOMa(0xff,param_3,uVar5,PTR___ss5ErrorWS_0099b720);
  lVar7 = 0;
  __sSqMa(0,lVar6);
  lStack_b8 = *(long *)(lVar7 + -8);
  lStack_b0 = lVar7;
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lStack_b8 + 0x40));
  puVar15 = auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar16 = (long)puVar15 - extraout_x12;
  lStack_c0 = *(long *)(lVar6 + -8);
  (**(code **)(lStack_c0 + 0x38))(lVar16,1,1,lVar6);
  puVar8 = &UNK_009a02e8;
  _swift_allocObject(&UNK_009a02e8,0x20,7);
  *(undefined8 *)(puVar8 + 0x10) = param_3;
  *(long *)(puVar8 + 0x18) = lVar16;
  puVar9 = &UNK_009a0310;
  _swift_allocObject(&UNK_009a0310,0x20,7);
  *(code **)(puVar9 + 0x10) = FUN_0005844c;
  *(undefined **)(puVar9 + 0x18) = puVar8;
  puVar1 = PTR___NSConcreteStackBlock_00999f30;
  pcStack_80 = FUN_00058544;
  puStack_a0 = PTR___NSConcreteStackBlock_00999f30;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_00058094;
  puStack_88 = &UNK_009a0328;
  ppuVar10 = &puStack_a0;
  puStack_78 = puVar9;
  __Block_copy(ppuVar10);
  puVar11 = puStack_78;
  _swift_retain(puVar9);
  _swift_release(puVar11);
  puVar11 = &UNK_009a0360;
  _swift_allocObject(&UNK_009a0360,0x20,7);
  *(undefined8 *)(puVar11 + 0x10) = param_3;
  *(long *)(puVar11 + 0x18) = lVar16;
  puVar12 = &UNK_009a0388;
  _swift_allocObject(&UNK_009a0388,0x20,7);
  *(code **)(puVar12 + 0x10) = FUN_00058464;
  *(undefined **)(puVar12 + 0x18) = puVar11;
  pcStack_80 = FUN_00058544;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  pcStack_90 = (code *)0x580d0;
  puStack_88 = &UNK_009a03a0;
  ppuVar13 = &puStack_a0;
  puStack_78 = puVar12;
  __Block_copy(ppuVar13);
  puVar1 = puStack_78;
  _swift_retain(puVar12);
  lVar2 = lStack_b8;
  _swift_release(puVar1);
  func_0x00788f40(uStack_a8);
  lVar7 = lStack_c0;
  __Block_release(ppuVar13);
  lVar3 = lStack_b0;
  __Block_release(ppuVar10);
  (**(code **)(lVar2 + 0x10))(puVar15,lVar16,lVar3);
  puVar14 = puVar15;
  (**(code **)(lVar7 + 0x30))(puVar15,1,lVar6);
  if ((int)puVar14 == 1) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x57a00);
    (*pcVar4)();
  }
  (**(code **)(lVar7 + 0x20))(uStack_c8,puVar15,lVar6);
  (**(code **)(lVar2 + 8))(lVar16,lVar3);
  _swift_release(puVar8);
  puVar8 = puVar9;
  _swift_isEscapingClosureAtFileLocation(puVar9,"",0x39,0xe5,0x19,1);
  _swift_release(puVar11);
  _swift_release(puVar9);
  if (((ulong)puVar8 & 1) == 0) {
    puVar8 = puVar12;
    _swift_isEscapingClosureAtFileLocation(puVar12,"",0x39,0xec,0x10,1);
    _swift_release(puVar12);
    if (((ulong)puVar8 & 1) == 0) {
      return;
    }
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x579fc);
    (*pcVar4)();
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x579f8);
  (*pcVar4)();
}



/* Entry: 00057a00; end: 00057adf;  */

void FUN_00057a00(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  long extraout_x8;
  long extraout_x12;
  long lVar2;
  undefined1 *puVar3;
  
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(*(long *)(param_2 + -8) + 0x40));
  puVar3 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(extraout_x12 + 0x20))(puVar3);
  puVar1 = puVar3;
  _swift_getEnumCaseMultiPayload(puVar3,param_2);
  if ((int)puVar1 == 1) {
    lVar2 = *(long *)(param_2 + 0x18);
    (**(code **)(*(long *)(lVar2 + -8) + 0x20))(param_3,puVar3,lVar2);
    FUN_00058224(param_3,lVar2,*(undefined8 *)(param_2 + 0x20));
  }
  else {
    (**(code **)(*(long *)(*(long *)(param_2 + 0x10) + -8) + 0x20))(param_1,puVar3);
  }
  return;
}



/* Entry: 00057ae0; end: 00057d27;  */

void FUN_00057ae0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long extraout_x8;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  uVar3 = 0xae60d0;
  uStack_98 = param_1;
  FUN_00016c74(0xae60d0,&UNK_007ccdd0);
  lVar4 = 0;
  __ss6ResultOMa(0,param_8,uVar3,PTR___ss5ErrorWS_0099b720);
  (*(code *)PTR____chkstk_darwin_00999f48)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = PTR_PTR_00ac28e0;
  _objc_allocWithZone(PTR_PTR_00ac28e0);
  func_0x007849a0();
  if (param_3 == 0) {
    param_2 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_2);
  }
  FUN_00424780(puVar5,param_2);
  _objc_release(param_2);
  puVar6 = &UNK_009a0190;
  _swift_allocObject(&UNK_009a0190,0x30,7);
  *(undefined8 *)(puVar6 + 0x10) = param_7;
  *(undefined8 *)(puVar6 + 0x18) = param_8;
  *(undefined8 *)(puVar6 + 0x20) = param_4;
  *(undefined8 *)(puVar6 + 0x28) = param_5;
  puVar7 = &UNK_009a01b8;
  _swift_allocObject(&UNK_009a01b8,0x30,7);
  *(undefined8 *)(puVar7 + 0x10) = param_7;
  *(undefined8 *)(puVar7 + 0x18) = param_8;
  *(code **)(puVar7 + 0x20) = FUN_00057d28;
  *(undefined **)(puVar7 + 0x28) = puVar6;
  uStack_70 = 0x58518;
  puStack_90 = PTR___NSConcreteStackBlock_00999f30;
  uStack_88 = 0x42000000;
  pcStack_80 = FUN_00057658;
  puStack_78 = &UNK_009a01d0;
  ppuVar8 = &puStack_90;
  puStack_68 = puVar7;
  __Block_copy(ppuVar8);
  puVar1 = puStack_68;
  _swift_retain(puVar7);
  _swift_release(puVar1);
  FUN_00425b20(param_6,puVar5,ppuVar8);
  _objc_retainAutoreleasedReturnValue();
  __Block_release(ppuVar8);
  _objc_release(puVar5);
  puVar5 = puVar7;
  _swift_isEscapingClosureAtFileLocation(puVar7,"",0x39,0x71,0x1a,1);
  _swift_release(puVar7);
  if (((ulong)puVar5 & 1) == 0) {
    FUN_000576e8(auStack_a0 + -extraout_x8,param_6,param_8);
    _objc_release(param_6);
    FUN_00057a00(uStack_98,lVar4,&puStack_90);
    _swift_release(puVar6);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x57d28);
  (*pcVar2)();
}



/* Entry: 00057d28; end: 00057d33;  */

void FUN_00057d28(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uStack_68 = *(undefined8 *)(unaff_x20 + 0x18);
  uStack_70 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_58 = *(undefined8 *)(unaff_x20 + 0x28);
  uStack_60 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = 0xae60d0;
  uStack_50 = param_2;
  FUN_00016c74(0xae60d0,&UNK_007ccdd0);
  puVar1 = PTR___ss5ErrorWS_0099b720;
  uVar3 = 0;
  __ss6ResultOMa(0,uVar4,uVar2,PTR___ss5ErrorWS_0099b720);
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  FUN_0005835c(param_1);
  FUN_000574ec(param_1,FUN_0005851c,auStack_80,uVar4,uVar2,puVar1);
  return;
}



/* Entry: 00057d34; end: 00057dd7;  */

void FUN_00057d34(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uStack_68 = *(undefined8 *)(unaff_x20 + 0x18);
  uStack_70 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_58 = *(undefined8 *)(unaff_x20 + 0x28);
  uStack_60 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = 0xae60d0;
  uStack_50 = param_2;
  FUN_00016c74(0xae60d0,&UNK_007ccdd0);
  puVar1 = PTR___ss5ErrorWS_0099b720;
  uVar3 = 0;
  __ss6ResultOMa(0,uVar4,uVar2,PTR___ss5ErrorWS_0099b720);
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  FUN_0005835c(param_1);
  FUN_000574ec(param_1,param_3,auStack_80,uVar4,uVar2,puVar1);
  return;
}



/* Entry: 00057dd8; end: 00057df3;  */

void FUN_00057dd8(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer("SCSQLiteSwift.SQLAsyncResult",0x1c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x582a4);
  (*pcVar1)();
}



/* Entry: 00057df4; end: 00057e27;  */

void FUN_00057df4(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 00057e28; end: 00057e9f;  */

void FUN_00057e28(ulong *param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar1 = *(undefined8 *)((*(ulong *)PTR__swift_isaMask_0099bb00 & *param_1) + 0x50);
  lVar2 = *(long *)((*(ulong *)PTR__swift_isaMask_0099bb00 & *param_1) + 0x58);
  uVar3 = 0xae60d0;
  FUN_00016c74(0xae60d0,&UNK_007ccdd0);
  lVar4 = 0;
  __ss6ResultOMa(0,uVar1,uVar3,PTR___ss5ErrorWS_0099b720);
                    /* WARNING: Could not recover jumptable at 0x00057e9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar4 + -8) + 8))((long)param_1 + lVar2,lVar4);
  return;
}



/* Entry: 00057ea0; end: 00057eaf;  */

void FUN_00057ea0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00779040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_0099b708)();
  return;
}



/* Entry: 00057eb0; end: 00058093;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_00057eb0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  undefined8 *puVar6;
  code *pcVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long alStack_60 [2];
  
  uVar1 = 0xae60d0;
  FUN_00016c74(0xae60d0,&UNK_007ccdd0);
  lVar2 = 0xff;
  __ss6ResultOMa(0xff,param_3,uVar1,PTR___ss5ErrorWS_0099b720);
  lVar3 = 0;
  __sSqMa(0,lVar2);
  lVar10 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = (undefined8 *)((long)alStack_60 - extraout_x8);
  lVar11 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar11 + 0x40));
  lVar8 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar9 = lVar8 - extraout_x12;
  if (param_1 != 0) {
    alStack_60[1] = param_1;
    _swift_unknownObjectRetain();
    lVar4 = lVar9;
    _swift_dynamicCast(lVar9,alStack_60 + 1,PTR___syXlN_0099b8d0 + 8,lVar2,0);
    if ((int)lVar4 != 0) {
      pcVar7 = *(code **)(lVar11 + 0x20);
      (*pcVar7)(lVar8,lVar9,lVar2);
      (**(code **)(lVar10 + 8))(param_2,lVar3);
      (*pcVar7)(param_2,lVar8,lVar2);
      (**(code **)(lVar11 + 0x38))(param_2,0,1,lVar2);
      _swift_unknownObjectRelease(alStack_60[1]);
      return;
    }
    param_1 = alStack_60[1];
    _swift_unknownObjectRelease(alStack_60[1]);
  }
  func_0x0005840c();
  puVar5 = &UNK_009a03d8;
  _swift_allocError(&UNK_009a03d8,param_1,0,0);
  *puVar6 = puVar5;
  _swift_storeEnumTagMultiPayload(puVar6,lVar2,1);
  (**(code **)(lVar11 + 0x38))(puVar6,0,1,lVar2);
  (**(code **)(lVar10 + 0x28))(param_2,puVar6,lVar3);
  return;
}



/* Entry: 00058094; end: 0005810f;  */

void FUN_00058094(long param_1,undefined8 param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  _swift_unknownObjectRetain(param_2);
  (*pcVar1)(param_2);
                    /* WARNING: Could not recover jumptable at 0x0077b62c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_0099bb78)(param_2);
  return;
}



/* Entry: 00058110; end: 00058223;  */

void FUN_00058110(undefined *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long extraout_x8;
  undefined8 *puVar6;
  long lVar7;
  
  uVar1 = 0xae60d0;
  FUN_00016c74(0xae60d0,&UNK_007ccdd0);
  lVar2 = 0xff;
  __ss6ResultOMa(0xff,param_3,uVar1,PTR___ss5ErrorWS_0099b720);
  lVar3 = 0;
  __sSqMa(0,lVar2);
  lVar7 = *(long *)(lVar3 + -8);
  lVar4 = lVar3;
  (*(code *)PTR____chkstk_darwin_00999f48)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = (undefined8 *)(&stack0xffffffffffffffc0 + -extraout_x8);
  puVar5 = param_1;
  if (param_1 == (undefined *)0x0) {
    FUN_000583cc();
    puVar5 = &UNK_009a03f8;
    _swift_allocError(&UNK_009a03f8,lVar4,0,0);
  }
  *puVar6 = puVar5;
  _swift_storeEnumTagMultiPayload(puVar6,lVar2,1);
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(puVar6,0,1,lVar2);
  _swift_errorRetain(param_1);
  (**(code **)(lVar7 + 0x28))(param_2,puVar6,lVar3);
  return;
}



/* Entry: 00058224; end: 00058277;  */

void FUN_00058224(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = 2;
  FUN_0040c9a8(2,0x12,0,0);
  if (iVar1 != 0) {
    _swift_willThrowTypedImpl(param_1,param_2,param_3);
  }
  return;
}



/* Entry: 00058278; end: 000582a3;  */

void FUN_00058278(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer("SCSQLiteSwift.SQLAsyncResult",0x1c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x582a4);
  (*pcVar1)();
}



/* Entry: 000582a4; end: 000582bb;  */

void FUN_000582a4(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077b1f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericValueMetadata_0099b938)();
  return;
}



/* Entry: 000582bc; end: 0005834f;  */

void FUN_000582bc(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  long lStack_28;
  
  uVar3 = *(ulong *)(param_1 + 0x50);
  uVar1 = 0xae60d0;
  FUN_00016c74(0xae60d0,&UNK_007ccdd0);
  lVar2 = 0x13f;
  __ss6ResultOMa(0x13f,uVar3,uVar1,PTR___ss5ErrorWS_0099b720);
  if (uVar3 < 0x40) {
    lStack_28 = *(long *)(lVar2 + -8) + 0x40;
    _swift_initClassMetadata2(param_1,0,1,&lStack_28,param_1 + 0x58);
  }
  return;
}



/* Entry: 00058350; end: 0005835b;  */

void FUN_00058350(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  _swift_getGenericMetadata(param_1,&uStack_28,&UNK_0083eef4);
  return;
}



/* Entry: 0005835c; end: 00058397;  */

long * FUN_0005835c(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = param_1[3];
  plVar1 = param_1;
  if ((*(byte *)(*(long *)(lVar2 + -8) + 0x52) >> 1 & 1) != 0) {
    plVar1 = param_2;
    _swift_allocBox();
    *param_1 = lVar2;
  }
  return plVar1;
}



/* Entry: 00058398; end: 000583ab;  */

void FUN_00058398(void)

{
  FUN_0005847c();
  return;
}



/* Entry: 000583ac; end: 000583cb;  */

void FUN_000583ac(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 000583cc; end: 0005844b;  */

void FUN_000583cc(void)

{
  undefined *puVar1;
  
  if (puRam0000000000b30510 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007cfe74;
  _swift_getWitnessTable(&UNK_007cfe74,&UNK_009a03f8);
  puRam0000000000b30510 = puVar1;
  return;
}



/* Entry: 0005844c; end: 00058463;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_0005844c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long unaff_x20;
  undefined8 *puVar8;
  code *pcVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long alStack_60 [2];
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = 0xae60d0;
  FUN_00016c74(0xae60d0,&UNK_007ccdd0);
  lVar4 = 0xff;
  __ss6ResultOMa(0xff,uVar1,uVar3,PTR___ss5ErrorWS_0099b720);
  lVar5 = 0;
  __sSqMa(0,lVar4);
  lVar12 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar8 = (undefined8 *)((long)alStack_60 - extraout_x8);
  lVar13 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar13 + 0x40));
  lVar10 = (long)puVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar11 = lVar10 - extraout_x12;
  if (param_1 != 0) {
    alStack_60[1] = param_1;
    _swift_unknownObjectRetain();
    lVar6 = lVar11;
    _swift_dynamicCast(lVar11,alStack_60 + 1,PTR___syXlN_0099b8d0 + 8,lVar4,0);
    if ((int)lVar6 != 0) {
      pcVar9 = *(code **)(lVar13 + 0x20);
      (*pcVar9)(lVar10,lVar11,lVar4);
      (**(code **)(lVar12 + 8))(uVar2,lVar5);
      (*pcVar9)(uVar2,lVar10,lVar4);
      (**(code **)(lVar13 + 0x38))(uVar2,0,1,lVar4);
      _swift_unknownObjectRelease(alStack_60[1]);
      return;
    }
    param_1 = alStack_60[1];
    _swift_unknownObjectRelease(alStack_60[1]);
  }
  func_0x0005840c();
  puVar7 = &UNK_009a03d8;
  _swift_allocError(&UNK_009a03d8,param_1,0,0);
  *puVar8 = puVar7;
  _swift_storeEnumTagMultiPayload(puVar8,lVar4,1);
  (**(code **)(lVar13 + 0x38))(puVar8,0,1,lVar4);
  (**(code **)(lVar12 + 0x28))(uVar2,puVar8,lVar5);
  return;
}



/* Entry: 00058464; end: 0005847b;  */

void FUN_00058464(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_00058110(param_1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 0005847c; end: 000584b3;  */

void FUN_0005847c(long *param_1)

{
  long unaff_x20;
  long unaff_x21;
  
  (**(code **)(unaff_x20 + 0x20))(*(undefined8 *)(unaff_x20 + 0x30));
  if (unaff_x21 != 0) {
    *param_1 = unaff_x21;
  }
  return;
}



/* Entry: 000584b4; end: 000584df;  */

void FUN_000584b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  _swift_getGenericMetadata(param_1,&uStack_28,param_5);
  return;
}



/* Entry: 000584e0; end: 0005851b;  */

undefined1  [16] FUN_000584e0(void)

{
  return ZEXT816(0x9a03d8);
}



/* Entry: 0005851c; end: 00058543;  */

void FUN_0005851c(void)

{
  FUN_00058398();
  return;
}



/* Entry: 00058544; end: 00058573;  */

void FUN_00058544(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 00058574; end: 00058583; -[_TtC24SnapTokenStorageServices24SnapTokenStorageServices store] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00058574(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_0099adb8)
            (*(undefined8 *)(param_1 + _DAT_00ae8398));
  return;
}



/* Entry: 00058584; end: 00058593; -[_TtC24SnapTokenStorageServices24SnapTokenStorageServices reader] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00058584(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_0099adb8)
            (*(undefined8 *)(param_1 + _DAT_00ae83a0));
  return;
}



/* Entry: 00058594; end: 000585f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00058594(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_00ae8398) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_00ae83a0) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_00abbf70);
  return;
}



/* Entry: 000585f8; end: 0005866f; -[_TtC24SnapTokenStorageServices24SnapTokenStorageServices initWithStore:reader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000585f8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_00ae8398) = param_3;
  *(undefined8 *)(param_1 + _DAT_00ae83a0) = param_4;
  puVar1 = PTR_s_init_00abbf70;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  return;
}



/* Entry: 00058670; end: 000586cf; -[_TtC24SnapTokenStorageServices24SnapTokenStorageServices init] */

void FUN_00058670(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SnapTokenStorageServices.SnapTokenStorageServices",0x31,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x5869c);
  (*pcVar1)();
}



/* Entry: 000586d0; end: 00058707; -[_TtC24SnapTokenStorageServices24SnapTokenStorageServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000586d0(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_00ae8398));
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(*(undefined8 *)(param_1 + _DAT_00ae83a0));
  return;
}



/* Entry: 00058708; end: 00058727;  */

void FUN_00058708(void)

{
  _objc_opt_self(&PTR_PTR_00ac7bd8);
  return;
}



/* Entry: 00058728; end: 00058743;  */

undefined8 FUN_00058728(ulong *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  char cVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  uVar1 = *param_1;
  uVar3 = param_1[1];
  lVar2 = *param_2;
  uVar4 = param_2[1];
  cVar5 = (char)param_2[2];
  if ((char)param_1[2] == '\0') {
    if (cVar5 != '\0') {
      return 0;
    }
    if (uVar3 >> 0x3c < 0xf) {
      if (uVar4 >> 0x3c < 0xf) {
        func_0x00058968(uVar1,uVar3,0);
        func_0x00058968(lVar2,uVar4,0);
        uVar6 = uVar1;
        FUN_00038814(uVar1,uVar3,lVar2,uVar4);
        FUN_00023344(lVar2,uVar4);
        FUN_00023344(uVar1,uVar3);
        if ((uVar6 & 1) == 0) {
          return 0;
        }
        return 1;
      }
    }
    else if (0xe < uVar4 >> 0x3c) {
      func_0x00058968(uVar1,uVar3,0);
      uVar7 = 0;
      goto LAB_000587f8;
    }
    func_0x00058968(uVar1,uVar3,0);
    uVar7 = 0;
  }
  else {
    if ((char)param_1[2] != '\x01') {
      if (cVar5 != '\x02') {
        return 0;
      }
      if (uVar4 == 0 && lVar2 == 0) {
        return 1;
      }
      return 0;
    }
    if (cVar5 != '\x01') {
      return 0;
    }
    if (uVar3 >> 0x3c < 0xf) {
      if (uVar4 >> 0x3c < 0xf) {
        func_0x00058968(uVar1,uVar3,1);
        func_0x00058968(lVar2,uVar4,1);
        uVar6 = uVar1;
        FUN_00038814(uVar1,uVar3,lVar2,uVar4);
        FUN_00023344(lVar2,uVar4);
        FUN_00023344(uVar1,uVar3);
        if ((uVar6 & 1) == 0) {
          return 0;
        }
        return 1;
      }
    }
    else if (0xe < uVar4 >> 0x3c) {
      FUN_00058964(uVar1,uVar3,1);
      uVar7 = 1;
LAB_000587f8:
      func_0x00058968(lVar2,uVar4,uVar7);
      FUN_00023344(uVar1,uVar3);
      return 1;
    }
    func_0x00058968(uVar1,uVar3,1);
    uVar7 = 1;
  }
  func_0x00058968(lVar2,uVar4,uVar7);
  FUN_00023344(uVar1,uVar3);
  FUN_00023344(lVar2,uVar4);
  return 0;
}



/* Entry: 00058744; end: 00058963;  */

undefined8
FUN_00058744(ulong param_1,ulong param_2,char param_3,long param_4,ulong param_5,char param_6)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if (param_3 == '\0') {
    if (param_6 != '\0') {
      return 0;
    }
    if (param_2 >> 0x3c < 0xf) {
      if (param_5 >> 0x3c < 0xf) {
        func_0x00058968(param_1,param_2,0);
        func_0x00058968(param_4,param_5,0);
        uVar1 = param_1;
        FUN_00038814(param_1,param_2,param_4,param_5);
        FUN_00023344(param_4,param_5);
        FUN_00023344(param_1,param_2);
        if ((uVar1 & 1) == 0) {
          return 0;
        }
        return 1;
      }
    }
    else if (0xe < param_5 >> 0x3c) {
      func_0x00058968(param_1,param_2,0);
      uVar2 = 0;
      goto LAB_000587f8;
    }
    func_0x00058968(param_1,param_2,0);
    uVar2 = 0;
  }
  else {
    if (param_3 != '\x01') {
      if (param_6 != '\x02') {
        return 0;
      }
      if (param_5 == 0 && param_4 == 0) {
        return 1;
      }
      return 0;
    }
    if (param_6 != '\x01') {
      return 0;
    }
    if (param_2 >> 0x3c < 0xf) {
      if (param_5 >> 0x3c < 0xf) {
        func_0x00058968(param_1,param_2,1);
        func_0x00058968(param_4,param_5,1);
        uVar1 = param_1;
        FUN_00038814(param_1,param_2,param_4,param_5);
        FUN_00023344(param_4,param_5);
        FUN_00023344(param_1,param_2);
        if ((uVar1 & 1) == 0) {
          return 0;
        }
        return 1;
      }
    }
    else if (0xe < param_5 >> 0x3c) {
      FUN_00058964(param_1,param_2,1);
      uVar2 = 1;
LAB_000587f8:
      func_0x00058968(param_4,param_5,uVar2);
      FUN_00023344(param_1,param_2);
      return 1;
    }
    func_0x00058968(param_1,param_2,1);
    uVar2 = 1;
  }
  func_0x00058968(param_4,param_5,uVar2);
  FUN_00023344(param_1,param_2);
  FUN_00023344(param_4,param_5);
  return 0;
}



/* Entry: 00058964; end: 0005899f;  */

undefined8 * FUN_00058964(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  FUN_00058964(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Entry: 000589a0; end: 00058a3b;  */

undefined8 * FUN_000589a0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  FUN_00058964(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Entry: 00058a3c; end: 00058a7f;  */

undefined8 * FUN_00058a3c(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined1 *)(param_2 + 2);
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  uVar2 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar1;
  func_0x0005898c(uVar3,uVar4,uVar2);
  return param_1;
}



/* Entry: 00058a80; end: 00058b6b;  */

int FUN_00058a80(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfd < param_2) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    return *param_1 + 0xfe;
  }
  uVar1 = *(byte *)(param_1 + 4) ^ 0xff;
  if (*(byte *)(param_1 + 4) < 3) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 00058b6c; end: 00058c43;  */

void FUN_00058b6c(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 00058c44; end: 00058c63;  */

void FUN_00058c44(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 00058c64; end: 00058ca3;  */

void FUN_00058c64(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae83d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007cff48;
  _swift_getWitnessTable(&UNK_007cff48,&UNK_009a05e8);
  puRam0000000000ae83d0 = puVar1;
  return;
}



/* Entry: 00058ca4; end: 00058cb3;  */

undefined1  [16] FUN_00058ca4(void)

{
  return ZEXT816(0x9a05e8);
}



/* Entry: 00058cb4; end: 00058cfb;  */

uint FUN_00058cb4(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined1 uStack_20;
  
  uVar1 = 0;
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_50 = *(undefined1 *)(param_1 + 4);
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_28 = param_2[3];
  uStack_30 = param_2[2];
  uStack_20 = *(undefined1 *)(param_2 + 4);
  FUN_00058cfc(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 00058cfc; end: 00058e7b;  */

ulong FUN_00058cfc(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  undefined1 auVar27 [16];
  
  uVar7 = *param_1;
  uVar8 = param_1[1];
  bVar11 = (byte)param_1[4];
  if (bVar11 < 2) {
    if (bVar11 == 0) {
      if ((byte)param_2[4] == 0) {
        uVar1 = *param_2;
        uVar9 = param_2[1];
        uVar6 = 0;
        FUN_00065708(0);
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar7,uVar1,uVar6);
        if ((uVar7 & 1) != 0) {
          func_0x00072f04(0);
          __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar8,uVar9);
          return (ulong)((uint)uVar8 & 1);
        }
      }
    }
    else if ((byte)param_2[4] == 1) {
      uVar9 = *param_2;
      uVar10 = param_2[1];
      if (uVar7 == uVar9 && uVar8 == uVar10) {
        return 1;
      }
LAB_00058e18:
                    /* WARNING: Could not recover jumptable at 0x00778f98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_0099b6b8
      )(uVar7,uVar8,uVar9,uVar10,0);
      return uVar7;
    }
  }
  else if (bVar11 == 2) {
    if ((byte)param_2[4] == 2) {
      uVar1 = param_1[2];
      uVar3 = param_1[3];
      uVar9 = param_2[2];
      uVar10 = param_2[3];
      uVar2 = *param_2;
      uVar4 = param_2[1];
      uVar6 = 0;
      FUN_00065708(0);
      __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar7,uVar2,uVar6);
      if ((uVar7 & 1) != 0) {
        func_0x00072f04(0);
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar8,uVar4);
        if ((uVar8 & 1) != 0) {
          uVar7 = uVar1;
          uVar8 = uVar3;
          if ((uVar1 == uVar9) && (uVar3 == uVar10)) {
            return 1;
          }
          goto LAB_00058e18;
        }
      }
    }
  }
  else if ((byte)param_2[4] == 3) {
    uVar8 = param_2[3];
    uVar7 = param_2[2];
    bVar11 = (byte)*param_2 | (byte)uVar7;
    bVar12 = *(byte *)((long)param_2 + 1) | (byte)(uVar7 >> 8);
    bVar13 = *(byte *)((long)param_2 + 2) | (byte)(uVar7 >> 0x10);
    bVar14 = *(byte *)((long)param_2 + 3) | (byte)(uVar7 >> 0x18);
    bVar15 = *(byte *)((long)param_2 + 4) | (byte)(uVar7 >> 0x20);
    bVar16 = *(byte *)((long)param_2 + 5) | (byte)(uVar7 >> 0x28);
    bVar17 = *(byte *)((long)param_2 + 6) | (byte)(uVar7 >> 0x30);
    bVar18 = *(byte *)((long)param_2 + 7) | (byte)(uVar7 >> 0x38);
    bVar19 = (byte)param_2[1] | (byte)uVar8;
    bVar20 = *(byte *)((long)param_2 + 9) | (byte)(uVar8 >> 8);
    bVar21 = *(byte *)((long)param_2 + 10) | (byte)(uVar8 >> 0x10);
    bVar22 = *(byte *)((long)param_2 + 0xb) | (byte)(uVar8 >> 0x18);
    bVar23 = *(byte *)((long)param_2 + 0xc) | (byte)(uVar8 >> 0x20);
    bVar24 = *(byte *)((long)param_2 + 0xd) | (byte)(uVar8 >> 0x28);
    bVar25 = *(byte *)((long)param_2 + 0xe) | (byte)(uVar8 >> 0x30);
    bVar26 = *(byte *)((long)param_2 + 0xf) | (byte)(uVar8 >> 0x38);
    auVar27[1] = bVar12;
    auVar27[0] = bVar11;
    auVar27[2] = bVar13;
    auVar27[3] = bVar14;
    auVar27[4] = bVar15;
    auVar27[5] = bVar16;
    auVar27[6] = bVar17;
    auVar27[7] = bVar18;
    auVar27[8] = bVar19;
    auVar27[9] = bVar20;
    auVar27[10] = bVar21;
    auVar27[0xb] = bVar22;
    auVar27[0xc] = bVar23;
    auVar27[0xd] = bVar24;
    auVar27[0xe] = bVar25;
    auVar27[0xf] = bVar26;
    auVar5[1] = bVar12;
    auVar5[0] = bVar11;
    auVar5[2] = bVar13;
    auVar5[3] = bVar14;
    auVar5[4] = bVar15;
    auVar5[5] = bVar16;
    auVar5[6] = bVar17;
    auVar5[7] = bVar18;
    auVar5[8] = bVar19;
    auVar5[9] = bVar20;
    auVar5[10] = bVar21;
    auVar5[0xb] = bVar22;
    auVar5[0xc] = bVar23;
    auVar5[0xd] = bVar24;
    auVar5[0xe] = bVar25;
    auVar5[0xf] = bVar26;
    auVar27 = NEON_ext(auVar27,auVar5,8,1);
    if (CONCAT17(bVar18 | auVar27[7],
                 CONCAT16(bVar17 | auVar27[6],
                          CONCAT15(bVar16 | auVar27[5],
                                   CONCAT14(bVar15 | auVar27[4],
                                            CONCAT13(bVar14 | auVar27[3],
                                                     CONCAT12(bVar13 | auVar27[2],
                                                              CONCAT11(bVar12 | auVar27[1],
                                                                       bVar11 | auVar27[0]))))))) ==
        0) {
      return 1;
    }
  }
  return 0;
}



/* Entry: 00058e7c; end: 00058f17;  */

long FUN_00058e7c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 00058f18; end: 00058f2b;  */

void FUN_00058f18(undefined8 *param_1)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 uVar3;
  
  uVar3 = param_1[1];
  uVar1 = param_1[3];
  cVar2 = *(char *)(param_1 + 4);
  if (cVar2 == '\x02') {
    _objc_release(*param_1,uVar3,param_1[2]);
    _objc_release(uVar3);
    uVar3 = uVar1;
  }
  else if (cVar2 != '\x01') {
    if (cVar2 != '\0') {
      return;
    }
    _objc_release(*param_1,uVar3,param_1[2]);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_0099ada0)(uVar3);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(uVar3);
  return;
}



/* Entry: 00058f2c; end: 00058f9b;  */

void FUN_00058f2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 char param_5)

{
  if (param_5 == '\x02') {
    _objc_release();
    _objc_release(param_2);
    param_2 = param_4;
  }
  else if (param_5 != '\x01') {
    if (param_5 != '\0') {
      return;
    }
    _objc_release();
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_0099ada0)(param_2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(param_2);
  return;
}



/* Entry: 00058f9c; end: 0005906b;  */

undefined8 * FUN_00058f9c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar2 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = *(undefined1 *)(param_2 + 4);
  func_0x00058ea8(uVar1,uVar3,uVar2,uVar4,uVar5);
  *param_1 = uVar1;
  param_1[1] = uVar3;
  param_1[2] = uVar2;
  param_1[3] = uVar4;
  *(undefined1 *)(param_1 + 4) = uVar5;
  return param_1;
}



/* Entry: 0005906c; end: 000590b3;  */

undefined8 * FUN_0005906c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar3 = *(undefined1 *)(param_2 + 4);
  uVar5 = *param_1;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar6 = param_1[3];
  uVar7 = *param_2;
  uVar9 = param_2[3];
  uVar8 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar7;
  param_1[3] = uVar9;
  param_1[2] = uVar8;
  uVar4 = *(undefined1 *)(param_1 + 4);
  *(undefined1 *)(param_1 + 4) = uVar3;
  FUN_00058f2c(uVar5,uVar1,uVar2,uVar6,uVar4);
  return param_1;
}



/* Entry: 000590b4; end: 0005918b;  */

int FUN_000590b4(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfc < param_2) && (*(char *)((long)param_1 + 0x21) != '\0')) {
    return *param_1 + 0xfd;
  }
  uVar1 = *(byte *)(param_1 + 8) ^ 0xff;
  if (*(byte *)(param_1 + 8) < 4) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 0005918c; end: 00059237;  */

void FUN_0005918c(void)

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



/* Entry: 00059238; end: 0005926f;  */

void FUN_00059238(undefined1 *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (2 < uVar1) {
    uVar1 = 3;
  }
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 00059270; end: 0005928b; -[SCUserVerificationContext description] */

void FUN_00059270(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0005928c; end: 000592d3; -[SCUserVerificationContext init] */

void FUN_0005928c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCUserVerificationModels/SCUserVerificationContextWrapper.swift",0x3f,2,0x32,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x592d4);
  (*pcVar1)();
}



/* Entry: 000592d4; end: 00059307; -[SCUserVerificationContext hash] */

undefined8 FUN_000592d4(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_00059308();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 00059308; end: 000593ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00059308(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  __ss6HasherV8_combineyySuF(*(undefined1 *)(unaff_x20 + _DAT_00ae83d8));
  if ((ulong)((undefined8 *)(unaff_x20 + _DAT_00ae83e0))[1] >> 0x3c < 0xf) {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_00ae83e0);
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar2);
    uVar1 = uVar2;
    func_0x007843a0();
    _objc_release(uVar2);
  }
  else {
    uVar1 = 0;
  }
  __ss6HasherV8_combineyySuF(uVar1);
  if ((ulong)((undefined8 *)(unaff_x20 + _DAT_00ae83e8))[1] >> 0x3c < 0xf) {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_00ae83e8);
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar2);
    uVar1 = uVar2;
    func_0x007843a0();
    _objc_release(uVar2);
  }
  else {
    uVar1 = 0;
  }
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 000593f0; end: 000595c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_000593f0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  char cVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long unaff_x20;
  uint uVar9;
  long lStack_68;
  undefined1 auStack_60 [24];
  long lStack_48;
  
  lVar6 = unaff_x20;
  _swift_getObjectType();
  func_0x00059828(param_1,auStack_60);
  if (lStack_48 == 0) {
    FUN_00027748(auStack_60);
  }
  else {
    plVar7 = &lStack_68;
    _swift_dynamicCast(plVar7,auStack_60,PTR___sypN_0099b8d8 + 8,lVar6,6);
    if (((ulong)plVar7 & 1) != 0) {
      cVar5 = *(char *)(unaff_x20 + _DAT_00ae83d8);
      if (cVar5 == *(char *)(lStack_68 + _DAT_00ae83d8)) {
        lVar6 = _DAT_00ae83e0;
        if ((cVar5 != '\0') && (lVar6 = _DAT_00ae83e8, cVar5 != '\x01')) {
          _objc_release();
          uVar9 = 1;
          goto LAB_00059540;
        }
        uVar1 = *(undefined8 *)(lStack_68 + lVar6);
        uVar3 = ((undefined8 *)(lStack_68 + lVar6))[1];
        uVar2 = *(undefined8 *)(unaff_x20 + lVar6);
        uVar4 = ((undefined8 *)(unaff_x20 + lVar6))[1];
        if (uVar4 >> 0x3c < 0xf) {
          FUN_000308a8(uVar1,uVar3);
          if (uVar3 >> 0x3c < 0xf) {
            FUN_000308a8(uVar1,uVar3);
            FUN_000308a8(uVar2,uVar4);
            uVar8 = uVar2;
            FUN_00038814(uVar2,uVar4,uVar1,uVar3);
            uVar9 = (uint)uVar8;
            FUN_00023344(uVar1,uVar3);
            _objc_release(lStack_68);
            FUN_00023344(uVar1,uVar3);
            FUN_00023344(uVar2,uVar4);
            goto LAB_00059540;
          }
          FUN_000308a8(uVar2,uVar4);
          _objc_release(lStack_68);
        }
        else {
          FUN_000308a8(uVar1,uVar3);
          FUN_000308a8(uVar2,uVar4);
          _objc_release(lStack_68);
          if (0xe < uVar3 >> 0x3c) {
            FUN_00023344(uVar2,uVar4);
            uVar9 = 1;
            goto LAB_00059540;
          }
        }
        FUN_00023344(uVar2,uVar4);
        FUN_00023344(uVar1,uVar3);
      }
      else {
        _objc_release();
      }
    }
  }
  uVar9 = 0;
LAB_00059540:
  return uVar9 & 1;
}



/* Entry: 000595c8; end: 00059647; -[SCUserVerificationContext isEqual:] */

uint FUN_000595c8(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_40);
    _swift_unknownObjectRelease(param_3);
  }
  FUN_000593f0(&uStack_40);
  _objc_release(param_1);
  FUN_00027748(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 00059648; end: 0005964b; -[SCUserVerificationContext copyWithZone:] */

void FUN_00059648(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_0099ada8)();
  return;
}



/* Entry: 0005964c; end: 000596ff; +[SCUserVerificationContext fromNewRegistrationWithCofResponse:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0005964c(long param_1,long param_2,long param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  long lStack_40;
  long lStack_38;
  
  if (param_3 == 0) {
    param_2 = -0x1000000000000000;
  }
  else {
    lVar3 = param_3;
    _objc_retain(param_3);
    __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
    _objc_release(lVar3);
  }
  _swift_getObjCClassMetadata();
  lVar3 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar3 + _DAT_00ae83d8) = 0;
  plVar1 = (long *)(lVar3 + _DAT_00ae83e0);
  *plVar1 = param_3;
  plVar1[1] = param_2;
  puVar2 = (undefined8 *)(lVar3 + _DAT_00ae83e8);
  puVar2[1] = 0xf000000000000000;
  *puVar2 = 0;
  lStack_40 = lVar3;
  lStack_38 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00059700; end: 000597b7; +[SCUserVerificationContext fromResumeRegistrationWithCofResponse:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00059700(long param_1,long param_2,long param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  long lStack_40;
  long lStack_38;
  
  if (param_3 == 0) {
    param_2 = -0x1000000000000000;
  }
  else {
    lVar3 = param_3;
    _objc_retain(param_3);
    __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
    _objc_release(lVar3);
  }
  _swift_getObjCClassMetadata();
  lVar3 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar3 + _DAT_00ae83d8) = 1;
  puVar2 = (undefined8 *)(lVar3 + _DAT_00ae83e0);
  puVar2[1] = 0xf000000000000000;
  *puVar2 = 0;
  plVar1 = (long *)(lVar3 + _DAT_00ae83e8);
  *plVar1 = param_3;
  plVar1[1] = param_2;
  lStack_40 = lVar3;
  lStack_38 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 000597b8; end: 00059877; +[SCUserVerificationContext fromPreRegistration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000597b8(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_00ae83d8) = 2;
  puVar1 = (undefined8 *)(lVar2 + _DAT_00ae83e0);
  puVar1[1] = 0xf000000000000000;
  *puVar1 = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_00ae83e8);
  puVar1[1] = 0xf000000000000000;
  *puVar1 = 0;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00059878; end: 00059943; -[SCUserVerificationContext matchFromNewRegistration:fromResumeRegistration:fromPreRegistration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00059878(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  lVar1 = _DAT_00ae83e0;
  if ((*(char *)(param_1 + _DAT_00ae83d8) != '\0') &&
     (lVar1 = _DAT_00ae83e8, param_3 = param_4, *(char *)(param_1 + _DAT_00ae83d8) != '\x01')) {
                    /* WARNING: Could not recover jumptable at 0x00059940. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_5 + 0x10))(param_5);
    return;
  }
  uVar2 = ((undefined8 *)(param_1 + lVar1))[1];
  if (uVar2 >> 0x3c < 0xf) {
    uVar3 = *(undefined8 *)(param_1 + lVar1);
    _objc_retain(param_1);
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar3,uVar2);
  }
  else {
    _objc_retain(param_1);
    uVar3 = 0;
  }
  (**(code **)(param_3 + 0x10))(param_3,uVar3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar3);
  return;
}



/* Entry: 00059944; end: 00059977;  */

void FUN_00059944(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 00059978; end: 000599b7; -[SCUserVerificationContext .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00059978(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  FUN_00023344(*(undefined8 *)(param_1 + _DAT_00ae83e0),((undefined8 *)(param_1 + _DAT_00ae83e0))[1]
              );
  uVar1 = ((undefined8 *)(param_1 + _DAT_00ae83e8))[1];
  if (0xe < uVar1 >> 0x3c) {
    return;
  }
  uVar2 = (uint)(uVar1 >> 0x3e);
  if (uVar2 != 1) {
    if (uVar2 != 2) {
      return;
    }
    _swift_release(*(undefined8 *)(param_1 + _DAT_00ae83e8));
  }
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_0099bb20)(uVar1 & 0x3fffffffffffffff);
  return;
}



/* Entry: 000599b8; end: 000599d7;  */

void FUN_000599b8(void)

{
  _objc_opt_self(&PTR_PTR_00ac7ca0);
  return;
}



/* Entry: 000599d8; end: 00059b3f;  */

int FUN_000599d8(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfd < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 2) {
      iVar2 = 4;
    }
    if (param_2 + 2 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_00059a54;
        goto LAB_00059a38;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_00059a38:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_00059a54:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 00059b40; end: 00059b7f;  */

void FUN_00059b40(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae8418 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d00b0;
  _swift_getWitnessTable(&UNK_007d00b0,&UNK_009a0770);
  puRam0000000000ae8418 = puVar1;
  return;
}


