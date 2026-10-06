/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1014745e0; end: 10147465f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1014745e0(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112da1280;
  func_0x000107c61428(unaff_x20 + _DAT_112da1280,auStack_38,0,0);
  return *(undefined8 *)(unaff_x20 + lVar1);
}



/* Entry: 101474660; end: 101474693;  */

void FUN_101474660(void)

{
  return;
}



/* Entry: 101474694; end: 101474793;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_101474694(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112da12a0;
  func_0x000107c61428(unaff_x20 + _DAT_112da12a0,auStack_38,0,0);
  return *(undefined1 *)(unaff_x20 + lVar1);
}



/* Entry: 101474794; end: 101474797;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101474794(undefined1 param_1)

{
  long lVar1;
  long unaff_x20;
  long lStack_68;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112da12a0;
  func_0x000107c61428(unaff_x20 + _DAT_112da12a0,auStack_48,1,0);
  *(undefined1 *)(unaff_x20 + lVar1) = param_1;
  lVar1 = _DAT_112da1238;
  func_0x000107c61428(unaff_x20 + _DAT_112da1238,auStack_60,0,0);
  if (*(char *)(unaff_x20 + lVar1) == '\x01') {
    func_0x000100083b20(&lStack_68);
    lVar1 = lStack_68;
    func_0x000107c41948();
    func_0x000107c61180();
    func_0x000107c615e8(lStack_68);
    if (lVar1 != 0) {
      func_0x000107c41a48(lVar1);
      func_0x000107c615e8(lVar1);
    }
  }
  return;
}



/* Entry: 101474798; end: 1014747e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101474798(undefined1 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112da12b0;
  func_0x000107c61428(unaff_x20 + _DAT_112da12b0,auStack_48,1,0);
  *(undefined1 *)(unaff_x20 + lVar1) = param_1;
  return;
}



/* Entry: 1014747e4; end: 10147493f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1014747e4(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112da12c0;
  func_0x000107c61428(unaff_x20 + _DAT_112da12c0,auStack_38,0,0);
  uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  func_0x000107c61174(uVar2);
  return uVar2;
}



/* Entry: 101474940; end: 1014749e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101474940(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  lVar1 = _DAT_112da12c8;
  func_0x000107c61428(unaff_x20 + _DAT_112da12c8,auStack_58,1,0);
  uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  func_0x000107c61170(uVar2);
  lVar1 = _DAT_112da12d8;
  func_0x000107c61428(unaff_x20 + _DAT_112da12d8,auStack_70,1,0);
  *(undefined8 *)(unaff_x20 + lVar1) = param_3;
  lVar1 = _DAT_112da12e0;
  func_0x000107c61428(unaff_x20 + _DAT_112da12e0,auStack_88,1,0);
  *(undefined8 *)(unaff_x20 + lVar1) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_1);
  return;
}



/* Entry: 1014749e8; end: 101474a33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1014749e8(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112da12e8;
  func_0x000107c61428(unaff_x20 + _DAT_112da12e8,auStack_38,0,0);
  uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  func_0x000107c61174(uVar2);
  return uVar2;
}



/* Entry: 101474a34; end: 101474a5b;  */

void FUN_101474a34(void)

{
  return;
}



/* Entry: 101474a5c; end: 101474a9f; -[_TtC22SCManagedCaptureDevice28MockManagedCaptureDeviceImpl getManagedCaptureDevicePosition] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101474a5c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112da12f0;
  func_0x000107c61428(param_1 + _DAT_112da12f0,auStack_38,0,0);
  return *(undefined8 *)(param_1 + lVar1);
}



/* Entry: 101474aa0; end: 101474af7; -[_TtC22SCManagedCaptureDevice28MockManagedCaptureDeviceImpl getAVCaptureDevicePosition] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101474aa0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_38 [24];
  
  lVar2 = _DAT_112da12f0;
  func_0x000107c61428(param_1 + _DAT_112da12f0,auStack_38,0,0);
  uVar1 = 2;
  if (*(long *)(param_1 + lVar2) != 0) {
    uVar1 = 0;
  }
  if (*(long *)(param_1 + lVar2) == 1) {
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 101474af8; end: 101474b3f; -[_TtC22SCManagedCaptureDevice28MockManagedCaptureDeviceImpl getDeviceType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101474af8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112da12f8;
  func_0x000107c61428(param_1 + _DAT_112da12f8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 101474b40; end: 101474b8f; -[_TtC22SCManagedCaptureDevice28MockManagedCaptureDeviceImpl captureSessionDidAddDevice] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101474b40(long param_1)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112da1238;
  func_0x000107c61428(param_1 + _DAT_112da1238,auStack_48,1,0);
  *(undefined1 *)(param_1 + lVar1) = 1;
  return;
}



/* Entry: 101474b90; end: 101474bd3; -[_TtC22SCManagedCaptureDevice28MockManagedCaptureDeviceImpl captureSessionDidRemoveDevice] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101474b90(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112da1238;
  func_0x000107c61428(param_1 + _DAT_112da1238,auStack_38,1,0);
  *(undefined1 *)(param_1 + lVar1) = 0;
  return;
}



/* Entry: 101474bd4; end: 101474bf3;  */

void FUN_101474bd4(void)

{
  func_0x000107c61168(&PTR_PTR_1127d9388);
  return;
}



/* Entry: 101474bf4; end: 101474c0b; -[_TtC22SCManagedCaptureDevice28MockManagedCaptureDeviceImpl hasActiveFormat] */

undefined8 FUN_101474bf4(void)

{
  return 1;
}



/* Entry: 101474c0c; end: 101474c47; -[_TtC26SCCaptureDeviceDebugLogger24CaptureDeviceDebugLogger init] */

void FUN_101474c0c(undefined8 param_1)

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



/* Entry: 101474c48; end: 101474c9b;  */

void FUN_101474c48(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101474c9c; end: 101474cfb;  */

undefined1  [16] FUN_101474c9c(void)

{
  return ZEXT816(0x1103c2900);
}



/* Entry: 101474cfc; end: 101474daf;  */

void FUN_101474cfc(ulong *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar1 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef83c90);
  uVar2 = uStack_38;
  func_0x000107c4980c();
  func_0x000107c61170(uVar1);
  uVar3 = (ulong)((uint)uVar2 & ((int)(uint)uVar2 >> 0x1f ^ 0xffffffffU));
  uVar2 = 0;
  FUN_101476404(0);
  func_0x000107c613fc();
  func_0x000101474f9c(uVar3,uVar2);
  func_0x000107c615e8(uStack_38);
  *param_1 = uVar3;
  return;
}



/* Entry: 101474db0; end: 101474dc7;  */

void FUN_101474db0(ulong *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar1 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef83c90);
  uVar2 = uStack_38;
  func_0x000107c4980c();
  func_0x000107c61170(uVar1);
  uVar3 = (ulong)((uint)uVar2 & ((int)(uint)uVar2 >> 0x1f ^ 0xffffffffU));
  uVar2 = 0;
  FUN_101476404(0);
  func_0x000107c613fc();
  func_0x000101474f9c(uVar3,uVar2);
  func_0x000107c615e8(uStack_38);
  *param_1 = uVar3;
  return;
}



/* Entry: 101474dc8; end: 101474e1b;  */

void FUN_101474dc8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  uVar1 = 0;
  func_0x000100092aa8(0);
  func_0x000107c610f8();
  func_0x0001048756b8(uStack_28,uVar1);
  *param_1 = uStack_28;
  return;
}



/* Entry: 101474e1c; end: 101474e33;  */

void FUN_101474e1c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  uVar1 = 0;
  func_0x000100092aa8(0);
  func_0x000107c610f8();
  func_0x0001048756b8(uStack_28,uVar1);
  *param_1 = uStack_28;
  return;
}



/* Entry: 101474e34; end: 101474e73;  */

void FUN_101474e34(void)

{
  long unaff_x20;
  
  func_0x00010007d980(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined1 *)(unaff_x20 + 0x20));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101474e74; end: 1014750b3;  */

long FUN_101474e74(undefined8 param_1)

