/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103b7f37c; end: 103b7f3af;  */

void FUN_103b7f37c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103b7f3b0; end: 103b7f3c7; -[WebBrowsingThirdPartyLoginScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b7f3b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ff0920));
  return;
}



/* Entry: 103b7f3c8; end: 103b7f407;  */

void FUN_103b7f3c8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112ff0958;
  func_0x0001000285a8(0x112ff0958,&UNK_10dc5af30);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 103b7f408; end: 103b7f50b;  */

void FUN_103b7f408(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ff0960,&UNK_10dc5af38);
  puVar1 = &UNK_1106db008;
  func_0x000107c613fc(&UNK_1106db008,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_103b7f50c,puVar1);
  return;
}



/* Entry: 103b7f50c; end: 103b7f513;  */

void FUN_103b7f50c(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  func_0x000100083b20(&uStack_40);
  FUN_103b7fc24();
  func_0x000107c613fc();
  uVar1 = uStack_40;
  FUN_103b7f938();
  func_0x000107c61170(uStack_38);
  func_0x000107c61574(uStack_40);
  *param_1 = uVar1;
  return;
}



/* Entry: 103b7f514; end: 103b7f56f;  */

undefined8 FUN_103b7f514(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_2;
  FUN_103b7f938(param_2);
  func_0x000107c61170(param_1);
  func_0x000107c61574(param_2);
  return uVar1;
}



/* Entry: 103b7f570; end: 103b7f593;  */

void FUN_103b7f570(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103b7f594; end: 103b7f59b;  */

undefined8 FUN_103b7f594(void)

{
  return 1;
}



/* Entry: 103b7f59c; end: 103b7f657;  */

void FUN_103b7f59c(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(0);
  func_0x000107c606a8();
  return;
}



/* Entry: 103b7f658; end: 103b7f66b;  */

void FUN_103b7f658(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff0ae0 == (undefined *)0x0 || ((ulong)puRam0000000112ff0ae0 & 1) != 0) {
    puVar1 = &UNK_10e9c2b5c;
    func_0x000107c61518(&UNK_10e9c2b5c,0x31,0,0);
    puRam0000000112ff0ae0 = puVar1;
  }
  return;
}



/* Entry: 103b7f66c; end: 103b7f793;  */

ulong FUN_103b7f66c(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103b7f794);
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
  FUN_103b7f794(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103b7f790);
      (*pcVar1)();
    }
    FUN_103b7f814(0,uVar2,uVar3 + 0x20,param_4);
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



/* Entry: 103b7f794; end: 103b7f813;  */

undefined * FUN_103b7f794(undefined *param_1,undefined *param_2)

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
    FUN_103b7f658();
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



/* Entry: 103b7f814; end: 103b7f937;  */

long FUN_103b7f814(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103b7f934);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103b7f938);
        (*pcVar3)();
      }
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        uVar4 = 0x112ff0ad8;
        func_0x0001000285a8(0x112ff0ad8,&UNK_10dc5b170);
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0x112ff0ad8;
      func_0x0001000285a8(0x112ff0ad8,&UNK_10dc5b170);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x103b7f930);
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



/* Entry: 103b7f938; end: 103b7fa47;  */

void FUN_103b7f938(void)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  
  func_0x00010008a7c8(&lStack_50);
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lStack_50 != 0) {
    func_0x000100083b20(&lStack_48);
    func_0x000107c61574(lStack_50);
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (lStack_48 != 0) {
      func_0x000107c61550();
      if (((ulong)puVar3 >> 0x3e != 0) || (((ulong)puVar2 & 1) == 0)) {
        if ((ulong)puVar3 >> 0x3e == 0) {
          puVar2 = *(undefined **)(((ulong)puVar3 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar2 = (undefined *)((ulong)puVar3 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar3) {
            puVar2 = puVar3;
          }
          func_0x000107c60480(puVar2);
        }
        puVar3 = (undefined *)0x0;
        FUN_103b7f66c(0,puVar2 + 1,1,PTR___swiftEmptyArrayStorage_11034f1c8);
      }
      uVar4 = (ulong)puVar3 & 0xffffffffffffff8;
      uVar1 = *(ulong *)(uVar4 + 0x10);
      puVar2 = puVar3;
      if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar1) {
        puVar2 = (undefined *)(ulong)(1 < *(ulong *)(uVar4 + 0x18));
        FUN_103b7f66c(puVar2,uVar1 + 1,1,puVar3);
        uVar4 = (ulong)puVar2 & 0xffffffffffffff8;
      }
      *(ulong *)(uVar4 + 0x10) = uVar1 + 1;
      *(long *)(uVar4 + uVar1 * 8 + 0x20) = lStack_48;
    }
  }
  *(undefined **)(unaff_x20 + 0x10) = puVar2;
  return;
}



