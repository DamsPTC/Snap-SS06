/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101b252c0; end: 101b252ff;  */

undefined1  [16] FUN_101b252c0(void)

{
  return ZEXT816(0x1104452a0);
}



/* Entry: 101b25300; end: 101b25347;  */

undefined8 FUN_101b25300(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_1;
  FUN_101b25378(param_1);
  func_0x000107c615e8(param_1);
  return uVar1;
}



/* Entry: 101b25348; end: 101b2536b;  */

void FUN_101b25348(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101b2536c; end: 101b25377;  */

undefined1  [16] FUN_101b2536c(void)

{
  return ZEXT816(0);
}



/* Entry: 101b25378; end: 101b2543f;  */

void FUN_101b25378(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_70 [48];
  
  *(undefined8 **)(unaff_x20 + 0x10) = param_1;
  puVar1 = param_1;
  func_0x000107c615f0();
  func_0x0001000298f0();
  func_0x000107c61428();
  uVar2 = *puVar1;
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000024;
  func_0x0001000a9a18(0xd000000000000024,0x800000010effc560);
  func_0x000107c61170(uVar2);
  func_0x000107c3e85c(param_1);
  func_0x000107c61428(puVar1,auStack_70,0,0);
  uVar2 = *puVar1;
  func_0x000107c61174(uVar2);
  func_0x0001000aa0a8(uVar3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 101b25440; end: 101b2549b;  */

undefined ** FUN_101b25440(void)

{
  return &PTR_DAT_113082b28;
}



/* Entry: 101b2549c; end: 101b255a7;  */

long FUN_101b2549c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  func_0x000107c3e85c(param_2);
  func_0x000107c61170(param_1);
  return unaff_x20;
}



/* Entry: 101b255a8; end: 101b255af;  */

void FUN_101b255a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  ppuVar2 = &puStack_60;
  puVar1 = &UNK_110445550;
  func_0x000107c613fc(&UNK_110445550,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  pcStack_40 = FUN_101b25658;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_110445568;
  puStack_38 = puVar1;
  func_0x000107c60bc4(&puStack_60);
  puVar1 = puStack_38;
  func_0x000107c6157c(param_2);
  func_0x000107c61574(puVar1);
  func_0x000107c428ac(uVar3);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 101b255b0; end: 101b255d3;  */

void FUN_101b255b0(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101b255d4; end: 101b2562b;  */

undefined1  [16] FUN_101b255d4(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auVar3 [16];
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  puVar1 = &UNK_110445528;
  func_0x000107c613fc(&UNK_110445528,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  func_0x000107c615f0(uVar2);
  auVar3._8_8_ = puVar1;
  auVar3._0_8_ = 0x101b25694;
  return auVar3;
}



/* Entry: 101b2562c; end: 101b25657;  */

undefined ** FUN_101b2562c(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 101b25658; end: 101b25677;  */

void FUN_101b25658(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101b25678; end: 101b256a7;  */

void FUN_101b25678(long param_1,long param_2)

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



/* Entry: 101b256a8; end: 101b2576b;  */

void FUN_101b256a8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112e01730;
  func_0x0001000285a8(0x112e01730,&UNK_10d9d28a0);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 101b2576c; end: 101b2576f;  */

void FUN_101b2576c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e01740 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9d28b0;
  func_0x000107c61520(&UNK_10d9d28b0,&UNK_110445720);
  puRam0000000112e01740 = puVar1;
  return;
}



/* Entry: 101b25770; end: 101b257db;  */

void FUN_101b25770(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e01740 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9d28b0;
  func_0x000107c61520(&UNK_10d9d28b0,&UNK_110445720);
  puRam0000000112e01740 = puVar1;
  return;
}



/* Entry: 101b257dc; end: 101b257df;  */

void FUN_101b257dc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e01758 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9d2958;
  func_0x000107c61520(&UNK_10d9d2958,&UNK_1104457b0);
  puRam0000000112e01758 = puVar1;
  return;
}



/* Entry: 101b257e0; end: 101b2584b;  */

void FUN_101b257e0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e01758 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9d2958;
  func_0x000107c61520(&UNK_10d9d2958,&UNK_1104457b0);
  puRam0000000112e01758 = puVar1;
  return;
}



/* Entry: 101b2584c; end: 101b258cf;  */

void FUN_101b2584c(long *param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 101b258d0; end: 101b258d3;  */

void FUN_101b258d0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e01770 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9d29c8;
  func_0x000107c61520(&UNK_10d9d29c8,&UNK_1104457b0);
  puRam0000000112e01770 = puVar1;
  return;
}



/* Entry: 101b258d4; end: 101b25913;  */

void FUN_101b258d4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e01770 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9d29c8;
  func_0x000107c61520(&UNK_10d9d29c8,&UNK_1104457b0);
  puRam0000000112e01770 = puVar1;
  return;
}



/* Entry: 101b25914; end: 101b25917;  */

void FUN_101b25914(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e01778 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9d2980;
  func_0x000107c61520(&UNK_10d9d2980,&UNK_1104457b0);
  puRam0000000112e01778 = puVar1;
  return;
}



/* Entry: 101b25918; end: 101b25957;  */

void FUN_101b25918(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e01778 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9d2980;
  func_0x000107c61520(&UNK_10d9d2980,&UNK_1104457b0);
  puRam0000000112e01778 = puVar1;
  return;
}



/* Entry: 101b25958; end: 101b25aef;  */

void FUN_101b25958(void)

{
  return;
}



/* Entry: 101b25af0; end: 101b25b3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b25af0(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e01810) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101b25b3c; end: 101b25b9b; -[_TtC36SCLogoutCleanupHandlerPluginRegistry40SCLogoutCleanupHandlerPluginSaberService init] */

void FUN_101b25b3c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCLogoutCleanupHandlerPluginRegistry.SCLogoutCleanupHandlerPluginSaberService"
                      ,0x4d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101b25b68);
  (*pcVar1)();
}



/* Entry: 101b25b9c; end: 101b25bc3; -[_TtC36SCLogoutCleanupHandlerPluginRegistry40SCLogoutCleanupHandlerPluginSaberService .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b25b9c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e01810));
  return;
}



/* Entry: 101b25bc4; end: 101b25c03;  */

void FUN_101b25bc4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112e01880;
  func_0x0001000285a8(0x112e01880,&UNK_10d9d2ae0);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 101b25c04; end: 101b25c0b;  */

undefined8 FUN_101b25c04(void)

{
  return 1;
}



/* Entry: 101b25c0c; end: 101b25c87;  */

void FUN_101b25c0c(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(0);
  func_0x000107c606a8();
  return;
}



/* Entry: 101b25c88; end: 101b25c8b;  */

void FUN_101b25c88(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e01890 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9d2af0;
  func_0x000107c61520(&UNK_10d9d2af0,&UNK_110445940);
  puRam0000000112e01890 = puVar1;
  return;
}



/* Entry: 101b25c8c; end: 101b25cf7;  */

void FUN_101b25c8c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e01890 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9d2af0;
  func_0x000107c61520(&UNK_10d9d2af0,&UNK_110445940);
  puRam0000000112e01890 = puVar1;
  return;
}