{
  undefined **ppuVar1;
  long lVar2;
  undefined *puVar3;
  long extraout_x8;
  long unaff_x20;
  undefined1 auStack_40 [8];
  undefined *puStack_38;
  
  lVar2 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  func_0x000107c613fc();
  puStack_38 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001000285a8(0x112da1398,&UNK_10d9446b0);
  func_0x000107c613fc();
  ppuVar1 = &puStack_38;
  func_0x00010006c248();
  *(undefined ***)(unaff_x20 + 0x10) = ppuVar1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  lVar2 = 0;
  func_0x000107c5fd0c();
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(auStack_40 + -extraout_x8,1,1,lVar2);
  puVar3 = &UNK_1103c2d48;
  func_0x000107c613fc(&UNK_1103c2d48,0x28,7);
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined8 *)(puVar3 + 0x18) = 0;
  *(long *)(puVar3 + 0x20) = unaff_x20;
  func_0x000107c6157c(unaff_x20);
  func_0x0001000abba4(0,0,auStack_40 + -extraout_x8,&UNK_10d9446c8,puVar3);
  func_0x000107c61574();
  return unaff_x20;
}



/* Entry: 1014750b4; end: 1014753bf;  */

undefined *
FUN_1014750b4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 param_5,undefined8 param_6)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long unaff_x20;
  undefined8 uVar12;
  undefined8 *puStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  
  puVar9 = param_2;
  puVar11 = param_3;
  func_0x000107c61174();
  func_0x00010007c020();
  puVar2 = param_1;
  func_0x0001000298f0();
  func_0x000107c61428();
  uVar3 = *puVar2;
  puStack_b0 = (undefined *)0x0;
  uStack_a8 = 0xe000000000000000;
  func_0x000107c61174(uVar3);
  func_0x000107c602fc(0x10);
  func_0x000107c6142c(uStack_a8);
  puStack_b0 = (undefined *)0x3a54414d;
  uStack_a8 = 0xe400000000000000;
  puVar2 = puVar9;
  func_0x00010007c170(param_1,puVar9,puVar11);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar2);
  func_0x000107c5fb78(0x6157657565757123,0xea00000000007469);
  uVar12 = uStack_a8;
  puVar4 = puStack_b0;
  func_0x000100029b28(puStack_b0,uStack_a8);
  func_0x000107c61170(uVar3);
  func_0x000107c6142c(uVar12);
  func_0x000107c61174();
  func_0x00010488b970();
  puVar2 = param_2;
  puVar10 = param_4;
  puStack_b8 = param_3;
  if (param_4 == (undefined8 *)0x0) {
    puVar2 = param_1;
    puVar10 = puVar9;
    func_0x00010007c170(param_1,puVar9,puVar11);
    puStack_b8 = puVar2;
  }
  func_0x000101476260();
  func_0x000107c613fc();
  puStack_b0 = (undefined *)((ulong)puStack_b0 & 0xffffffffffffff00);
  func_0x0001000285a8(0x112d382e0,&UNK_10d91a6b0);
  func_0x000107c613fc();
  func_0x000107c61434(param_4);
  ppuVar5 = &puStack_b0;
  func_0x00010006c248();
  puVar2[2] = param_1;
  puVar2[3] = puVar9;
  *(char *)(puVar2 + 4) = (char)puVar11;
  *(char *)((long)puVar2 + 0x21) = (char)param_2;
  puVar2[5] = puStack_b8;
  puVar2[6] = puVar10;
  puVar2[7] = param_5;
  puVar2[8] = param_6;
  puVar2[9] = ppuVar5;
  puVar2[10] = puVar4;
  uVar12 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(uVar12);
  func_0x000100075034(FUN_101476280,puVar2,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(uVar12);
  puVar4 = &UNK_1103c2d98;
  func_0x000107c613fc(&UNK_1103c2d98,0x18,7);
  func_0x000107c61644(puVar4 + 0x10,puVar2);
  puVar6 = &UNK_1103c2dc0;
  func_0x000107c613fc(&UNK_1103c2dc0,0x18,7);
  func_0x000107c61644(puVar6 + 0x10,unaff_x20);
  puVar7 = &UNK_1103c2de8;
  func_0x000107c613fc(&UNK_1103c2de8,0x20,7);
  *(undefined **)(puVar7 + 0x10) = puVar6;
  *(undefined **)(puVar7 + 0x18) = puVar4;
  puVar8 = PTR_PTR_1126afd78;
  func_0x000107c610f8();
  pcStack_90 = FUN_10147630c;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0x42000000;
  puStack_a0 = &UNK_1000f6b44;
  puStack_98 = &UNK_1103c2e00;
  ppuVar5 = &puStack_b0;
  puStack_88 = puVar7;
  func_0x000107c60bc4(ppuVar5);
  puVar7 = puStack_88;
  func_0x000107c6157c(puVar6);
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar7);
  func_0x000107c45b74();
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61574(puVar4);
  func_0x000107c61574(puVar6);
  if (puVar8 != (undefined *)0x0) {
    func_0x000107c61574(puVar2);
    return puVar8;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1014753c0);
  (*pcVar1)();
}



/* Entry: 1014753c0; end: 1014754b3; -[_TtC32MainActorThrottlerImplementation32MainActorThrottlerImplementation schedule:priority:asyncSpanNameSuffix:operation:] */

void FUN_1014753c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x000107c60bc4();
  if (param_5 == 0) {
    param_5 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_5);
  }
  puVar1 = &UNK_1103c2e38;
  func_0x000107c613fc(&UNK_1103c2e38,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_6;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c6157c(param_1);
  uVar2 = param_3;
  FUN_1014750b4(param_3,param_4,param_5,param_2,FUN_101476424,puVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61574(param_1);
  func_0x000107c61574(puVar1);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1014754b4; end: 1014754bf;  */

void FUN_1014754b4(undefined1 *param_1)

{
  *param_1 = 1;
  return;
}



/* Entry: 1014754c0; end: 10147569f;  */

void FUN_1014754c0(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  byte bVar2;
  char cVar3;
  byte bVar4;
  code *pcVar5;
  bool bVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  uVar10 = *param_2;
  if (uVar10 >> 0x3e == 0) {
    uVar11 = *(ulong *)((uVar10 & 0xffffffffffffff8) + 0x10);
    if (uVar11 == 0) {
      uVar8 = 0;
      goto LAB_101475620;
    }
  }
  else {
    uVar11 = uVar10 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar10) {
      uVar11 = uVar10;
    }
    uVar8 = uVar11;
    func_0x000107c60480();
    if (uVar8 == 0) {
      uVar8 = 0;
      goto LAB_101475620;
    }
    func_0x000107c60480();
    if ((long)uVar11 < 1) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x101475680);
      (*pcVar5)();
    }
  }
  uVar8 = 0;
  if (uVar11 != 1) {
    uVar7 = 1;
LAB_10147551c:
    uVar1 = uVar7;
    if ((long)uVar7 <= (long)uVar11) {
      uVar1 = uVar11;
    }
    do {
      if (uVar1 == uVar7) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x101475648);
        (*pcVar5)();
      }
      if ((uVar10 & 0xc000000000000001) == 0) {
        uVar9 = *(ulong *)((uVar10 & 0xffffffffffffff8) + 0x10);
        if ((long)uVar9 <= (long)uVar8) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10147564c);
          (*pcVar5)();
        }
        bVar2 = *(byte *)(*(long *)(uVar10 + 0x20 + uVar8 * 8) + 0x21);
        if (bVar2 == 3) break;
        if (uVar9 <= uVar7) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x101475650);
          (*pcVar5)();
        }
        if (bVar2 < *(byte *)(*(long *)(uVar10 + 0x20 + uVar7 * 8) + 0x21)) goto LAB_1014755f8;
      }
      else {
        uVar9 = uVar8;
        func_0x000101476a18(uVar8,uVar10);
        cVar3 = *(char *)(uVar9 + 0x21);
        func_0x000107c61574();
        if (cVar3 == '\x03') break;
        uVar9 = uVar7;
        func_0x000101476a18(uVar7,uVar10);
        bVar2 = *(byte *)(uVar9 + 0x21);
        func_0x000107c615e8();
        uVar9 = uVar8;
        func_0x000101476a18(uVar8,uVar10);
        bVar4 = *(byte *)(uVar9 + 0x21);
        func_0x000107c615e8();
        if (bVar4 < bVar2) goto LAB_1014755f8;
      }
      uVar7 = uVar7 + 1;
      if (uVar11 == uVar7) break;
    } while( true );
  }