/* Entry: 103b7fa48; end: 103b7fa4b;  */

void FUN_103b7fa48(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff0970 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc5af48;
  func_0x000107c61520(&UNK_10dc5af48,&UNK_1106db0a0);
  puRam0000000112ff0970 = puVar1;
  return;
}



/* Entry: 103b7fa4c; end: 103b7fab7;  */

void FUN_103b7fa4c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff0970 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc5af48;
  func_0x000107c61520(&UNK_10dc5af48,&UNK_1106db0a0);
  puRam0000000112ff0970 = puVar1;
  return;
}



/* Entry: 103b7fab8; end: 103b7fabb;  */

void FUN_103b7fab8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff0988 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc5aff0;
  func_0x000107c61520(&UNK_10dc5aff0,&UNK_1106db150);
  puRam0000000112ff0988 = puVar1;
  return;
}



/* Entry: 103b7fabc; end: 103b7fb27;  */

void FUN_103b7fabc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff0988 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc5aff0;
  func_0x000107c61520(&UNK_10dc5aff0,&UNK_1106db150);
  puRam0000000112ff0988 = puVar1;
  return;
}



/* Entry: 103b7fb28; end: 103b7fb6b;  */

void FUN_103b7fb28(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    puVar1 = PTR___sSayxGSlsMc_11034dd20;
    func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,param_2);
    *param_1 = (long)puVar1;
  }
  return;
}



/* Entry: 103b7fb6c; end: 103b7fb6f;  */

void FUN_103b7fb6c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff09a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc5b060;
  func_0x000107c61520(&UNK_10dc5b060,&UNK_1106db150);
  puRam0000000112ff09a0 = puVar1;
  return;
}



/* Entry: 103b7fb70; end: 103b7fbaf;  */

void FUN_103b7fb70(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff09a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc5b060;
  func_0x000107c61520(&UNK_10dc5b060,&UNK_1106db150);
  puRam0000000112ff09a0 = puVar1;
  return;
}



/* Entry: 103b7fbb0; end: 103b7fbb3;  */

void FUN_103b7fbb0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff09a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc5b018;
  func_0x000107c61520(&UNK_10dc5b018,&UNK_1106db150);
  puRam0000000112ff09a8 = puVar1;
  return;
}



/* Entry: 103b7fbb4; end: 103b7fbf3;  */

void FUN_103b7fbb4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff09a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc5b018;
  func_0x000107c61520(&UNK_10dc5b018,&UNK_1106db150);
  puRam0000000112ff09a8 = puVar1;
  return;
}



/* Entry: 103b7fbf4; end: 103b7fc23;  */

undefined8 FUN_103b7fbf4(void)

{
  return 0;
}



/* Entry: 103b7fc24; end: 103b7fc43;  */

void FUN_103b7fc24(void)

{
  func_0x000107c61168(&PTR_PTR_112ff0a18);
  return;
}



/* Entry: 103b7fc44; end: 103b7fd57;  */

uint FUN_103b7fc44(uint *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar1 = 2;
  if (0xffff < param_2 + 1U) {
    iVar1 = 4;
  }
  if (param_2 + 1U < 0x100) {
    iVar1 = 1;
  }
  if (iVar1 != 4) {
    if (iVar1 == 2) {
      return (uint)(ushort)*param_1;
    }
    return (uint)(byte)*param_1;
  }
  return *param_1;
}