/* Entry: 101b25cf8; end: 101b25cfb;  */

void FUN_101b25cf8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e018a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9d2b98;
  func_0x000107c61520(&UNK_10d9d2b98,&UNK_1104459d0);
  puRam0000000112e018a8 = puVar1;
  return;
}



/* Entry: 101b25cfc; end: 101b25d67;  */

void FUN_101b25cfc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e018a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9d2b98;
  func_0x000107c61520(&UNK_10d9d2b98,&UNK_1104459d0);
  puRam0000000112e018a8 = puVar1;
  return;
}



/* Entry: 101b25d68; end: 101b25deb;  */

void FUN_101b25d68(long *param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 101b25dec; end: 101b25def;  */

void FUN_101b25dec(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e018c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9d2c08;
  func_0x000107c61520(&UNK_10d9d2c08,&UNK_1104459d0);
  puRam0000000112e018c0 = puVar1;
  return;
}



/* Entry: 101b25df0; end: 101b25e2f;  */

void FUN_101b25df0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e018c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9d2c08;
  func_0x000107c61520(&UNK_10d9d2c08,&UNK_1104459d0);
  puRam0000000112e018c0 = puVar1;
  return;
}



/* Entry: 101b25e30; end: 101b25e33;  */

void FUN_101b25e30(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e018c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9d2bc0;
  func_0x000107c61520(&UNK_10d9d2bc0,&UNK_1104459d0);
  puRam0000000112e018c8 = puVar1;
  return;
}



/* Entry: 101b25e34; end: 101b25e73;  */

void FUN_101b25e34(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e018c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9d2bc0;
  func_0x000107c61520(&UNK_10d9d2bc0,&UNK_1104459d0);
  puRam0000000112e018c8 = puVar1;
  return;
}



/* Entry: 101b25e74; end: 101b25f97;  */

undefined8 FUN_101b25e74(void)

{
  return 0;
}



/* Entry: 101b25f98; end: 101b25fe3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b25f98(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e01960) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101b25fe4; end: 101b260eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b25fe4(void)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lStack_40;
  long lStack_38;
  
  func_0x00010008a7c8(&lStack_40);
  if (lStack_40 != 0) {
    func_0x000100083b20(&lStack_38);
    func_0x000107c61574(lStack_40);
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (lStack_38 != 0) {
      puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
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
        FUN_101b261d0(0,puVar2 + 1,1,PTR___swiftEmptyArrayStorage_11034f1c8);
      }
      uVar4 = (ulong)puVar3 & 0xffffffffffffff8;
      uVar1 = *(ulong *)(uVar4 + 0x10);
      if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar1) {
        uVar4 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
        FUN_101b261d0(uVar4,uVar1 + 1,1,puVar3);
        uVar4 = uVar4 & 0xffffffffffffff8;
      }
      *(ulong *)(uVar4 + 0x10) = uVar1 + 1;
      *(long *)(uVar4 + uVar1 * 8 + 0x20) = lStack_38;
    }
  }
  return;
}



/* Entry: 101b260ec; end: 101b2614b; -[_TtC42SCBootstrapResponseProcessorPluginRegistry46SCBootstrapResponseProcessorPluginSaberService buildSaberPlugins] */