LAB_101475614:
  FUN_1014756a0();
LAB_101475620:
  *param_1 = uVar8;
  return;
LAB_1014755f8:
  bVar6 = uVar11 - 1 == uVar7;
  uVar8 = uVar7;
  uVar7 = uVar7 + 1;
  if (bVar6) goto LAB_101475614;
  goto LAB_10147551c;
}



/* Entry: 1014756a0; end: 10147572b;  */

undefined8 FUN_1014756a0(ulong param_1)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong *unaff_x20;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  
  uVar4 = *unaff_x20;
  uVar6 = uVar4;
  func_0x000107c61550();
  if ((((int)uVar6 == 0) || ((long)uVar4 < 0)) || ((uVar4 >> 0x3e & 1) != 0)) {
    FUN_1014769c8();
  }
  uVar6 = uVar4 & 0xffffffffffffff8;
  if (param_1 < *(ulong *)(uVar6 + 0x10)) {
    lVar7 = *(ulong *)(uVar6 + 0x10) - 1;
    lVar1 = uVar6 + param_1 * 8;
    puVar3 = (undefined8 *)(lVar1 + 0x20);
    uVar5 = *puVar3;
    func_0x000107c610b8(puVar3,lVar1 + 0x28,(lVar7 - param_1) * 8);
    *(long *)(uVar6 + 0x10) = lVar7;
    *unaff_x20 = uVar4;
    return uVar5;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10147572c);
  (*pcVar2)();
}



/* Entry: 10147572c; end: 1014757a3;  */

void FUN_10147572c(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x69) = param_6;
  *(undefined8 *)(unaff_x22 + 0x50) = param_4;
  *(undefined8 *)(unaff_x22 + 0x58) = param_5;
  *(undefined1 *)(unaff_x22 + 0x68) = param_3;
  *(undefined8 *)(unaff_x22 + 0x40) = param_1;
  *(undefined8 *)(unaff_x22 + 0x48) = param_2;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x60) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1014757a4,uVar1,uVar2);
  return;
}



/* Entry: 1014757a4; end: 1014758d3;  */

void FUN_1014757a4(void)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  long unaff_x22;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar3 = *(undefined1 *)(unaff_x22 + 0x69);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x48);
  pcVar2 = *(code **)(unaff_x22 + 0x50);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar4 = *(undefined1 *)(unaff_x22 + 0x68);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x60));
  puVar5 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
  func_0x000107c61168(PTR__OBJC_CLASS___NSTimer_1126af1b0);
  puVar6 = &UNK_1103c2eb0;
  func_0x000107c613fc(&UNK_1103c2eb0,0x21,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar8;
  *(undefined8 *)(puVar6 + 0x18) = uVar1;
  puVar6[0x20] = uVar4;
  *(code **)(unaff_x22 + 0x30) = FUN_101476900;
  *(undefined **)(unaff_x22 + 0x38) = puVar6;
  puVar7 = (undefined8 *)(unaff_x22 + 0x10);
  *puVar7 = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
  *(code **)(unaff_x22 + 0x20) = FUN_100fef460;
  *(undefined **)(unaff_x22 + 0x28) = &UNK_1103c2ec8;
  func_0x000107c60bc4();
  uVar9 = *(undefined8 *)(unaff_x22 + 0x38);
  func_0x0001000ab9d4(uVar8,uVar1,uVar4);
  func_0x000107c61574(uVar9);
  func_0x000107c51924(0x3fb999999999999a,puVar5);
  func_0x000107c61180();
  func_0x000107c60bd0(puVar7);
  (*pcVar2)(uVar3);
  func_0x000107c498f8(puVar5);
  func_0x000107c61170(puVar5);
                    /* WARNING: Could not recover jumptable at 0x0001014758d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1014758d4; end: 10147590f;  */

void FUN_1014758d4(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010147590c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101475910; end: 101475927;  */

void FUN_101475910(void)

{
  undefined8 in_x3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x30) = in_x3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101475928,0,0);
  return;
}



/* Entry: 101475928; end: 101475bb7;  */

void FUN_101475928(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 auVar7 [16];
  code *pcVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  long unaff_x22;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  
  uVar15 = *(ulong *)(*(long *)(unaff_x22 + 0x30) + 0x18);
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar15;
  *(ulong *)(unaff_x22 + 0x38) = uVar15 * 1000000;
  if (SUB168(auVar7 * ZEXT816(1000000),8) != 0) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x101475bb8);
    (*pcVar8)();
  }
  puVar16 = *(undefined8 **)(*(long *)(unaff_x22 + 0x30) + 0x10);
  func_0x000107c6157c(puVar16);
  uVar9 = 0x112da1528;
  func_0x0001000285a8(0x112da1528,&UNK_10d944760);
  func_0x000100075034(unaff_x22 + 0x28,FUN_1014754c0,0,uVar9);
  func_0x000107c61574();
  lVar18 = *(long *)(unaff_x22 + 0x28);
  *(long *)(unaff_x22 + 0x40) = lVar18;
  if (lVar18 != 0) {
    func_0x0001000298f0();
    func_0x000107c61428();
    uVar9 = *puVar16;
    uVar17 = *(undefined8 *)(lVar18 + 0x50);
    func_0x000107c61174(uVar9);
    func_0x000100069b5c(uVar17);
    func_0x000107c61170(uVar9);
    uVar9 = *(undefined8 *)(lVar18 + 0x10);
    lVar2 = *(long *)(lVar18 + 0x18);
    uVar4 = *(undefined1 *)(lVar18 + 0x20);
    uVar5 = *(undefined1 *)(lVar18 + 0x21);
    lVar10 = *(long *)(lVar18 + 0x30);
    if (lVar10 == 0) {
      uVar17 = uVar9;
      lVar14 = lVar2;
      func_0x00010007c170(uVar9,lVar2,uVar4);
      lVar10 = 0;
    }
    else {
      uVar17 = *(undefined8 *)(lVar18 + 0x28);
      lVar14 = lVar10;
    }
    uVar1 = *(undefined8 *)(lVar18 + 0x40);
    uVar3 = *(undefined8 *)(lVar18 + 0x48);
    uVar20 = *(undefined8 *)(lVar18 + 0x40);
    uVar19 = *(undefined8 *)(lVar18 + 0x38);
    func_0x000107c61434(lVar10);
    func_0x000107c6157c(uVar3);
    func_0x0001000c74f0(unaff_x22 + 0x68);
    func_0x000107c61574(uVar3);
    uVar6 = *(undefined1 *)(unaff_x22 + 0x68);
    puVar11 = &UNK_1103c2e60;
    func_0x000107c613fc(&UNK_1103c2e60,0x39,7);
    *(undefined8 *)(puVar11 + 0x10) = uVar9;
    *(long *)(puVar11 + 0x18) = lVar2;
    puVar11[0x20] = uVar4;
    *(undefined8 *)(puVar11 + 0x30) = uVar20;
    *(undefined8 *)(puVar11 + 0x28) = uVar19;
    puVar11[0x38] = uVar6;
    puVar12 = &UNK_1103c2e88;
    func_0x000107c613fc(&UNK_1103c2e88,0x20,7);
    *(undefined **)(puVar12 + 0x10) = &UNK_10d944770;
    *(undefined **)(puVar12 + 0x18) = puVar11;
    func_0x0001000ab9d4(uVar9,lVar2,uVar4);
    func_0x000107c6157c(uVar1);
    func_0x0001001ca524(uVar9,lVar2,uVar4,uVar5,uVar17,lVar14,&UNK_10d944780,puVar12,
                        PTR___sytN_11034f1b0 + 8);
    *(undefined8 *)(unaff_x22 + 0x48) = uVar9;
    func_0x000107c61574(puVar12);
    func_0x000107c6142c(lVar14);
    plVar13 = (long *)(ulong)*(uint *)(PTR___sScTss5NeverORs_rlE5valuexvgTu_11034fde0 + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x50) = plVar13;
    *plVar13 = unaff_x22;
    plVar13[1] = (long)FUN_101475bb8;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sScTss5NeverORs_rlE5valuexvg_11034fdd8)();
    return;
  }
  plVar13 = (long *)(ulong)*(uint *)(
                                    PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZTu_11034fe08
                                    + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x58) = plVar13;
  *plVar13 = unaff_x22;
  plVar13[1] = 0x101475c60;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZ_11034fe00)
            (*(undefined8 *)(unaff_x22 + 0x38));
  return;
}