/* Entry: 103b7fd58; end: 103b7fda3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b7fd58(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ff0af0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b7fda4; end: 103b7fe7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103b7fda4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  uVar1 = 0;
  func_0x0001002ba190(0);
  func_0x000107c610f8();
  func_0x00010446f374(param_1,uVar1);
  uStack_48 = param_1;
  func_0x00010008a7c8(&uStack_38,&uStack_48);
  func_0x000100083b20(&uStack_48);
  func_0x000107c61574(uStack_38);
  uVar1 = uStack_48;
  uVar2 = uStack_48;
  func_0x000107c614f0(uStack_48);
  (**(code **)(lStack_40 + 0x10))();
  func_0x000107c615e8(uVar1);
  func_0x000100083b20(&lStack_50);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(param_1);
  uVar1 = *(undefined8 *)(lStack_50 + 0x10);
  func_0x000107c61434(uVar1);
  func_0x000107c61574(lStack_50);
  return uVar1;
}



/* Entry: 103b7fe80; end: 103b7fee7; -[_TtC45WebBrowsingThirdPartyLoginSaberPluginRegistry50WebBrowsingThirdPartyLoginSaberPluginScopeServices buildWithThirdPartyLoginSource:] */

void FUN_103b7fe80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61174();
  FUN_103b7fda4(param_3);
  func_0x000107c61170(param_1);
  uVar1 = 0x112ff0ad8;
  func_0x0001000285a8(0x112ff0ad8,&UNK_10dc5b170);
  uVar2 = param_3;
  func_0x000107c5fc48(param_3,uVar1);
  func_0x000107c6142c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b7fee8; end: 103b7ff47; -[_TtC45WebBrowsingThirdPartyLoginSaberPluginRegistry50WebBrowsingThirdPartyLoginSaberPluginScopeServices init] */

void FUN_103b7fee8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("WebBrowsingThirdPartyLoginSaberPluginRegistry.WebBrowsingThirdPartyLoginSaberPluginScopeServices"
                      ,0x60,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b7ff14);
  (*pcVar1)();
}



/* Entry: 103b7ff48; end: 103b7ff67; -[_TtC45WebBrowsingThirdPartyLoginSaberPluginRegistry50WebBrowsingThirdPartyLoginSaberPluginScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b7ff48(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ff0af0));
  return;
}



/* Entry: 103b7ff68; end: 103b800c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b7ff68(undefined8 param_1,undefined1 param_2)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ff0b20) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff0b28);
  *puVar1 = 0x616c7265766f6b73;
  puVar1[1] = 0xe900000000000079;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff0b30);
  *puVar1 = 0x31;
  puVar1[1] = 0xe100000000000000;
  *(undefined8 *)(unaff_x20 + _DAT_112ff0b38) = param_1;
  *(undefined1 *)(unaff_x20 + _DAT_112ff0b40) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b800c8; end: 103b80217; -[TemuSkoHandler initWithWebBrowsingConfigProvider:enableTemuSko:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b800c8(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lStack_40;
  long lStack_38;
  
  lVar3 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112ff0b20) = 0;
  puVar1 = (undefined8 *)(param_1 + _DAT_112ff0b28);
  *puVar1 = 0x616c7265766f6b73;
  puVar1[1] = 0xe900000000000079;
  puVar1 = (undefined8 *)(param_1 + _DAT_112ff0b30);
  *puVar1 = 0x31;
  puVar1[1] = 0xe100000000000000;
  *(undefined8 *)(param_1 + _DAT_112ff0b38) = param_3;
  *(undefined1 *)(param_1 + _DAT_112ff0b40) = param_4;
  puVar2 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar3;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_40,puVar2);
  return;
}



/* Entry: 103b80218; end: 103b80267; -[TemuSkoHandler dismissSkoOverlayIn:] */

/* WARNING: Possible PIC construction at 0x000103b80250: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b80254) */

void FUN_103b80218(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000103b80184(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 103b80268; end: 103b8029b;  */

void FUN_103b80268(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103b8029c; end: 103b802fb; -[TemuSkoHandler .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103b802dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b802e0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b8029c(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ff0b38));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ff0b20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112ff0b28 + 8))
  ;
  return;
}



/* Entry: 103b802fc; end: 103b80697;  */