void FUN_101b260ec(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101b25fe4();
  func_0x000107c61170(param_1);
  uVar2 = 0x112e01990;
  func_0x0001000285a8(0x112e01990,&UNK_10d9d2d10);
  uVar3 = uVar1;
  func_0x000107c5fc48(uVar1,uVar2);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 101b2614c; end: 101b261ab; -[_TtC42SCBootstrapResponseProcessorPluginRegistry46SCBootstrapResponseProcessorPluginSaberService init] */

void FUN_101b2614c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCBootstrapResponseProcessorPluginRegistry.SCBootstrapResponseProcessorPluginSaberService"
                      ,0x59,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101b26178);
  (*pcVar1)();
}



/* Entry: 101b261ac; end: 101b261cf; -[_TtC42SCBootstrapResponseProcessorPluginRegistry46SCBootstrapResponseProcessorPluginSaberService .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b261ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e01960));
  return;
}



/* Entry: 101b261d0; end: 101b262f7;  */

ulong FUN_101b261d0(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101b262f8);
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
  FUN_101b26308(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101b262f4);
      (*pcVar1)();
    }
    FUN_101b26388(0,uVar2,uVar3 + 0x20,param_4);
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



/* Entry: 101b262f8; end: 101b26307;  */

undefined1  [16] FUN_101b262f8(void)

{
  return ZEXT816(0x110445a50);
}



/* Entry: 101b26308; end: 101b26387;  */

undefined * FUN_101b26308(undefined *param_1,undefined *param_2)

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
    func_0x000101b261bc();
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



/* Entry: 101b26388; end: 101b264ab;  */

long FUN_101b26388(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101b264a8);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101b264ac);
        (*pcVar3)();
      }
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        uVar4 = 0x112e01990;
        func_0x0001000285a8(0x112e01990,&UNK_10d9d2d10);
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0x112e01990;
      func_0x0001000285a8(0x112e01990,&UNK_10d9d2d10);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101b264a4);
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



/* Entry: 101b264ac; end: 101b265eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b264ac(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  uVar1 = uStack_50;
  func_0x000107c4e41c(uStack_50);
  func_0x000107c61180();
  func_0x000107c61170(uStack_50);
  func_0x000100083b20(&lStack_58);
  lVar2 = *(long *)(lStack_58 + _DAT_113083f78);
  func_0x000107c61174();
  func_0x000107c61170(lStack_58);
  lVar3 = lVar2;
  func_0x000107c5d984();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar3 == 0) {
    lVar3 = 0;
    func_0x000107c5faec(0);
    func_0x000107c5fadc();
    func_0x000107c6142c(param_3);
  }
  puVar4 = PTR_PTR_1126a8a20;
  func_0x000107c610f8(PTR_PTR_1126a8a20);
  func_0x000107c46494();
  func_0x000107c61170(lVar3);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uStack_48);
  puVar5 = PTR_PTR_1126a8a28;
  func_0x000107c610f8();
  func_0x000107c47dc4();
  func_0x000107c61170(puVar4);
  *param_1 = puVar5;
  return;
}



/* Entry: 101b265ec; end: 101b265fb;  */

undefined1  [16] FUN_101b265ec(void)

{
  return ZEXT816(0x110445b18);
}



/* Entry: 101b265fc; end: 101b26667;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b265fc(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_101b269f0();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112e019b0) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 101b26668; end: 101b266d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b26668(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e019b0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101b266d4; end: 101b26733; -[_TtC52BitmojiEditAvatarBuilderScopedFactoryServiceProvider40SCBitmojiEditAvatarBuilderScopedServices init] */

void FUN_101b266d4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("BitmojiEditAvatarBuilderScopedFactoryServiceProvider.SCBitmojiEditAvatarBuilderScopedServices"
                      ,0x5d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101b26700);
  (*pcVar1)();
}



/* Entry: 101b26734; end: 101b26743; -[_TtC52BitmojiEditAvatarBuilderScopedFactoryServiceProvider40SCBitmojiEditAvatarBuilderScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b26734(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e019b0));
  return;
}



/* Entry: 101b26744; end: 101b267af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b26744(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110445cf0;
  func_0x000107c613fc(&UNK_110445cf0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_101b26a88,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 101b267b0; end: 101b2684b;  */

void FUN_101b267b0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  func_0x000100083b20(auStack_60);
  func_0x000100083b20(&lStack_48);
  func_0x000107c61428(lStack_48 + 0x10,auStack_60,1,0);
  uVar2 = *(undefined8 *)(lStack_48 + 0x10);
  *(undefined8 *)(lStack_48 + 0x10) = auStack_60[0];
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_110445c00;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110445c00;
  return;
}



/* Entry: 101b2684c; end: 101b26883;  */

void FUN_101b2684c(long *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000100094f24();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *param_1 = lVar1;
  return;
}



/* Entry: 101b26884; end: 101b2688b;  */

undefined8 FUN_101b26884(void)

{
  return 0x1b;
}



/* Entry: 101b2688c; end: 101b269bf;  */