/* Entry: 101475bb8; end: 101475cc3;  */

void FUN_101475bb8(void)

{
  undefined8 uVar1;
  long *unaff_x22;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0x48);
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x50));
  func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x101475c08,0,0);
  return;
}



/* Entry: 101475cc4; end: 101475f2f;  */

void FUN_101475cc4(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  long *plVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  long unaff_x22;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  puVar13 = *(undefined8 **)(*(long *)(unaff_x22 + 0x30) + 0x10);
  func_0x000107c6157c(puVar13);
  uVar7 = 0x112da1528;
  func_0x0001000285a8(0x112da1528,&UNK_10d944760);
  func_0x000100075034(unaff_x22 + 0x28,FUN_1014754c0,0,uVar7);
  func_0x000107c61574();
  lVar15 = *(long *)(unaff_x22 + 0x28);
  *(long *)(unaff_x22 + 0x40) = lVar15;
  if (lVar15 != 0) {
    func_0x0001000298f0();
    func_0x000107c61428();
    uVar7 = *puVar13;
    uVar14 = *(undefined8 *)(lVar15 + 0x50);
    func_0x000107c61174(uVar7);
    func_0x000100069b5c(uVar14);
    func_0x000107c61170(uVar7);
    uVar7 = *(undefined8 *)(lVar15 + 0x10);
    lVar2 = *(long *)(lVar15 + 0x18);
    uVar4 = *(undefined1 *)(lVar15 + 0x20);
    uVar5 = *(undefined1 *)(lVar15 + 0x21);
    lVar8 = *(long *)(lVar15 + 0x30);
    if (lVar8 == 0) {
      uVar14 = uVar7;
      lVar12 = lVar2;
      func_0x00010007c170(uVar7,lVar2,uVar4);
      lVar8 = 0;
    }
    else {
      uVar14 = *(undefined8 *)(lVar15 + 0x28);
      lVar12 = lVar8;
    }
    uVar1 = *(undefined8 *)(lVar15 + 0x40);
    uVar3 = *(undefined8 *)(lVar15 + 0x48);
    uVar17 = *(undefined8 *)(lVar15 + 0x40);
    uVar16 = *(undefined8 *)(lVar15 + 0x38);
    func_0x000107c61434(lVar8);
    func_0x000107c6157c(uVar3);
    func_0x0001000c74f0(unaff_x22 + 0x68);
    func_0x000107c61574(uVar3);
    uVar6 = *(undefined1 *)(unaff_x22 + 0x68);
    puVar9 = &UNK_1103c2e60;
    func_0x000107c613fc(&UNK_1103c2e60,0x39,7);
    *(undefined8 *)(puVar9 + 0x10) = uVar7;
    *(long *)(puVar9 + 0x18) = lVar2;
    puVar9[0x20] = uVar4;
    *(undefined8 *)(puVar9 + 0x30) = uVar17;
    *(undefined8 *)(puVar9 + 0x28) = uVar16;
    puVar9[0x38] = uVar6;
    puVar10 = &UNK_1103c2e88;
    func_0x000107c613fc(&UNK_1103c2e88,0x20,7);
    *(undefined **)(puVar10 + 0x10) = &UNK_10d944770;
    *(undefined **)(puVar10 + 0x18) = puVar9;
    func_0x0001000ab9d4(uVar7,lVar2,uVar4);
    func_0x000107c6157c(uVar1);
    func_0x0001001ca524(uVar7,lVar2,uVar4,uVar5,uVar14,lVar12,&UNK_10d944780,puVar10,
                        PTR___sytN_11034f1b0 + 8);
    *(undefined8 *)(unaff_x22 + 0x48) = uVar7;
    func_0x000107c61574(puVar10);
    func_0x000107c6142c(lVar12);
    plVar11 = (long *)(ulong)*(uint *)(PTR___sScTss5NeverORs_rlE5valuexvgTu_11034fde0 + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x50) = plVar11;
    *plVar11 = unaff_x22;
    plVar11[1] = (long)FUN_101475bb8;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sScTss5NeverORs_rlE5valuexvg_11034fdd8)();
    return;
  }
  plVar11 = (long *)(ulong)*(uint *)(
                                    PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZTu_11034fe08
                                    + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x58) = plVar11;
  *plVar11 = unaff_x22;
  plVar11[1] = 0x101475c60;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZ_11034fe00)
            (*(undefined8 *)(unaff_x22 + 0x38));
  return;
}



/* Entry: 101475f30; end: 10147619b;  */

void FUN_101475f30(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  long *plVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  long unaff_x22;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  puVar13 = *(undefined8 **)(*(long *)(unaff_x22 + 0x30) + 0x10);
  func_0x000107c6157c(puVar13);
  uVar7 = 0x112da1528;
  func_0x0001000285a8(0x112da1528,&UNK_10d944760);
  func_0x000100075034(unaff_x22 + 0x28,FUN_1014754c0,0,uVar7);
  func_0x000107c61574();
  lVar15 = *(long *)(unaff_x22 + 0x28);
  *(long *)(unaff_x22 + 0x40) = lVar15;
  if (lVar15 != 0) {
    func_0x0001000298f0();
    func_0x000107c61428();
    uVar7 = *puVar13;
    uVar14 = *(undefined8 *)(lVar15 + 0x50);
    func_0x000107c61174(uVar7);
    func_0x000100069b5c(uVar14);
    func_0x000107c61170(uVar7);
    uVar7 = *(undefined8 *)(lVar15 + 0x10);
    lVar2 = *(long *)(lVar15 + 0x18);
    uVar4 = *(undefined1 *)(lVar15 + 0x20);
    uVar5 = *(undefined1 *)(lVar15 + 0x21);
    lVar8 = *(long *)(lVar15 + 0x30);
    if (lVar8 == 0) {
      uVar14 = uVar7;
      lVar12 = lVar2;
      func_0x00010007c170(uVar7,lVar2,uVar4);
      lVar8 = 0;
    }
    else {
      uVar14 = *(undefined8 *)(lVar15 + 0x28);
      lVar12 = lVar8;
    }
    uVar1 = *(undefined8 *)(lVar15 + 0x40);
    uVar3 = *(undefined8 *)(lVar15 + 0x48);
    uVar17 = *(undefined8 *)(lVar15 + 0x40);
    uVar16 = *(undefined8 *)(lVar15 + 0x38);
    func_0x000107c61434(lVar8);
    func_0x000107c6157c(uVar3);
    func_0x0001000c74f0(unaff_x22 + 0x68);
    func_0x000107c61574(uVar3);
    uVar6 = *(undefined1 *)(unaff_x22 + 0x68);
    puVar9 = &UNK_1103c2e60;
    func_0x000107c613fc(&UNK_1103c2e60,0x39,7);
    *(undefined8 *)(puVar9 + 0x10) = uVar7;
    *(long *)(puVar9 + 0x18) = lVar2;
    puVar9[0x20] = uVar4;
    *(undefined8 *)(puVar9 + 0x30) = uVar17;
    *(undefined8 *)(puVar9 + 0x28) = uVar16;
    puVar9[0x38] = uVar6;
    puVar10 = &UNK_1103c2e88;
    func_0x000107c613fc(&UNK_1103c2e88,0x20,7);
    *(undefined **)(puVar10 + 0x10) = &UNK_10d944770;
    *(undefined **)(puVar10 + 0x18) = puVar9;
    func_0x0001000ab9d4(uVar7,lVar2,uVar4);
    func_0x000107c6157c(uVar1);
    func_0x0001001ca524(uVar7,lVar2,uVar4,uVar5,uVar14,lVar12,&UNK_10d944780,puVar10,
                        PTR___sytN_11034f1b0 + 8);
    *(undefined8 *)(unaff_x22 + 0x48) = uVar7;
    func_0x000107c61574(puVar10);
    func_0x000107c6142c(lVar12);
    plVar11 = (long *)(ulong)*(uint *)(PTR___sScTss5NeverORs_rlE5valuexvgTu_11034fde0 + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x50) = plVar11;
    *plVar11 = unaff_x22;
    plVar11[1] = (long)FUN_101475bb8;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sScTss5NeverORs_rlE5valuexvg_11034fdd8)();
    return;
  }
  plVar11 = (long *)(ulong)*(uint *)(
                                    PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZTu_11034fe08
                                    + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x58) = plVar11;
  *plVar11 = unaff_x22;
  plVar11[1] = 0x101475c60;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZ_11034fe00)
            (*(undefined8 *)(unaff_x22 + 0x38));
  return;
}