undefined8 FUN_103b802fc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  ulong uVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined1 *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = &stack0xffffffffffffffa0 + -extraout_x8;
  lVar1 = 0;
  func_0x000107c5eb08();
  lVar9 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar7 = (long)puVar5 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar8 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  uVar6 = lVar7 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c50300(param_2);
  func_0x000107c61180();
  func_0x000107c5eae8(lVar7);
  func_0x000107c61170(param_2);
  func_0x000107c5eaf0(puVar5);
  (**(code **)(lVar9 + 8))(lVar7,lVar1);
  puVar3 = puVar5;
  (**(code **)(lVar8 + 0x30))(puVar5,1,lVar2);
  if ((int)puVar3 == 1) {
    func_0x0001000293e4(puVar5);
  }
  else {
    (**(code **)(lVar8 + 0x20))(uVar6,puVar5,lVar2);
    uVar4 = uVar6;
    func_0x000103b804b4();
    if ((uVar4 & 1) != 0) {
      FUN_103b80698(param_1);
      (**(code **)(lVar8 + 8))(uVar6,lVar2);
      return 0;
    }
    (**(code **)(lVar8 + 8))(uVar6,lVar2);
  }
  return 1;
}



/* Entry: 103b80698; end: 103b807b7;  */

/* WARNING: Possible PIC construction at 0x000103b80710: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b80738: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b80764: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b80784: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b8073c) */
/* WARNING: Removing unreachable block (ram,0x000103b80714) */
/* WARNING: Removing unreachable block (ram,0x000103b80718) */
/* WARNING: Removing unreachable block (ram,0x000103b80768) */
/* WARNING: Removing unreachable block (ram,0x000103b80788) */
/* WARNING: Removing unreachable block (ram,0x000103b80770) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b80698(long param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112ff0b38);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) {
    return;
  }
  lVar2 = lVar1;
  func_0x000107c5c80c();
  func_0x000107c61180();
  func_0x000107c615e8(lVar1);
  func_0x000107c5e3f8();
  func_0x000107c61180();
  if (param_1 != 0) {
    func_0x000107c5e400();
    func_0x000107c61180();
    lVar2 = param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 103b807b8; end: 103b807d7;  */

void FUN_103b807b8(void)

{
  func_0x000107c61168(&PTR_PTR_1129351d8);
  return;
}



/* Entry: 103b807d8; end: 103b8084f; -[TemuSkoHandler webView:decidePolicyForNavigationAction:] */