void FUN_101b2688c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_110445d18;
  func_0x000107c613fc(&UNK_110445d18,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_101b26a60;
  func_0x00010058fa64(FUN_101b26a60,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 101b269c0; end: 101b269ef;  */

undefined ** FUN_101b269c0(void)

{
  return &PTR_DAT_1130667f0;
}



/* Entry: 101b269f0; end: 101b26a0f;  */

void FUN_101b269f0(void)

{
  func_0x000107c61168(&PTR_PTR_1127f7840);
  return;
}



/* Entry: 101b26a10; end: 101b26a5f;  */

undefined1  [16] FUN_101b26a10(void)

{
  return ZEXT816(0x110445c50);
}



/* Entry: 101b26a60; end: 101b26a87;  */

void FUN_101b26a60(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 101b26a88; end: 101b26a9b;  */

void FUN_101b26a88(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101b26a9c; end: 101b2731b;  */

void FUN_101b26a9c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29)

{
  undefined8 *puVar1;
  undefined *puVar2;
  code *pcVar3;
  char *pcVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char *pcVar8;
  char *pcVar9;
  code *pcVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  char *pcVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  code *pcVar18;
  undefined8 uVar19;
  undefined8 auStack_70 [2];
  
  uVar19 = *param_2;
  func_0x0001000285a8(0x112e01a28,&UNK_10d9d3070);
  puVar1 = auStack_70;
  auStack_70[0] = uVar19;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112e01a30,&UNK_10d9d30c0);
  puVar2 = &UNK_110445dc8;
  func_0x000107c613fc(&UNK_110445dc8,0x28,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar3 = FUN_101b27388;
  func_0x0001000823a8(FUN_101b27388,puVar2);
  pcVar4 = "BitmojiEditAvatarBuilderMetricsServicesEntryPointWrapperServiceProvider";
  func_0x000100082720("BitmojiEditAvatarBuilderMetricsServicesEntryPointWrapperServiceProvider",0x47
                      ,2);
  func_0x000101b2b988();
  pcVar5 = "SCBitmojiAvatarBuilderLensScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCBitmojiAvatarBuilderLensScopeExposerSubjectServiceProvider",0x3c,2);
  FUN_101b2b9d4();
  func_0x000100082720("SCGenerativeContentReportScopeExposerSubjectServiceProvider",0x3b,2);
  func_0x0001000285a8(0x112e01a38,&UNK_10d9d3080);
  func_0x000107c6157c(pcVar3);
  uVar19 = 0x101b27394;
  func_0x0001000823a8(0x101b27394,pcVar3);
  func_0x000100082720("SCBitmojiAvatarBuilderMetricsServicesServiceProvider",0x34,2);
  func_0x0001000285a8(0x112e01a40,&UNK_10d9d34c0);
  puVar2 = &UNK_110445df0;
  func_0x000107c613fc(&UNK_110445df0,0x20,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_5;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_5);
  uVar6 = 0x101b2739c;
  func_0x0001000823a8(0x101b2739c,puVar2);
  func_0x000100082720("SCBitmojiEditAvatarBuilderPreviewViewProviderServiceProviderWrapperServiceProvider"
                      ,0x52,2);
  func_0x0001000285a8(0x112e01a48,&UNK_10d9d3090);
  puVar2 = &UNK_110445e18;
  func_0x000107c613fc(&UNK_110445e18,0x38,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_6;
  *(undefined8 *)(puVar2 + 0x20) = param_7;
  *(undefined8 *)(puVar2 + 0x28) = param_8;
  *(undefined8 *)(puVar2 + 0x30) = param_9;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  uVar7 = 0x101b273a4;
  func_0x0001000823a8(0x101b273a4,puVar2);
  func_0x000100082720("SCCameraDeviceSettingsResolverServiceBitmojiEditLiveMirrorEntryPointWrapperServiceProvider"
                      ,0x5a,2);
  pcVar8 = pcVar4;
  FUN_101b2b9c8();
  func_0x000100082720("SCBitmojiAvatarBuilderLensScopeExposerObservableServiceProvider",0x3f,2);
  pcVar9 = pcVar5;
  FUN_101b2ba60();
  func_0x000100082720("SCGenerativeContentReportScopeExposerObservableServiceProvider",0x3e,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar10 = FUN_101b2684c;
  func_0x0001000823a8(FUN_101b2684c,0);
  func_0x000100082720("SCBitmojiEditAvatarBuilderScopedServicesCleanupRelayServiceProvider",0x43,2);
  func_0x0001000285a8(0x112e01a50,&UNK_10d9d30a0);
  func_0x000107c6157c(uVar6);
  uVar11 = 0x101b273b4;
  func_0x0001000823a8(0x101b273b4,uVar6);
  func_0x000100082720("SCBitmojiCameraAdaptorPreviewViewProviderServicesServiceProvider",0x40,2);
  func_0x0001000285a8(0x112e01a58,&UNK_10d9d30a8);
  func_0x000107c6157c(uVar7);
  uVar12 = 0x101b273bc;
  func_0x0001000823a8(0x101b273bc,uVar7);
  func_0x000100082720("SCBitmojiEditAvatarBuilderScopedCameraDeviceSettingsResolverServicesServiceProvider"
                      ,0x53,2);
  pcVar13 = pcVar4;
  FUN_101b2b67c(pcVar4,uVar19,uVar11,uVar12,pcVar5);
  func_0x000100082720("BitmojiEditAvatarBuilderScopeGraphBridgeServicesServiceProvider",0x3f,2);
  func_0x0001000285a8(0x112e01a60,&UNK_10d9d30b0);
  puVar2 = &UNK_110445e40;
  func_0x000107c613fc(&UNK_110445e40,0xe8,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_10;
  *(undefined8 *)(puVar2 + 0x20) = param_11;
  *(undefined8 *)(puVar2 + 0x28) = uVar19;
  *(undefined8 *)(puVar2 + 0x30) = param_12;
  *(undefined8 *)(puVar2 + 0x38) = param_13;
  *(undefined8 *)(puVar2 + 0x40) = param_14;
  *(undefined8 *)(puVar2 + 0x48) = param_15;
  *(undefined8 *)(puVar2 + 0x50) = param_16;
  *(undefined8 *)(puVar2 + 0x58) = param_17;
  *(undefined8 *)(puVar2 + 0x60) = param_18;
  *(undefined8 *)(puVar2 + 0x68) = param_19;
  *(undefined8 *)(puVar2 + 0x70) = param_20;
  *(undefined8 *)(puVar2 + 0x78) = param_21;
  *(undefined8 *)(puVar2 + 0x80) = param_22;
  *(undefined8 *)(puVar2 + 0x88) = param_23;
  *(undefined8 *)(puVar2 + 0x90) = param_24;
  *(undefined8 *)(puVar2 + 0x98) = param_25;
  *(undefined8 *)(puVar2 + 0xa0) = uVar11;
  *(undefined8 *)(puVar2 + 0xa8) = param_7;
  *(undefined8 *)(puVar2 + 0xb0) = uVar12;
  *(undefined8 *)(puVar2 + 0xb8) = param_26;
  *(undefined8 *)(puVar2 + 0xc0) = param_27;
  *(undefined8 *)(puVar2 + 200) = param_28;
  *(undefined8 *)(puVar2 + 0xd0) = param_29;
  *(char **)(puVar2 + 0xd8) = pcVar9;
  *(char **)(puVar2 + 0xe0) = pcVar8;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(uVar19);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(param_19);
  func_0x000107c6157c(param_20);
  func_0x000107c6157c(param_21);
  func_0x000107c6157c(param_22);
  func_0x000107c6157c(param_23);
  func_0x000107c6157c(param_24);
  func_0x000107c6157c(param_25);
  func_0x000107c6157c(uVar11);
  func_0x000107c6157c(uVar12);
  func_0x000107c6157c(param_26);
  func_0x000107c6157c(param_27);
  func_0x000107c6157c(param_28);
  func_0x000107c6157c(param_29);
  func_0x000107c6157c(pcVar9);
  func_0x000107c6157c(pcVar8);
  uVar14 = 0x101b273c4;
  func_0x0001000823a8(0x101b273c4,puVar2);
  func_0x000100082720("SCBitmojiEditAvatarBuilderEntryPointWrapperServiceProvider",0x3a,2);
  func_0x0001000285a8(0x112e01a68,&UNK_10d9d30b8);
  puVar2 = &UNK_110445e68;
  func_0x000107c613fc(&UNK_110445e68,0x48,7);
  *(code **)(puVar2 + 0x10) = pcVar3;
  *(undefined8 **)(puVar2 + 0x18) = puVar1;
  *(char **)(puVar2 + 0x20) = pcVar13;
  *(undefined8 *)(puVar2 + 0x28) = uVar14;
  *(undefined8 *)(puVar2 + 0x30) = uVar6;
  *(code **)(puVar2 + 0x38) = pcVar10;
  *(undefined8 *)(puVar2 + 0x40) = uVar7;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(pcVar3);
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(uVar7);
  func_0x000107c6157c(pcVar13);
  func_0x000107c6157c(uVar14);
  func_0x000107c6157c(pcVar10);
  uVar15 = 0x101b273d0;
  func_0x0001000823a8(0x101b273d0,puVar2);
  func_0x000100082720("SCBitmojiEditAvatarBuilderScopeInitializationPluginRegistryServiceProvider",
                      0x4a,2);
  func_0x0001000285a8(0x112e019b8,&UNK_10d9d2db0);
  func_0x000107c6157c(uVar15);
  uVar16 = 0x101b273e4;
  func_0x0001000823a8(0x101b273e4,uVar15);
  func_0x000100082720("SCBitmojiEditAvatarBuilderScopeInitializationServiceProvider",0x3c,2);
  func_0x0001000285a8(0x112e019a8,&UNK_10d9d2da0);
  func_0x000107c6157c(uVar16);
  uVar17 = 0x101b273ec;
  func_0x0001000823a8(0x101b273ec,uVar16);
  func_0x000100082720("SCBitmojiEditAvatarBuilderScopedServicesServiceProvider",0x37,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar2 = &UNK_110445e90;
  func_0x000107c613fc(&UNK_110445e90,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar17;
  *(code **)(puVar2 + 0x18) = pcVar10;
  func_0x000107c6157c(pcVar10);
  pcVar18 = FUN_101b27420;
  func_0x0001000823a8(FUN_101b27420,puVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(uVar19);
  func_0x000107c61574(uVar6);
  func_0x000107c61574(uVar7);
  func_0x000107c61574(pcVar8);
  func_0x000107c61574(pcVar9);
  func_0x000107c61574(pcVar10);
  func_0x000107c61574(uVar11);
  func_0x000107c61574(uVar12);
  func_0x000107c61574(pcVar13);
  func_0x000107c61574(uVar14);
  func_0x000107c61574(uVar15);
  func_0x000107c61574(uVar16);
  func_0x000100082720("SCBitmojiEditAvatarBuilderScopeEntryPointProvider",0x31,2);
  *param_1 = pcVar18;
  return;
}



/* Entry: 101b2731c; end: 101b27387;  */

void FUN_101b2731c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101b26a9c(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                *(undefined8 *)(unaff_x20 + 0xb0),*(undefined8 *)(unaff_x20 + 0xb8),
                *(undefined8 *)(unaff_x20 + 0xc0),*(undefined8 *)(unaff_x20 + 200),
                *(undefined8 *)(unaff_x20 + 0xd0),*(undefined8 *)(unaff_x20 + 0xd8),
                *(undefined8 *)(unaff_x20 + 0xe0));
  return;
}



/* Entry: 101b27388; end: 101b273f3;  */

void FUN_101b27388(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                      ,*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  FUN_101b2778c();
  func_0x000107c613fc();
  uVar1 = uStack_48;
  FUN_101b27680(uStack_48,uStack_50,uStack_58);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61170(uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 101b273f4; end: 101b2741f;  */

void FUN_101b273f4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101b27420; end: 101b27427;  */

void FUN_101b27420(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  func_0x000100083b20(auStack_60,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  func_0x000100083b20(&lStack_48);
  func_0x000107c61428(lStack_48 + 0x10,auStack_60,1,0);
  uVar2 = *(undefined8 *)(lStack_48 + 0x10);
  *(undefined8 *)(lStack_48 + 0x10) = auStack_60[0];
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_110445c00;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110445c00;
  return;
}



/* Entry: 101b27428; end: 101b274d7;  */

void FUN_101b27428(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  FUN_101b2778c();
  func_0x000107c613fc();
  uVar1 = uStack_48;
  FUN_101b27680(uStack_48,uStack_50,uStack_58);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61170(uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 101b274d8; end: 101b27547;  */

undefined8 FUN_101b274d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_1;
  FUN_101b27680(param_1,param_2,param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  return uVar1;
}



/* Entry: 101b27548; end: 101b2758b;  */

void FUN_101b27548(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101b2758c; end: 101b275df;  */

void FUN_101b2758c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 101b275e0; end: 101b275e7;  */

undefined8 FUN_101b275e0(void)

{
  return 0x1b;
}



/* Entry: 101b275e8; end: 101b2766b;  */

void FUN_101b275e8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x101b277dc,param_2,FUN_101b277e0,param_2,0x101b27808,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 101b2766c; end: 101b2767f;  */

void FUN_101b2766c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_110445ea8;
  return;
}



/* Entry: 101b27680; end: 101b2776f;  */

void FUN_101b27680(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  *(undefined8 *)(unaff_x20 + 0x28) = param_3;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  func_0x000101b2efa4(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(puVar2);
  func_0x000107c61174();
  func_0x000101b2eae0();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  lVar3 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar3 != 0) {
    *(long *)(unaff_x20 + 0x30) = lVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101b27770);
  (*pcVar1)();
}



/* Entry: 101b27770; end: 101b2778b;  */

undefined ** FUN_101b27770(void)

{
  return &PTR_DAT_1130667f0;
}



/* Entry: 101b2778c; end: 101b277ab;  */

void FUN_101b2778c(void)

{
  func_0x000107c61168(&PTR_PTR_112e01ad8);
  return;
}



/* Entry: 101b277ac; end: 101b277df;  */

undefined1  [16] FUN_101b277ac(void)

{
  return ZEXT816(0x110445ee8);
}



/* Entry: 101b277e0; end: 101b27833;  */

void FUN_101b277e0(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101b27834; end: 101b296f3;  */

void FUN_101b27834(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 auStack_70 [2];
  
  func_0x000100083b20(auStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  func_0x000100083b20(&uStack_a0);
  func_0x000100083b20(&uStack_a8);
  func_0x000100083b20(&uStack_b0);
  func_0x000100083b20(&uStack_b8);
  func_0x000100083b20(&uStack_c0);
  func_0x000100083b20(&uStack_c8);
  func_0x000100083b20(&uStack_d0);
  func_0x000100083b20(&uStack_d8);
  func_0x000100083b20(&uStack_e0);
  func_0x000100083b20(&uStack_e8);
  func_0x000100083b20(&uStack_f0);
  func_0x000100083b20(&uStack_f8);
  func_0x000100083b20(&uStack_100);
  func_0x000100083b20(&uStack_108);
  func_0x000100083b20(&uStack_110);
  func_0x000100083b20(&uStack_118);
  func_0x000100083b20(&uStack_120);
  func_0x000100083b20(&uStack_128);
  func_0x000100083b20(&uStack_130);
  func_0x000100083b20(&uStack_138);
  func_0x000100083b20(&uStack_140);
  FUN_101b2990c();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x28) = uStack_78;
  *(undefined8 *)(param_2 + 0x30) = uStack_80;
  *(undefined8 *)(param_2 + 0x38) = uStack_88;
  *(undefined8 *)(param_2 + 0x40) = uStack_90;
  *(undefined8 *)(param_2 + 0x48) = uStack_98;
  *(undefined8 *)(param_2 + 0x50) = uStack_a0;
  *(undefined8 *)(param_2 + 0x58) = uStack_a8;
  *(undefined8 *)(param_2 + 0x60) = uStack_b0;
  *(undefined8 *)(param_2 + 0x68) = uStack_b8;
  *(undefined8 *)(param_2 + 0x70) = uStack_c0;
  *(undefined8 *)(param_2 + 0x78) = uStack_c8;
  *(undefined8 *)(param_2 + 0x80) = uStack_d0;
  *(undefined8 *)(param_2 + 0x88) = uStack_d8;
  *(undefined8 *)(param_2 + 0x90) = uStack_e0;
  *(undefined8 *)(param_2 + 0x98) = uStack_e8;
  *(undefined8 *)(param_2 + 0xa0) = uStack_f0;
  *(undefined8 *)(param_2 + 0xa8) = uStack_f8;
  *(undefined8 *)(param_2 + 0xb0) = uStack_100;
  *(undefined8 *)(param_2 + 0xb8) = uStack_108;
  *(undefined8 *)(param_2 + 0xc0) = uStack_110;
  *(undefined8 *)(param_2 + 200) = uStack_118;
  *(undefined8 *)(param_2 + 0xd0) = uStack_120;
  *(undefined8 *)(param_2 + 0xd8) = uStack_128;
  *(undefined8 *)(param_2 + 0xe0) = uStack_130;
  func_0x0001000285a8(0x112e01b58,&UNK_10da8e210);
  func_0x000107c610f8();
  uVar12 = uStack_78;
  func_0x000107c61174();
  uVar13 = uStack_80;
  func_0x000107c61174();
  uVar15 = uStack_88;
  func_0x000107c61174();
  uVar1 = uStack_90;
  func_0x000107c61174();
  uVar2 = uStack_98;
  func_0x000107c61174();
  uVar3 = uStack_a0;
  func_0x000107c61174();
  uVar4 = uStack_a8;
  func_0x000107c61174();
  uVar5 = uStack_b0;
  func_0x000107c61174();
  uVar6 = uStack_b8;
  func_0x000107c61174();
  uVar7 = uStack_c0;
  func_0x000107c61174();
  uVar8 = uStack_c8;
  func_0x000107c61174();
  uVar9 = uStack_d0;
  func_0x000107c61174();
  uVar16 = uStack_d8;
  func_0x000107c61174();
  uVar17 = uStack_e0;
  func_0x000107c61174();
  uVar18 = uStack_e8;
  func_0x000107c61174();
  uVar19 = uStack_f0;
  func_0x000107c61174();
  uVar20 = uStack_f8;
  func_0x000107c61174();
  uVar21 = uStack_100;
  func_0x000107c61174();
  uVar22 = uStack_108;
  func_0x000107c61174();
  uVar23 = uStack_110;
  func_0x000107c61174();
  uVar24 = uStack_118;
  func_0x000107c61174();
  uVar25 = uStack_120;
  func_0x000107c61174();
  uVar26 = uStack_128;
  func_0x000107c61174();
  uVar27 = uStack_130;
  func_0x000107c61174();
  uVar14 = uStack_138;
  func_0x000107c6157c(uStack_138);
  func_0x00010017da58();
  puVar10 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar14);
  *(undefined **)(param_2 + 0x18) = puVar10;
  func_0x0001000285a8(0x112e01b60,&UNK_10d9d32a0);
  func_0x000107c610f8();
  uVar14 = uStack_140;
  func_0x000107c6157c();
  func_0x00010017da58();
  puVar10 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar14);
  *(undefined **)(param_2 + 0x20) = puVar10;
  puVar10 = PTR_PTR_1126a8a30;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar10;
  func_0x000107c61174();
  uVar11 = auStack_70[0];
  func_0x000107c61174();
  uVar14 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010effcd30);
  func_0x000107c5a49c(puVar10);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174(puVar10);
  uVar30 = 0xd000000000000010;
  uVar14 = uVar30;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar10);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174(puVar10);
  uVar14 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef19650);
  func_0x000107c5a49c(puVar10);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174(puVar10);
  uVar14 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010effcd50);
  func_0x000107c5a49c(puVar10);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef19d60);
  func_0x000107c5a49c(puVar10);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010effcd80);
  func_0x000107c5a49c(puVar10);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef0fcc0);
  func_0x000107c5a49c(puVar10);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010efc12d0);
  func_0x000107c5a49c(puVar10);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = uVar30;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef12650);
  func_0x000107c5a49c(puVar10);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef19c70);
  func_0x000107c5a49c(puVar10);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef19c30);
  func_0x000107c5a49c(puVar10);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar14);
  uVar28 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(uVar28);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010effcda0);
  func_0x000107c5a49c(uVar28);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174(uVar28);
  uVar14 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef9e350);
  func_0x000107c5a49c(uVar28);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174(uVar28);
  uVar14 = 0x7672655373756c70;
  func_0x000107c5fadc(0x7672655373756c70,0xec00000073656369);
  func_0x000107c5a49c(uVar28);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar14);
  uVar14 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar14);
  uVar28 = 0x53656761726f7473;
  func_0x000107c5fadc(0x53656761726f7473,0xef73656369767265);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar28);
  uVar29 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef19df0);
  func_0x000107c5a49c(uVar29);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd00000000000002f;
  func_0x000107c5fadc(0xd00000000000002f,0x800000010effcdc0);
  func_0x000107c5a49c(uVar29);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd00000000000002f;
  func_0x000107c5fadc(0xd00000000000002f,0x800000010effcdf0);
  func_0x000107c5a49c(uVar29);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef130d0);
  func_0x000107c5a49c(uVar29);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar14);
  func_0x000107c61174(uVar23);
  func_0x000107c61174(uVar29);
  uVar14 = 0xd000000000000024;
  func_0x000107c5fadc(0xd000000000000024,0x800000010ef19da0);
  func_0x000107c5a49c(uVar29);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar14);
  func_0x000107c61174(uVar24);
  func_0x000107c61174(uVar29);
  uVar14 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010ef19d80);
  func_0x000107c5a49c(uVar29);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010ef2a780);
  func_0x000107c5a49c(uVar29);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef10a10);
  func_0x000107c5a49c(uVar29);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar30);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef19e10);
  func_0x000107c5a49c(uVar29);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar27);
  func_0x000107c61170(uVar14);
  uVar28 = *(undefined8 *)(param_2 + 0x18);
  func_0x000107c61174();
  func_0x000107c61174(uVar28);
  uVar14 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010ef3a810);
  func_0x000107c5a49c(uVar29);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar14);
  uVar28 = *(undefined8 *)(param_2 + 0x20);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000024;
  func_0x000107c5fadc(0xd000000000000024,0x800000010ef19e40);
  func_0x000107c5a49c(uVar29);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar14);
  func_0x000107c3e740(*(undefined8 *)(param_2 + 0x10));
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar27);
  func_0x000107c61574(uStack_138);
  func_0x000107c61574(uStack_140);
  *param_1 = param_2;
  return;
}