/* Entry: 10147619c; end: 10147627f;  */

void FUN_10147619c(void)

{
  long *plVar1;
  long unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x20);
  plVar1 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x101476bb4;
  plVar1[6] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101475928,0,0);
  return;
}



/* Entry: 101476280; end: 10147630b;  */

void FUN_101476280(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 unaff_x20;
  
  FUN_1014764d0();
  uVar2 = *param_1;
  uVar3 = uVar2 & 0xffffffffffffff8;
  uVar1 = *(ulong *)(uVar3 + 0x10);
  if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar1) {
    uVar2 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
    FUN_101476540(uVar2,uVar1 + 1,1);
    uVar3 = uVar2 & 0xffffffffffffff8;
  }
  *(ulong *)(uVar3 + 0x10) = uVar1 + 1;
  *(undefined8 *)(uVar3 + uVar1 * 8 + 0x20) = unaff_x20;
  *param_1 = uVar2;
  func_0x000107c6157c();
  return;
}



/* Entry: 10147630c; end: 1014763c3;  */

void FUN_10147630c(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar1 + 0x10,auStack_48,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    func_0x000107c61574();
    func_0x000107c61428(lVar2 + 0x10,auStack_60,0,0);
    lVar2 = lVar2 + 0x10;
    func_0x000107c61648();
    if (lVar2 != 0) {
      uVar3 = *(undefined8 *)(lVar2 + 0x48);
      func_0x000107c6157c();
      func_0x000107c6157c(uVar3);
      func_0x000100075034(FUN_1014754b4,0,PTR___sytN_11034f1b0 + 8);
      func_0x000107c61578(lVar2,2);
      func_0x000107c61574(uVar3);
    }
  }
  return;
}



/* Entry: 1014763c4; end: 1014763e7;  */

void FUN_1014763c4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1014763e8; end: 101476403;  */

void FUN_1014763e8(long param_1,long param_2)

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



/* Entry: 101476404; end: 101476423;  */

void FUN_101476404(void)

{
  func_0x000107c61168(&PTR_PTR_112da13e0);
  return;
}



/* Entry: 101476424; end: 101476437;  */

void FUN_101476424(uint param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000101476434. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1 & 1);
  return;
}



/* Entry: 101476438; end: 1014764cf;  */

void FUN_101476438(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101476474. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1014764d0; end: 10147653f;  */

void FUN_1014764d0(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  
  uVar3 = *unaff_x20;
  uVar1 = uVar3;
  func_0x000107c61550();
  *unaff_x20 = uVar3;
  if ((((int)uVar1 == 0) || ((long)uVar3 < 0)) || ((uVar3 >> 0x3e & 1) != 0)) {
    if (uVar3 >> 0x3e == 0) {
      uVar1 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar1 = uVar3 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar3) {
        uVar1 = uVar3;
      }
      func_0x000107c60480(uVar1);
    }
    uVar2 = 0;
    FUN_101476540(0,uVar1 + 1,1,uVar3);
    *unaff_x20 = uVar2;
  }
  return;
}



/* Entry: 101476540; end: 101476667;  */

ulong FUN_101476540(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101476668);
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
  FUN_101476668(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101476664);
      (*pcVar1)();
    }
    FUN_1014766e8(0,uVar2,uVar3 + 0x20,param_4);
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



/* Entry: 101476668; end: 1014766e7;  */

undefined * FUN_101476668(undefined *param_1,undefined *param_2)

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
    func_0x000101476478();
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



/* Entry: 1014766e8; end: 1014767d7;  */

long FUN_1014766e8(long param_1,long param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = param_1;
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1014767d4);
      (*pcVar2)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1014767d8);
        (*pcVar2)();
      }
      lVar3 = param_1;
      func_0x000101476260();
      lVar4 = param_1;
      do {
        lVar5 = lVar4 + 1;
        func_0x000107c60318(lVar4,param_4,lVar3);
        lVar4 = lVar5;
      } while (param_2 != lVar5);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      func_0x000101476260();
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,lVar5);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1014767d0);
    (*pcVar2)();
  }
  uVar1 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar1 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar1);
  return param_1;
}



/* Entry: 1014767d8; end: 101476853;  */

void FUN_1014767d8(void)

{
  long lVar1;
  long lVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long unaff_x20;
  long unaff_x22;
  
  lVar6 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar5 = *(long *)(unaff_x20 + 0x28);
  lVar2 = *(long *)(unaff_x20 + 0x30);
  uVar3 = *(undefined1 *)(unaff_x20 + 0x38);
  plVar7 = (long *)0x70;
  uVar4 = *(undefined1 *)(unaff_x20 + 0x20);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_101476854;
  *(undefined1 *)((long)plVar7 + 0x69) = uVar3;
  plVar7[10] = lVar5;
  plVar7[0xb] = lVar2;
  *(undefined1 *)(plVar7 + 0xd) = uVar4;
  plVar7[8] = lVar6;
  plVar7[9] = lVar1;
  lVar5 = 0;
  func_0x000107c5fcec();
  lVar6 = lVar5;
  func_0x000107c5fce8();
  plVar7[0xc] = lVar6;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar5,lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1014757a4,lVar5,lVar6);
  return;
}



/* Entry: 101476854; end: 10147688f;  */

void FUN_101476854(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010147688c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101476890; end: 1014768ff;  */

void FUN_101476890(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x101476bbc;
  FUN_100f7cc44(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 101476900; end: 1014769c7;  */

void FUN_101476900(undefined8 param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined1 *)(unaff_x20 + 0x20);
  func_0x000107c602fc(0x3b);
  func_0x00010007c170(uVar2,uVar3,uVar1);
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0xd000000000000039,0x800000010ef83cb0);
  uVar2 = 0;
  func_0x000107c5fadc(0,0xe000000000000000);
  func_0x000107c6142c(0xe000000000000000);
  func_0x000107c318e8(uVar2);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c069d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_invalidate_1125f8150);
  return;
}



/* Entry: 1014769c8; end: 101476bab;  */

/* WARNING: Removing unreachable block (ram,0x000101476574) */
/* WARNING: Removing unreachable block (ram,0x000101476598) */
/* WARNING: Removing unreachable block (ram,0x00010147657c) */
/* WARNING: Removing unreachable block (ram,0x000101476664) */
/* WARNING: Removing unreachable block (ram,0x000101476588) */
/* WARNING: Removing unreachable block (ram,0x000101476590) */
/* WARNING: Removing unreachable block (ram,0x0001014765d4) */
/* WARNING: Removing unreachable block (ram,0x0001014765e8) */
/* WARNING: Removing unreachable block (ram,0x0001014765f4) */
/* WARNING: Removing unreachable block (ram,0x0001014765fc) */