undefined8
FUN_103b807d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_103b802fc(param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 103b80850; end: 103b80897; -[WebBrowserScope adConfig] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b80850(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ff0b70;
  func_0x000107c61428(param_1 + _DAT_112ff0b70,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 103b80898; end: 103b808a3; -[WebBrowserScope setAdConfig:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b80898(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ff0b70;
  func_0x000107c61428(param_1 + _DAT_112ff0b70,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 103b808a4; end: 103b808af; -[WebBrowserScope webViewId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b808a4(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112ff0b78);
  func_0x000107c61428(puVar1,auStack_38,0,0);
  lVar2 = puVar1[1];
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
    func_0x000107c61434(lVar2);
    func_0x000107c5fadc(uVar3,lVar2);
    func_0x000107c6142c(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 103b808b0; end: 103b808bb; -[WebBrowserScope setWebViewId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b808b0(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  plVar1 = (long *)(param_1 + _DAT_112ff0b78);
  func_0x000107c61428(plVar1,auStack_48,1,0);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  func_0x000107c6142c(lVar2);
  return;
}



/* Entry: 103b808bc; end: 103b80903; -[WebBrowserScope delayLoadPromise] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b808bc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ff0b80;
  func_0x000107c61428(param_1 + _DAT_112ff0b80,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 103b80904; end: 103b8090f; -[WebBrowserScope setDelayLoadPromise:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b80904(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ff0b80;
  func_0x000107c61428(param_1 + _DAT_112ff0b80,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 103b80910; end: 103b8091b; -[WebBrowserScope browserDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b80910(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ff0b88;
  func_0x000107c61428(param_1 + _DAT_112ff0b88,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b8091c; end: 103b80927; -[WebBrowserScope setBrowserDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b8091c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ff0b88;
  func_0x000107c61428(param_1 + _DAT_112ff0b88,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103b80928; end: 103b8096b; -[WebBrowserScope enableSafeBrowsingChecking] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103b80928(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ff0b90;
  func_0x000107c61428(param_1 + _DAT_112ff0b90,auStack_38,0,0);
  return *(undefined1 *)(param_1 + lVar1);
}



/* Entry: 103b8096c; end: 103b809bb; -[WebBrowserScope setEnableSafeBrowsingChecking:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b8096c(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ff0b90;
  func_0x000107c61428(param_1 + _DAT_112ff0b90,auStack_48,1,0);
  *(undefined1 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 103b809bc; end: 103b809c7; -[WebBrowserScope conversationId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b809bc(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112ff0b98);
  func_0x000107c61428(puVar1,auStack_38,0,0);
  lVar2 = puVar1[1];
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
    func_0x000107c61434(lVar2);
    func_0x000107c5fadc(uVar3,lVar2);
    func_0x000107c6142c(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 103b809c8; end: 103b809d3; -[WebBrowserScope setConversationId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b809c8(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  plVar1 = (long *)(param_1 + _DAT_112ff0b98);
  func_0x000107c61428(plVar1,auStack_48,1,0);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  func_0x000107c6142c(lVar2);
  return;
}



/* Entry: 103b809d4; end: 103b809df; -[WebBrowserScope lineItemId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b809d4(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112ff0ba0);
  func_0x000107c61428(puVar1,auStack_38,0,0);
  lVar2 = puVar1[1];
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
    func_0x000107c61434(lVar2);
    func_0x000107c5fadc(uVar3,lVar2);
    func_0x000107c6142c(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 103b809e0; end: 103b80a53;  */

void FUN_103b809e0(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(param_1 + *param_3);
  func_0x000107c61428(puVar1,auStack_38,0,0);
  lVar2 = puVar1[1];
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
    func_0x000107c61434(lVar2);
    func_0x000107c5fadc(uVar3,lVar2);
    func_0x000107c6142c(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 103b80a54; end: 103b80a5f; -[WebBrowserScope setLineItemId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b80a54(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  plVar1 = (long *)(param_1 + _DAT_112ff0ba0);
  func_0x000107c61428(plVar1,auStack_48,1,0);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  func_0x000107c6142c(lVar2);
  return;
}



/* Entry: 103b80a60; end: 103b80ad7;  */

void FUN_103b80a60(long param_1,long param_2,long param_3,long *param_4)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  plVar1 = (long *)(param_1 + *param_4);
  func_0x000107c61428(plVar1,auStack_48,1,0);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  func_0x000107c6142c(lVar2);
  return;
}



/* Entry: 103b80ad8; end: 103b80b1b; -[WebBrowserScope browserType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103b80ad8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ff0ba8;
  func_0x000107c61428(param_1 + _DAT_112ff0ba8,auStack_38,0,0);
  return *(undefined8 *)(param_1 + lVar1);
}



/* Entry: 103b80b1c; end: 103b80b6b; -[WebBrowserScope setBrowserType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b80b1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ff0ba8;
  func_0x000107c61428(param_1 + _DAT_112ff0ba8,auStack_48,1,0);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 103b80b6c; end: 103b80b7b; -[WebBrowserScope source] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103b80b6c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112ff0bb0);
}



/* Entry: 103b80b7c; end: 103b80b9b; -[WebBrowserScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b80b7c(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112ff0bb8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b80b9c; end: 103b80c33; -[WebBrowserScope url] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b80b9c(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  undefined1 *puVar3;
  long lVar4;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puVar3 = &stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar2 = puVar3;
  (**(code **)(lVar4 + 0x10))(puVar3,param_1 + _DAT_11380cde8,lVar1);
  func_0x000107c5ed90();
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 103b80c34; end: 103b80c3f; -[WebBrowserScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b80c34(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11380cdf0;
  func_0x000107c61428(param_1 + _DAT_11380cdf0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b80c40; end: 103b80c4b; -[WebBrowserScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b80c40(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11380cdf0;
  func_0x000107c61428(param_1 + _DAT_11380cdf0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103b80c4c; end: 103b80c57; -[WebBrowserScope spotlightDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b80c4c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11380cdf8;
  func_0x000107c61428(param_1 + _DAT_11380cdf8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b80c58; end: 103b80c9b;  */

void FUN_103b80c58(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 103b80c9c; end: 103b80ca7; -[WebBrowserScope setSpotlightDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b80c9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11380cdf8;
  func_0x000107c61428(param_1 + _DAT_11380cdf8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103b80ca8; end: 103b80cfb;  */

void FUN_103b80ca8(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103b80cfc; end: 103b80d43; -[WebBrowserScope uiConfig] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b80cfc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11380ce00;
  func_0x000107c61428(param_1 + _DAT_11380ce00,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 103b80d44; end: 103b80d4f; -[WebBrowserScope setUiConfig:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b80d44(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11380ce00;
  func_0x000107c61428(param_1 + _DAT_11380ce00,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 103b80d50; end: 103b80daf;  */

void FUN_103b80d50(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar2 = *param_4;
  func_0x000107c61428(param_1 + lVar2,auStack_48,1,0);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 103b80db0; end: 103b80ee3; -[WebBrowserScope .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103b80dcc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b80df0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b80dd0) */
/* WARNING: Removing unreachable block (ram,0x000103b80df4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b80db0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ff0b70));
  return;
}



/* Entry: 103b80ee4; end: 103b810c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_103b80ee4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    code *param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long *aplStack_a0 [2];
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  lVar5 = 0;
  func_0x000100364d7c();
  lVar6 = lVar5;
  func_0x000107c610f8();
  *(undefined8 *)(lVar6 + _DAT_112ff0b70) = 0;
  puVar1 = (undefined8 *)(lVar6 + _DAT_112ff0b78);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar6 + _DAT_112ff0b80) = 0;
  func_0x000107c61614(lVar6 + _DAT_112ff0b88,0);
  *(undefined1 *)(lVar6 + _DAT_112ff0b90) = 0;
  puVar1 = (undefined8 *)(lVar6 + _DAT_112ff0b98);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar6 + _DAT_112ff0ba0);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar6 + _DAT_112ff0ba8) = 5;
  lVar4 = _DAT_11380cdf0;
  func_0x000107c61614(lVar6 + _DAT_11380cdf0,0);
  func_0x000107c61614(lVar6 + _DAT_11380cdf8,0);
  *(undefined8 *)(lVar6 + _DAT_11380ce00) = 0;
  *(undefined8 *)(lVar6 + _DAT_112ff0bb8) = param_2;
  lVar3 = _DAT_11380cde8;
  lVar7 = 0;
  func_0x000107c5ede0();
  (**(code **)(*(long *)(lVar7 + -8) + 0x10))(lVar6 + lVar3,param_1,lVar7);
  *(undefined8 *)(lVar6 + _DAT_112ff0bb0) = param_3;
  func_0x000107c61428(lVar6 + lVar4,auStack_78,1,0);
  func_0x000107c61604(lVar6 + lVar4,param_4);
  puVar2 = PTR_s_init_1125d9248;
  lStack_88 = lVar6;
  lStack_80 = lVar5;
  func_0x000107c615f0(param_2);
  plVar8 = &lStack_88;
  func_0x000107c61154(plVar8,puVar2);
  (*param_5)();
  aplStack_a0[0] = plVar8;
  func_0x00010008a7c8(&uStack_90,aplStack_a0);
  func_0x000100083b20(aplStack_a0);
  func_0x000107c61574(uStack_90);
  func_0x000107c615e8(aplStack_a0[0]);
  return plVar8;
}



/* Entry: 103b810c8; end: 103b811d3; -[_TtC15WebBrowserScope23WebBrowserScopeServices buildWithUrl:uiContainer:source:delegate:configure:] */

void FUN_103b810c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  undefined1 *puVar3;
  long lVar4;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puVar3 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5edb4(puVar3,param_3);
  uStack_70 = param_7;
  func_0x000107c615f0(param_4);
  func_0x000107c615f0(param_6);
  func_0x000107c61174(param_1);
  puVar2 = puVar3;
  FUN_103b80ee4(puVar3,param_4,param_5,param_6,0x103b81244,auStack_80);
  func_0x000107c615e8(param_4);
  func_0x000107c615e8(param_6);
  func_0x000107c61170(param_1);
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 103b811d4; end: 103b811d7;  */

void FUN_103b811d4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103b811d8; end: 103b8120b;  */

void FUN_103b811d8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103b8120c; end: 103b81257; -[_TtC15WebBrowserScope23WebBrowserScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b8120c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ff0bc8));
  return;
}



/* Entry: 103b81258; end: 103b81283; +[SCAdOperaEvents collectionItemSelected] */

void FUN_103b81258(void)

{
  func_0x000107c5fadc(0xd000000000000018,0x800000010f1a38e0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b81284; end: 103b812af; +[SCAdOperaEvents collectionCtaTapped] */

void FUN_103b81284(void)

{
  func_0x000107c5fadc(0xd000000000000014,0x800000010f1a3900);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b812b0; end: 103b812bb;  */

undefined * FUN_103b812b0(void)

{
  return &UNK_1106db378;
}



/* Entry: 103b812bc; end: 103b812e7; +[SCAdOperaEvents contextTriggeredAttachment] */

void FUN_103b812bc(void)

{
  func_0x000107c5fadc(0xd00000000000001f,0x800000010f1a3920);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b812e8; end: 103b812f3;  */

undefined * FUN_103b812e8(void)

{
  return &UNK_1106db388;
}



/* Entry: 103b812f4; end: 103b8131f; +[SCAdOperaEvents contextTrayTryOnCtaTapped] */

void FUN_103b812f4(void)

{
  func_0x000107c5fadc(0xd000000000000021,0x800000010f1a3940);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b81320; end: 103b8132b;  */

undefined * FUN_103b81320(void)

{
  return &UNK_1106db398;
}



/* Entry: 103b8132c; end: 103b81357; +[SCAdOperaEvents contextStickerCtaTapped] */

void FUN_103b8132c(void)

{
  func_0x000107c5fadc(0xd00000000000001d,0x800000010f1a3970);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b81358; end: 103b81363;  */

undefined * FUN_103b81358(void)

{
  return &UNK_1106db3a8;
}



/* Entry: 103b81364; end: 103b8138f; +[SCAdOperaEvents pageabilityDidChange] */

void FUN_103b81364(void)

{
  func_0x000107c5fadc(0xd000000000000019,0x800000010f1a3990);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b81390; end: 103b8139b;  */

undefined * FUN_103b81390(void)

{
  return &UNK_1106db3b8;
}



/* Entry: 103b8139c; end: 103b813c7; +[SCAdOperaEvents triggerAttachment] */

void FUN_103b8139c(void)

{
  func_0x000107c5fadc(0xd000000000000015,0x800000010f1a39b0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b813c8; end: 103b813f3; +[SCAdOperaEvents autoTriggerAttachment] */

void FUN_103b813c8(void)

{
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f1a39d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b813f4; end: 103b8141f; +[SCAdOperaEvents tapToSkipRemainingSnaps] */

void FUN_103b813f4(void)

{
  func_0x000107c5fadc(0xd00000000000002f,0x800000010f1a39f0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b81420; end: 103b8142b;  */

undefined * FUN_103b81420(void)

{
  return &UNK_1106db3c8;
}



/* Entry: 103b8142c; end: 103b81457; +[SCAdOperaEvents endCardSegmentChanged] */

void FUN_103b8142c(void)

{
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f1a3a20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b81458; end: 103b81463;  */

undefined * FUN_103b81458(void)

{
  return &UNK_1106db3d8;
}



/* Entry: 103b81464; end: 103b8148f; +[SCAdOperaEvents endCardTapped] */

void FUN_103b81464(void)

{
  func_0x000107c5fadc(0xd000000000000012,0x800000010f1a3a40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b81490; end: 103b8149b;  */

undefined * FUN_103b81490(void)

{
  return &UNK_1106db3e8;
}



/* Entry: 103b8149c; end: 103b814c7; +[SCAdOperaEvents playerDidBecomeReady] */

void FUN_103b8149c(void)

{
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f1a3a60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b814c8; end: 103b814cb; -[SCAdOperaEvents .cxx_destruct] */

void FUN_103b814c8(void)

{
  return;
}



/* Entry: 103b814cc; end: 103b814f7; +[SCOperaAdEventParams collectionItemIndex] */

void FUN_103b814cc(void)

{
  func_0x000107c5fadc(0xd000000000000015,0x800000010f1a3a80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b814f8; end: 103b81523; +[SCOperaAdEventParams collectionTapLocation] */

void FUN_103b814f8(void)

{
  func_0x000107c5fadc(0xd000000000000017,0x800000010f1a3aa0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b81524; end: 103b81557; +[SCOperaAdEventParams eventSource] */

void FUN_103b81524(void)

{
  func_0x000107c5fadc(0x746e6576655f6461,0xef656372756f735f);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