/* Entry: 101b296f4; end: 101b297ff;  */

void FUN_101b296f4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xe0));
  return;
}



/* Entry: 101b29800; end: 101b29807;  */

undefined8 FUN_101b29800(void)

{
  return 0x1b;
}



/* Entry: 101b29808; end: 101b2988b;  */

void FUN_101b29808(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x101b2994c,param_2,FUN_101b29950,param_2,FUN_101b29978,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 101b2988c; end: 101b298db;  */

undefined8 FUN_101b2988c(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 101b298dc; end: 101b2990b;  */

undefined ** FUN_101b298dc(void)

{
  return &PTR_DAT_1130667f0;
}



/* Entry: 101b2990c; end: 101b2992b;  */

void FUN_101b2990c(void)

{
  func_0x000107c61168(&PTR_PTR_112e01bd0);
  return;
}



/* Entry: 101b2992c; end: 101b2994f;  */

undefined1  [16] FUN_101b2992c(void)

{
  return ZEXT816(0x110445f88);
}



/* Entry: 101b29950; end: 101b29977;  */

void FUN_101b29950(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101b29978; end: 101b2997f;  */

undefined8 FUN_101b29978(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 101b29980; end: 101b29a3f;  */

void FUN_101b29980(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x000100083b20(&uStack_40);
  FUN_101b29d34();
  func_0x000107c613fc();
  FUN_101b29a40(uStack_38,uStack_40);
  *param_1 = param_2;
  return;
}



/* Entry: 101b29a40; end: 101b29b9f;  */

void FUN_101b29a40(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  puVar1 = PTR_PTR_1126a8a38;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010effce20);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010effce40);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174();
  uVar2 = uVar3;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar2;
  return;
}



/* Entry: 101b29ba0; end: 101b29bd3;  */

void FUN_101b29ba0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101b29bd4; end: 101b29c27;  */

void FUN_101b29bd4(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x20);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 101b29c28; end: 101b29c2f;  */

undefined8 FUN_101b29c28(void)

{
  return 0x1b;
}



/* Entry: 101b29c30; end: 101b29cb3;  */

void FUN_101b29c30(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  func_0x0001005d8744(1,0x101b29d84,param_2,FUN_101b29d88,param_2,FUN_101b29db0,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 101b29cb4; end: 101b29d03;  */

undefined8 FUN_101b29cb4(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 101b29d04; end: 101b29d33;  */

undefined ** FUN_101b29d04(void)

{
  return &PTR_DAT_1130667f0;
}