ulong FUN_1014769c8(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_1 >> 0x3e == 0) {
    uVar3 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar3 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar3 = param_1;
    }
    func_0x000107c60480();
  }
  if (param_1 >> 0x3e != 0) {
    func_0x000107c60480();
  }
  if (param_1 >> 0x3e == 0) {
    uVar4 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = param_1 & 0xffffffffffffff8;
    if ((param_1 & 0x8000000000000000) != 0) {
      uVar4 = param_1;
    }
    func_0x000107c60480(uVar4,uVar3);
  }
  uVar2 = uVar4;
  FUN_101476668(uVar4,uVar3);
  if (-1 < (long)uVar4) {
    FUN_1014766e8(0,uVar4,uVar2 + 0x20,param_1);
    return uVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101476664);
  (*pcVar1)();
}



/* Entry: 101476bac; end: 101476bbf;  */

void FUN_101476bac(long param_1,long param_2)

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



/* Entry: 101476bc0; end: 101476c0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101476bc0(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112da1538) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101476c0c; end: 101476c3f;  */

void FUN_101476c0c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101476c40; end: 101476c4f;  */

undefined1  [16] FUN_101476c40(void)

{
  return ZEXT816(0x1103c2f80);
}



/* Entry: 101476c50; end: 101476c6f; -[_TtC36StartupCompleteTrackerImplementation36StartupCompleteTrackerImplementation .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101476c50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112da1538));
  return;
}



/* Entry: 101476c70; end: 101476e4b;  */

void FUN_101476c70(long param_1)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined1 auStack_a8 [72];
  
  lVar11 = *unaff_x20;
  lVar12 = *(long *)(lVar11 + 0x18);
  if (*(long *)(lVar11 + 0x18) <= param_1) {
    lVar12 = param_1;
  }
  uVar4 = 0x112da15a8;
  func_0x0001000285a8(0x112da15a8,&UNK_10d9448b0);
  lVar5 = lVar11;
  func_0x000107c602e0(lVar11,lVar12,0,uVar4);
  if (*(long *)(lVar11 + 0x10) != 0) {
    lVar12 = 0;
    uVar8 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
    uVar13 = 0xffffffffffffffff;
    if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
      uVar13 = ~(-1L << (uVar8 & 0x3f));
    }
    uVar13 = uVar13 & *(ulong *)(lVar11 + 0x38);
    lVar1 = lVar5 + 0x38;
    while( true ) {
      for (; uVar13 != 0; uVar13 = uVar13 - 1 & uVar13) {
        func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar5 + 0x28));
        uVar6 = 0;
        func_0x000107c60690();
        func_0x000107c606a8();
        uVar9 = -1L << ((ulong)*(byte *)(lVar5 + 0x20) & 0x3f);
        uVar6 = uVar6 & (uVar9 ^ 0xffffffffffffffff);
        uVar7 = uVar6 >> 6;
        uVar10 = -1L << (uVar6 & 0x3f) & (*(ulong *)(lVar1 + uVar7 * 8) ^ 0xffffffffffffffff);
        if (uVar10 == 0) {
          bVar3 = false;
          uVar10 = 0x3f - uVar9 >> 6;
          do {
            uVar6 = uVar7 + 1;
            if ((uVar6 == uVar10) && (bVar3)) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x101476e4c);
              (*pcVar2)();
            }
            uVar7 = 0;
            if (uVar6 != uVar10) {
              uVar7 = uVar6;
            }
            bVar3 = (bool)(uVar6 == uVar10 | bVar3);
            uVar6 = *(ulong *)(lVar1 + uVar7 * 8);
          } while (uVar6 == 0xffffffffffffffff);
          uVar6 = ~uVar6;
          uVar10 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
          uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
          uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
          uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
          uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | uVar7 << 6;
        }
        else {
          uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
          uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
          uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
          uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
          uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | uVar6 & 0x7fffffffffffffc0;
        }
        uVar7 = uVar10 >> 3 & 0x1ffffffffffffff8;
        *(ulong *)(lVar1 + uVar7) = 1L << (uVar10 & 0x3f) | *(ulong *)(lVar1 + uVar7);
        *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + 1;
      }
      bVar3 = SCARRY8(lVar12,1);
      lVar12 = lVar12 + 1;
      if (bVar3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101476e48);
        (*pcVar2)();
      }
      if ((long)(uVar8 + 0x3f >> 6) <= lVar12) break;
      uVar13 = ((ulong *)(lVar11 + 0x38))[lVar12];
    }
  }
  func_0x000107c61574(lVar11);
  *unaff_x20 = lVar5;
  return;
}



/* Entry: 101476e4c; end: 101476f57;  */

void FUN_101476e4c(void)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  
  func_0x0001000285a8(0x112da15a8,&UNK_10d9448b0);
  lVar8 = *unaff_x20;
  lVar4 = lVar8;
  func_0x000107c602dc();
  if (*(long *)(lVar8 + 0x10) != 0) {
    lVar1 = lVar8 + 0x38;
    uVar5 = (1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar4 != lVar8 || lVar1 + uVar5 * 8 <= lVar4 + 0x38U) {
      func_0x000107c610b8(lVar4 + 0x38U,lVar1,uVar5 << 3);
    }
    lVar6 = 0;
    *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar8 + 0x10);
    uVar7 = 1L << ((ulong)*(byte *)(lVar8 + 0x20) & 0x3f);
    uVar5 = 0xffffffffffffffff;
    if ((*(byte *)(lVar8 + 0x20) & 0x3f) < 6) {
      uVar5 = ~(-1L << (uVar7 & 0x3f));
    }
    uVar5 = uVar5 & *(ulong *)(lVar8 + 0x38);
    while( true ) {
      for (; uVar5 != 0; uVar5 = uVar5 - 1 & uVar5) {
      }
      bVar3 = SCARRY8(lVar6,1);
      lVar6 = lVar6 + 1;
      if (bVar3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101476f58);
        (*pcVar2)();
      }
      if ((long)(uVar7 + 0x3f >> 6) <= lVar6) break;
      uVar5 = *(ulong *)(lVar1 + lVar6 * 8);
    }
  }
  func_0x000107c61574(lVar8);
  *unaff_x20 = lVar4;
  return;
}



/* Entry: 101476f58; end: 101477173;  */

void FUN_101476f58(long param_1)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  long lVar11;
  ulong *puVar12;
  long lVar13;
  ulong uVar14;
  undefined1 auStack_a8 [72];
  
  lVar11 = *unaff_x20;
  lVar13 = *(long *)(lVar11 + 0x18);
  if (*(long *)(lVar11 + 0x18) <= param_1) {
    lVar13 = param_1;
  }
  uVar4 = 0x112da15a8;
  func_0x0001000285a8(0x112da15a8,&UNK_10d9448b0);
  lVar5 = lVar11;
  func_0x000107c602e0(lVar11,lVar13,1,uVar4);
  if (*(long *)(lVar11 + 0x10) != 0) {
    lVar13 = 0;
    puVar12 = (ulong *)(lVar11 + 0x38);
    uVar8 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
    uVar14 = 0xffffffffffffffff;
    if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
      uVar14 = ~(-1L << (uVar8 & 0x3f));
    }
    uVar14 = uVar14 & *puVar12;
    lVar1 = lVar5 + 0x38;
    while( true ) {
      for (; uVar14 != 0; uVar14 = uVar14 - 1 & uVar14) {
        func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar5 + 0x28));
        uVar6 = 0;
        func_0x000107c60690();
        func_0x000107c606a8();
        uVar9 = -1L << ((ulong)*(byte *)(lVar5 + 0x20) & 0x3f);
        uVar6 = uVar6 & (uVar9 ^ 0xffffffffffffffff);
        uVar7 = uVar6 >> 6;
        uVar10 = -1L << (uVar6 & 0x3f) & (*(ulong *)(lVar1 + uVar7 * 8) ^ 0xffffffffffffffff);
        if (uVar10 == 0) {
          bVar3 = false;
          uVar10 = 0x3f - uVar9 >> 6;
          do {
            uVar6 = uVar7 + 1;
            if ((uVar6 == uVar10) && (bVar3)) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x101477174);
              (*pcVar2)();
            }
            uVar7 = 0;
            if (uVar6 != uVar10) {
              uVar7 = uVar6;
            }
            bVar3 = (bool)(uVar6 == uVar10 | bVar3);
            uVar6 = *(ulong *)(lVar1 + uVar7 * 8);
          } while (uVar6 == 0xffffffffffffffff);
          uVar6 = ~uVar6;
          uVar10 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
          uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
          uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
          uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
          uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | uVar7 << 6;
        }
        else {
          uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
          uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
          uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
          uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
          uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | uVar6 & 0x7fffffffffffffc0;
        }
        uVar7 = uVar10 >> 3 & 0x1ffffffffffffff8;
        *(ulong *)(lVar1 + uVar7) = 1L << (uVar10 & 0x3f) | *(ulong *)(lVar1 + uVar7);
        *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + 1;
      }
      bVar3 = SCARRY8(lVar13,1);
      lVar13 = lVar13 + 1;
      if (bVar3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101477170);
        (*pcVar2)();
      }
      if ((long)(uVar8 + 0x3f >> 6) <= lVar13) break;
      uVar14 = puVar12[lVar13];
    }
    uVar14 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
    if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
      *puVar12 = -1L << (uVar14 & 0x3f);
    }
    else {
      func_0x000107c60ee4(puVar12,uVar14 + 0x3f >> 3 & 0xffffffffffffff8);
    }
    *(undefined8 *)(lVar11 + 0x10) = 0;
  }
  func_0x000107c61574(lVar11);
  *unaff_x20 = lVar5;
  return;
}



/* Entry: 101477174; end: 101477183;  */

undefined1  [16] FUN_101477174(void)

{
  return ZEXT816(0x1103c3090);
}



/* Entry: 101477184; end: 10147720f;  */

void FUN_101477184(long *param_1,long param_2)

{
  undefined *puVar1;
  
  FUN_1014772e0();
  func_0x000107c613fc();
  puVar1 = PTR_PTR_1126b6d28;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  *param_1 = param_2;
  return;
}



/* Entry: 101477210; end: 10147724f; -[_TtC35ConfigRegistryServiceImplementation35ConfigRegistryServiceImplementation configurationRegistry] */

void FUN_101477210(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 101477250; end: 1014772ab; -[_TtC35ConfigRegistryServiceImplementation35ConfigRegistryServiceImplementation setConfigurationRegistry:] */

void FUN_101477250(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,1,0);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 1014772ac; end: 1014772cf;  */

void FUN_1014772ac(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1014772d0; end: 1014772df;  */

undefined1  [16] FUN_1014772d0(void)

{
  return ZEXT816(0x1103c3130);
}



/* Entry: 1014772e0; end: 1014772ff;  */

void FUN_1014772e0(void)

{
  func_0x000107c61168(&PTR_PTR_112da1600);
  return;
}



/* Entry: 101477300; end: 10147730f;  */

undefined1  [16] FUN_101477300(void)

{
  return ZEXT816(0x1103c31d0);
}



/* Entry: 101477310; end: 10147769f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101477310(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lStack_68;
  long lStack_60;
  
  func_0x000100083b20(&lStack_68);
  lVar7 = lStack_68;
  uVar10 = *(undefined8 *)(lStack_68 + _DAT_113092298);
  func_0x000107c615f0(uVar10);
  func_0x000107c61170(lVar7);
  uVar2 = 0xd00000000000002a;
  func_0x000107c5fadc(0xd00000000000002a,0x800000010ef83f90);
  uVar1 = uVar10;
  func_0x000107c3ebd4();
  func_0x000107c61170(uVar2);
  if ((int)uVar1 == 0) {
    func_0x000100083b20(&lStack_68);
    lVar7 = lStack_68;
    lVar8 = -0x7ffffffef107c040;
    uVar2 = 0xd000000000000011;
    func_0x000107c5fadc(0xd000000000000011);
    lVar3 = lVar7;
    func_0x000107c5c1e0();
    func_0x000107c61180();
    func_0x000107c61170(uVar2);
    func_0x000107c615e8(lVar7);
    if (lVar3 != 0) {
      lVar7 = lVar3;
      func_0x000107c5faec(lVar3);
      func_0x000107c61170(lVar3);
      goto LAB_1014774d8;
    }
  }
  else {
    uVar1 = 0xd000000000000010;
    func_0x000107c5fadc(0xd000000000000010,0x800000010ef83fe0);
    uVar2 = uVar10;
    func_0x000107c4980c();
    func_0x000107c61170(uVar1);
    if (0 < (int)uVar2) {
      lStack_68 = CONCAT44(lStack_68._4_4_,(int)uVar2);
      puVar4 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_11034ee30;
      func_0x000107c6057c(PTR___ss5Int32VN_11034ee20,
                          PTR___ss5Int32Vs23CustomStringConvertiblesWP_11034ee30);
      lStack_68 = -0x2fffffffffffffef;
      lStack_60 = -0x7ffffffef107c000;
      func_0x000107c5fb78();
      func_0x000107c6142c(puVar4);
      lVar7 = lStack_68;
      lVar8 = lStack_60;
      goto LAB_1014774d8;
    }
  }
  lVar7 = 0x6e6f636568636163;
  lVar8 = -0x108d9a9393908d8c;
LAB_1014774d8:
  puVar4 = PTR_PTR_1126b7f60;
  func_0x000107c61168();
  lVar3 = lVar8;
  func_0x000107c5fadc(lVar7);
  lStack_68 = 0;
  func_0x000107c44418();
  func_0x000107c61180();
  func_0x000107c61170(lVar7);
  lVar7 = lStack_68;
  if (puVar4 == (undefined *)0x0) {
    lVar5 = lStack_68;
    func_0x000107c61174(lStack_68);
    func_0x000107c5ed30();
    func_0x000107c61170(lVar5);
    func_0x000107c61654();
    func_0x000107c615e8(uVar10);
    func_0x000107c6142c(lVar8);
    func_0x000107c614ac();
    puVar9 = (undefined *)0x0;
    lVar8 = -0x2000000000000000;
    lVar5 = lVar3;
  }
  else {
    puVar9 = puVar4;
    func_0x000107c5faec(puVar4);
    lVar5 = lVar3;
    func_0x000107c61174(lVar7);
    func_0x000107c615e8(uVar10);
    func_0x000107c61170(puVar4);
    func_0x000107c6142c();
    lVar7 = lVar8;
    lVar8 = lVar3;
  }
  func_0x0001000f73a0();
  func_0x000107c61180();
  lVar3 = lVar7;
  if (lVar7 == 0) {
    lVar3 = lVar5;
    func_0x000107c5faec();
    lVar5 = lVar3;
    func_0x000107c5fadc();
    func_0x000107c6142c();
  }
  func_0x000100088750();
  func_0x000107c61180();
  if (lVar3 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(lVar5);
  }
  puVar4 = PTR_PTR_1126b8040;
  func_0x000107c610f8(PTR_PTR_1126b8040);
  func_0x000107c483f0();
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar7);
  puVar6 = PTR_PTR_1126dfb30;
  func_0x000107c61168();
  func_0x000107c5fadc(puVar9,lVar8);
  func_0x000107c6142c(lVar8);
  func_0x000107c40910();
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar9);
  *param_1 = puVar6;
  return;
}



/* Entry: 1014776a0; end: 1014776bf;  */

undefined1  [16] FUN_1014776a0(void)

{
  return ZEXT816(0x1103c3298);
}



/* Entry: 1014776c0; end: 101477733;  */

void FUN_1014776c0(long *param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  
  func_0x0001000ad7c4();
  lVar2 = param_2;
  func_0x0001000ad7c4();
  lVar3 = param_2;
  func_0x000105396bdc(param_2,lVar2);
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  func_0x000107c61170(lVar2);
  if (lVar3 != 0) {
    *param_1 = lVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101477734);
  (*pcVar1)();
}



/* Entry: 101477734; end: 10147774b;  */

void FUN_101477734(long *param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  func_0x0001000ad7c4(lVar2,*(undefined8 *)(unaff_x20 + 0x18));
  lVar3 = lVar2;
  func_0x0001000ad7c4();
  lVar4 = lVar2;
  func_0x000105396bdc(lVar2,lVar3);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar3);
  if (lVar4 != 0) {
    *param_1 = lVar4;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101477734);
  (*pcVar1)();
}



/* Entry: 10147774c; end: 1014778d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10147774c(long *param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  func_0x000100083b20(&lStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x0001000ad7c4();
  uVar2 = param_2;
  func_0x0001000ad7c4();
  uVar3 = uVar2;
  func_0x0001000ad7c4();
  uVar4 = uVar3;
  func_0x0001000ad7c4();
  uVar5 = uVar4;
  func_0x0001000ad7c4();
  uVar6 = uVar5;
  func_0x0001000ad7c4();
  func_0x000100083b20(&lStack_78);
  uVar8 = *(undefined8 *)(lStack_78 + _DAT_113091b70);
  func_0x000107c615f0(uVar8);
  func_0x000107c61170(lStack_78);
  lVar7 = lStack_68;
  func_0x000105396974(lStack_68,uStack_70,param_2,uVar2,uVar3,uVar4,uVar5,uVar6,uVar8);
  func_0x000107c61180();
  func_0x000107c615e8(lStack_68);
  func_0x000107c615e8(uStack_70);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c615e8(uVar8);
  if (lVar7 != 0) {
    *param_1 = lVar7;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1014778d4);
  (*pcVar1)();
}



/* Entry: 1014778d4; end: 101477907;  */

void FUN_1014778d4(void)

{
  long unaff_x20;
  
  FUN_10147774c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 101477908; end: 101477917;  */

undefined1  [16] FUN_101477908(void)

{
  return ZEXT816(0x1103c3448);
}



/* Entry: 101477918; end: 1014779d7;  */

void FUN_101477918(long *param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack_48;
  
  func_0x0001000ad7c4();
  lVar2 = param_2;
  func_0x000100083b20(&uStack_48);
  func_0x0001000ad7c4();
  lVar3 = lVar2;
  func_0x0001000ad7c4();
  lVar4 = param_2;
  func_0x000105396e98(param_2,uStack_48,lVar2,lVar3);
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  func_0x000107c615e8(uStack_48);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar3);
  if (lVar4 != 0) {
    *param_1 = lVar4;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1014779d8);
  (*pcVar1)();
}



/* Entry: 1014779d8; end: 1014779f3;  */

void FUN_1014779d8(long *param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uStack_48;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  func_0x0001000ad7c4(lVar2,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x28));
  lVar3 = lVar2;
  func_0x000100083b20(&uStack_48);
  func_0x0001000ad7c4();
  lVar4 = lVar3;
  func_0x0001000ad7c4();
  lVar5 = lVar2;
  func_0x000105396e98(lVar2,uStack_48,lVar3,lVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c615e8(uStack_48);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar4);
  if (lVar5 != 0) {
    *param_1 = lVar5;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1014779d8);
  (*pcVar1)();
}



/* Entry: 1014779f4; end: 101477a97;  */

void FUN_1014779f4(long *param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long lStack_48;
  
  func_0x000100083b20(&lStack_48);
  func_0x0001000ad7c4();
  uVar2 = param_2;
  func_0x0001000ad7c4();
  lVar3 = lStack_48;
  func_0x000105396ca0(lStack_48,param_2,uVar2);
  func_0x000107c61180();
  func_0x000107c615e8(lStack_48);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar2);
  if (lVar3 != 0) {
    *param_1 = lVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101477a98);
  (*pcVar1)();
}



/* Entry: 101477a98; end: 101477ab3;  */

void FUN_101477a98(long *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  long lStack_48;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000100083b20(&lStack_48,uVar2,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20));
  func_0x0001000ad7c4();
  uVar3 = uVar2;
  func_0x0001000ad7c4();
  lVar4 = lStack_48;
  func_0x000105396ca0(lStack_48,uVar2,uVar3);
  func_0x000107c61180();
  func_0x000107c615e8(lStack_48);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  if (lVar4 != 0) {
    *param_1 = lVar4;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101477a98);
  (*pcVar1)();
}



/* Entry: 101477ab4; end: 101477b27;  */

void FUN_101477ab4(long *param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  
  func_0x0001000ad7c4();
  lVar2 = param_2;
  func_0x0001000ad7c4();
  lVar3 = param_2;
  func_0x000105396de8(param_2,lVar2);
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  func_0x000107c61170(lVar2);
  if (lVar3 != 0) {
    *param_1 = lVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101477b28);
  (*pcVar1)();
}



/* Entry: 101477b28; end: 101477b4f;  */

void FUN_101477b28(long *param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  func_0x0001000ad7c4(lVar2,*(undefined8 *)(unaff_x20 + 0x18));
  lVar3 = lVar2;
  func_0x0001000ad7c4();
  lVar4 = lVar2;
  func_0x000105396de8(lVar2,lVar3);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar3);
  if (lVar4 != 0) {
    *param_1 = lVar4;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101477b28);
  (*pcVar1)();
}



/* Entry: 101477b50; end: 101477b73;  */

undefined8 FUN_101477b50(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  return uStack_18;
}



/* Entry: 101477b74; end: 101477bab;  */

void FUN_101477b74(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 101477bac; end: 101477be3;  */

void FUN_101477bac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 101477be4; end: 101477c27;  */

void FUN_101477be4(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_2;
  FUN_101477e2c();
  func_0x000107c613fc();
  *(long *)(lVar1 + 0x10) = param_2;
  *param_1 = lVar1;
  param_1[1] = (long)&PTR_DAT_1103c37a8;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 101477c28; end: 101477c2f;  */

void FUN_101477c28(long *param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  FUN_101477e2c();
  func_0x000107c613fc();
  *(long *)(lVar1 + 0x10) = unaff_x20;
  *param_1 = lVar1;
  param_1[1] = (long)&PTR_DAT_1103c37a8;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 101477c30; end: 101477c5f;  */

void FUN_101477c30(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 101477c60; end: 101477c83;  */

void FUN_101477c60(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101477c84; end: 101477c8f;  */

void FUN_101477c84(void)

{
  return;
}



/* Entry: 101477c90; end: 101477ca7;  */

void FUN_101477c90(void)

{
  FUN_101477d6c(0);
  return;
}



/* Entry: 101477ca8; end: 101477caf;  */

void FUN_101477ca8(void)

{
  return;
}



/* Entry: 101477cb0; end: 101477cc7;  */

void FUN_101477cb0(void)

{
  FUN_101477d6c(1);
  return;
}



/* Entry: 101477cc8; end: 101477ccb;  */

void FUN_101477cc8(void)

{
  return;
}



/* Entry: 101477ccc; end: 101477d6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101477ccc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  lVar1 = *(long *)(lStack_28 + _DAT_113053938);
  func_0x000107c61174();
  func_0x000107c61170(lStack_28);
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 != 0) {
    uVar3 = 0;
    func_0x0001001d53c0(0);
    func_0x0001001d53e0();
    func_0x000107c56a90(lVar2,param_2,uVar3);
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(uVar3);
  }
  return;
}



/* Entry: 101477d6c; end: 101477e1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101477d6c(uint param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  lVar1 = *(long *)(lStack_38 + _DAT_113053938);
  func_0x000107c61174();
  func_0x000107c61170(lStack_38);
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 != 0) {
    func_0x0001001d53c0(0);
    uVar3 = (ulong)(param_1 & 1);
    func_0x000104071994(uVar3);
    func_0x000107c56a90(lVar2,param_2,uVar3);
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(uVar3);
  }
  return;
}



/* Entry: 101477e1c; end: 101477e2b;  */

undefined1  [16] FUN_101477e1c(void)

{
  return ZEXT816(0x1103c3810);
}



/* Entry: 101477e2c; end: 101477e4b;  */

void FUN_101477e2c(void)

{
  func_0x000107c61168(&PTR_PTR_112da1700);
  return;
}


