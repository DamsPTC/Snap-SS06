/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1026e5b1c; end: 1026e5b3b; -[_TtC26MapInitialViewportServices26MapInitialViewportServices coordinator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026e5b1c(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112eb7c78));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1026e5b3c; end: 1026e5bd3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026e5b3c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112eb7c78) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1026e5bd4; end: 1026e5c33; -[_TtC26MapInitialViewportServices26MapInitialViewportServices init] */

void FUN_1026e5bd4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapInitialViewportServices.MapInitialViewportServices",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1026e5c00);
  (*pcVar1)();
}



/* Entry: 1026e5c34; end: 1026e5c43; -[_TtC26MapInitialViewportServices26MapInitialViewportServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026e5c34(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112eb7c78));
  return;
}



/* Entry: 1026e5c44; end: 1026e5c63;  */

void FUN_1026e5c44(void)

{
  func_0x000107c61168(&PTR_PTR_11285a800);
  return;
}



/* Entry: 1026e5c64; end: 1026e5c83; -[MapRoutingFactoryServices builder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026e5c64(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112eb7ca8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1026e5c84; end: 1026e5d1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026e5c84(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112eb7ca8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1026e5d1c; end: 1026e5d4f;  */

void FUN_1026e5d1c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1026e5d50; end: 1026e5d5f; -[MapRoutingFactoryServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026e5d50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112eb7ca8));
  return;
}



/* Entry: 1026e5d60; end: 1026e5d7f;  */

void FUN_1026e5d60(void)

{
  func_0x000107c61168(&PTR_PTR_11285a8c0);
  return;
}



/* Entry: 1026e5d80; end: 1026e6287;  */

long FUN_1026e5d80(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1026e6288; end: 1026e629b;  */

bool FUN_1026e6288(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1026e629c; end: 1026e6347;  */

void FUN_1026e629c(void)

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



/* Entry: 1026e6348; end: 1026e634b;  */

void FUN_1026e6348(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eb7d30 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dacf0c8;
  func_0x000107c61520(&UNK_10dacf0c8,&UNK_11053be88);
  puRam0000000112eb7d30 = puVar1;
  return;
}



/* Entry: 1026e634c; end: 1026e638b;  */

void FUN_1026e634c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eb7d30 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dacf0c8;
  func_0x000107c61520(&UNK_10dacf0c8,&UNK_11053be88);
  puRam0000000112eb7d30 = puVar1;
  return;
}



/* Entry: 1026e638c; end: 1026e638f;  */

void FUN_1026e638c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112eb7d38 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112eb7d40;
  func_0x00010002969c(0x112eb7d40,&UNK_10dacf130);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112eb7d38 = puVar2;
  return;
}



/* Entry: 1026e6390; end: 1026e63df;  */

void FUN_1026e6390(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112eb7d38 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112eb7d40;
  func_0x00010002969c(0x112eb7d40,&UNK_10dacf130);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112eb7d38 = puVar2;
  return;
}



/* Entry: 1026e63e0; end: 1026e641f;  */

void FUN_1026e63e0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112eb7d28;
  func_0x0001000285a8(0x112eb7d28,&UNK_10dacf0c0);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 1026e6420; end: 1026e6423;  */

void FUN_1026e6420(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eb7d48 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dacf138;
  func_0x000107c61520(&UNK_10dacf138,&UNK_11053be88);
  puRam0000000112eb7d48 = puVar1;
  return;
}



/* Entry: 1026e6424; end: 1026e6463;  */

void FUN_1026e6424(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eb7d48 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dacf138;
  func_0x000107c61520(&UNK_10dacf138,&UNK_11053be88);
  puRam0000000112eb7d48 = puVar1;
  return;
}



/* Entry: 1026e6464; end: 1026e6467;  */

void FUN_1026e6464(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eb7d50 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dacf0f0;
  func_0x000107c61520(&UNK_10dacf0f0,&UNK_11053be88);
  puRam0000000112eb7d50 = puVar1;
  return;
}



/* Entry: 1026e6468; end: 1026e64a7;  */

void FUN_1026e6468(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eb7d50 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dacf0f0;
  func_0x000107c61520(&UNK_10dacf0f0,&UNK_11053be88);
  puRam0000000112eb7d50 = puVar1;
  return;
}



/* Entry: 1026e64a8; end: 1026e64f3;  */

void FUN_1026e64a8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001026e64c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((ulong)(byte)(&UNK_10dacf0a0)
                          [(uint)((ulong)param_1 >> 0x3b) & 0x1e | (uint)param_1 >> 2 & 1] * 4 +
            0x1026e64cc))();
  return;
}



/* Entry: 1026e64f4; end: 1026e655b;  */

undefined8 * FUN_1026e64f4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  FUN_1026e64a8(uVar2);
  uVar1 = *param_1;
  *param_1 = uVar2;
  func_0x0001026ad3f8(uVar1);
  return param_1;
}



/* Entry: 1026e655c; end: 1026e666b;  */

int FUN_1026e655c(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x61 < param_2) && ((char)param_1[2] != '\0')) {
    return *param_1 + 0x62;
  }
  uVar1 = (uint)*(undefined8 *)param_1;
  uVar1 = (((uint)((ulong)*(undefined8 *)param_1 >> 0x39) & 0x78 | uVar1 & 4) >> 2 |
          (uVar1 & 3) << 5) ^ 0x7f;
  if (0x60 < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1026e666c; end: 1026e6703;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026e666c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112eb7d80) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1026e6704; end: 1026e675b; -[_TtC14MapRouterScope14MapRouterScope initWithViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026e6704(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112eb7d80) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 1026e675c; end: 1026e67bb; -[_TtC14MapRouterScope14MapRouterScope init] */

void FUN_1026e675c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapRouterScope.MapRouterScope",0x1d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1026e6788);
  (*pcVar1)();
}



/* Entry: 1026e67bc; end: 1026e67cb; -[_TtC14MapRouterScope14MapRouterScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026e67bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112eb7d80));
  return;
}



/* Entry: 1026e67cc; end: 1026e67eb;  */

void FUN_1026e67cc(void)

{
  func_0x000107c61168(&PTR_PTR_11285a980);
  return;
}



/* Entry: 1026e67ec; end: 1026e680b;  */

void FUN_1026e67ec(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbff8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocObject_11034f218)();
  return;
}



/* Entry: 1026e680c; end: 1026e6837;  */

ulong FUN_1026e680c(void)

{
  ulong unaff_x20;
  
  func_0x000107c6157c();
  return unaff_x20 | 0xb000000000000004;
}



/* Entry: 1026e6838; end: 1026e6857;  */

void FUN_1026e6838(void)

{
  func_0x000107c61168(&PTR_PTR_112eb7df0);
  return;
}



/* Entry: 1026e6858; end: 1026e68bb;  */

void FUN_1026e6858(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  return;
}



/* Entry: 1026e68bc; end: 1026e68ef;  */

void FUN_1026e68bc(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1026e68f0; end: 1026e691b;  */

ulong FUN_1026e68f0(void)

{
  ulong unaff_x20;
  
  func_0x000107c6157c();
  return unaff_x20 | 0x4000000000000004;
}



/* Entry: 1026e691c; end: 1026e693b;  */

void FUN_1026e691c(void)

{
  func_0x000107c61168(&PTR_PTR_112eb7e88);
  return;
}



/* Entry: 1026e693c; end: 1026e6a33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026e693c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eb7ef8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eb7f00);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1026e6a34; end: 1026e6ac3; -[_TtC14MapRouterScope12AddressRoute initWithAddress:senderID:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026e6a34(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  func_0x000107c5faec();
  uVar3 = param_2;
  func_0x000107c5faec();
  puVar1 = (undefined8 *)(param_1 + _DAT_112eb7ef8);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(param_1 + _DAT_112eb7f00);
  *puVar1 = param_4;
  puVar1[1] = uVar3;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1026e6ac4; end: 1026e6b23; -[_TtC14MapRouterScope12AddressRoute init] */

void FUN_1026e6ac4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapRouterScope.AddressRoute",0x1b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1026e6af0);
  (*pcVar1)();
}



/* Entry: 1026e6b24; end: 1026e6b8f; -[_TtC14MapRouterScope12AddressRoute .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001026e6b44: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001026e6b48) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026e6b24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112eb7ef8 + 8))
  ;
  return;
}



/* Entry: 1026e6b90; end: 1026e6baf;  */

void FUN_1026e6b90(void)

{
  func_0x000107c61168(&PTR_PTR_11285aa40);
  return;
}



/* Entry: 1026e6bb0; end: 1026e6beb; -[_TtC14MapRouterScope25ArrivalNotificationsRoute init] */

void FUN_1026e6bb0(undefined8 param_1)

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



/* Entry: 1026e6bec; end: 1026e6c5b;  */

void FUN_1026e6bec(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1026e6c5c; end: 1026e6c97;  */

void FUN_1026e6c5c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 1026e6c98; end: 1026e6cf7;  */

void FUN_1026e6c98(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1026e6cf8; end: 1026e6d6f;  */

void FUN_1026e6cf8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_3;
  *(undefined8 *)(unaff_x20 + 0x18) = param_4;
  *(undefined8 *)(unaff_x20 + 0x20) = param_1;
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  *(undefined8 *)(unaff_x20 + 0x40) = param_7;
  *(undefined8 *)(unaff_x20 + 0x48) = param_8;
  return;
}



/* Entry: 1026e6d70; end: 1026e6de7;  */

void FUN_1026e6d70(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1026e6de8; end: 1026e6ebf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026e6de8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eb80b8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112eb80c0) = param_3;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1026e6ec0; end: 1026e6f33; -[_TtC14MapRouterScope15CoordinateRoute initWithCenter:zoomLevel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026e6ec0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_4;
  func_0x000107c614f0();
  puVar1 = (undefined8 *)(param_4 + _DAT_112eb80b8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(param_4 + _DAT_112eb80c0) = param_3;
  lStack_50 = param_4;
  lStack_48 = lVar2;
  func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1026e6f34; end: 1026e6fcf; -[_TtC14MapRouterScope15CoordinateRoute init] */

void FUN_1026e6f34(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapRouterScope.CoordinateRoute",0x1e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1026e6f60);
  (*pcVar1)();
}



/* Entry: 1026e6fd0; end: 1026e701b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026e6fd0(undefined1 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined1 *)(unaff_x20 + _DAT_112eb80f0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1026e701c; end: 1026e70b7; +[_TtC14MapRouterScope12DefaultRoute defaultViewport:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026e701c(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_112eb80f0) = param_3;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1026e70b8; end: 1026e7153; -[_TtC14MapRouterScope12DefaultRoute init] */

void FUN_1026e70b8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapRouterScope.DefaultRoute",0x1b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1026e70e4);
  (*pcVar1)();
}



/* Entry: 1026e7154; end: 1026e72eb;  */

int FUN_1026e7154(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0x7e < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 0x81) {
      iVar2 = 4;
    }
    if (param_2 + 0x81 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1026e71d0;
        goto LAB_1026e71b4;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1026e71b4:
      return ((uint)*param_1 | uVar1 << 8) - 0x81;
    }
  }
LAB_1026e71d0:
  uVar1 = (*param_1 & 0x7e | (uint)(*param_1 >> 7)) ^ 0x7f;
  if (0x7d < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1026e72ec; end: 1026e742b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026e72ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eb8120);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1[2] = param_1;
  puVar1[3] = param_2;
  *(undefined1 *)(puVar1 + 4) = 1;
  *(undefined8 *)(unaff_x20 + _DAT_112eb8128) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112eb8130) = param_6;
  func_0x000107c61154(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1026e742c; end: 1026e756b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026e742c(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eb8120);
  *puVar1 = param_1;
  puVar1[1] = param_2 & 1;
  puVar1[2] = param_5;
  puVar1[3] = param_6;
  *(undefined1 *)(puVar1 + 4) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112eb8128) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112eb8130) = param_4;
  func_0x000107c61154(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1026e756c; end: 1026e765f; -[_TtC14MapRouterScope15FocusCardsRoute initWithFriendIDs:includeClusterFriends:source:sourceSessionID:reactionEmojis:reactionImages:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026e756c(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,long param_8)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_60;
  long lStack_58;
  
  lVar3 = param_1;
  func_0x000107c614f0();
  func_0x000107c5fc54(param_3,PTR___sSSN_11034da80);
  if (param_7 != 0) {
    func_0x000107c5fc54(param_7,PTR___sSSN_11034da80);
  }
  lVar4 = 0;
  if (param_8 != 0) {
    func_0x000100de1f70();
    func_0x000107c5fc54(param_8,lVar4);
    lVar4 = param_8;
  }
  puVar1 = (undefined8 *)(param_1 + _DAT_112eb8120);
  *puVar1 = param_3;
  puVar1[1] = param_4 & 0xffffffff;
  puVar1[2] = param_7;
  puVar1[3] = lVar4;
  *(undefined1 *)(puVar1 + 4) = 0;
  *(undefined8 *)(param_1 + _DAT_112eb8128) = param_5;
  *(undefined8 *)(param_1 + _DAT_112eb8130) = param_6;
  puVar2 = PTR_s_init_1125d9248;
  lStack_60 = param_1;
  lStack_58 = lVar3;
  func_0x000107c61174(param_6);
  func_0x000107c61154(&lStack_60,puVar2);
  return;
}



/* Entry: 1026e7660; end: 1026e76bf; -[_TtC14MapRouterScope15FocusCardsRoute init] */

void FUN_1026e7660(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapRouterScope.FocusCardsRoute",0x1e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1026e768c);
  (*pcVar1)();
}



/* Entry: 1026e76c0; end: 1026e772b; -[_TtC14MapRouterScope15FocusCardsRoute .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026e76c0(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112eb8120);
  func_0x0001026a7af4(*puVar1,puVar1[1],puVar1[2],puVar1[3],*(undefined1 *)(puVar1 + 4));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112eb8130));
  return;
}



/* Entry: 1026e772c; end: 1026e774b;  */

void FUN_1026e772c(void)

{
  func_0x000107c61168(&PTR_PTR_11285ad40);
  return;
}



/* Entry: 1026e774c; end: 1026e777b;  */

/* WARNING: Possible PIC construction at 0x0001026e7760: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001026e7764) */

void FUN_1026e774c(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*param_1);
  return;
}



/* Entry: 1026e777c; end: 1026e784b;  */

undefined8 * FUN_1026e777c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  uVar1 = param_2[2];
  uVar2 = param_2[3];
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  return param_1;
}



/* Entry: 1026e784c; end: 1026e789f;  */

undefined8 * FUN_1026e784c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c6142c(uVar1);
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  func_0x000107c6142c(param_1[2]);
  uVar1 = param_1[3];
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 1026e78a0; end: 1026e793f;  */

int FUN_1026e78a0(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[4] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1026e7940; end: 1026e7973;  */

undefined8 * FUN_1026e7940(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar1;
  func_0x000107c61434();
  return param_1;
}



/* Entry: 1026e7974; end: 1026e79cf;  */

undefined8 * FUN_1026e7974(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  return param_1;
}



/* Entry: 1026e79d0; end: 1026e7a0b;  */

undefined8 * FUN_1026e79d0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  return param_1;
}



/* Entry: 1026e7a0c; end: 1026e7ab7;  */

int FUN_1026e7a0c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[8] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1026e7ab8; end: 1026e7b87;  */

undefined8 * FUN_1026e7ab8(undefined8 *param_1,undefined8 *param_2)

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
  func_0x0001026a7ab0(uVar1,uVar3,uVar2,uVar4,uVar5);
  *param_1 = uVar1;
  param_1[1] = uVar3;
  param_1[2] = uVar2;
  param_1[3] = uVar4;
  *(undefined1 *)(param_1 + 4) = uVar5;
  return param_1;
}



/* Entry: 1026e7b88; end: 1026e7bcf;  */

undefined8 * FUN_1026e7b88(undefined8 *param_1,undefined8 *param_2)

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
  func_0x0001026a7af4(uVar5,uVar1,uVar2,uVar6,uVar4);
  return param_1;
}



/* Entry: 1026e7bd0; end: 1026e7c8f;  */

int FUN_1026e7bd0(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && (*(char *)((long)param_1 + 0x21) != '\0')) {
    return *param_1 + 0xff;
  }
  uVar1 = *(byte *)(param_1 + 8) ^ 0xff;
  if (*(byte *)(param_1 + 8) < 2) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1026e7c90; end: 1026e7d57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026e7c90(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112eb8160) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112eb8168) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1026e7d58; end: 1026e7dc7; -[_TtC14MapRouterScope16FocusedDropRoute initWithDrop:openSource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026e7d58(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112eb8160) = param_3;
  *(undefined8 *)(param_1 + _DAT_112eb8168) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_40,puVar1);
  return;
}



/* Entry: 1026e7dc8; end: 1026e7e27; -[_TtC14MapRouterScope16FocusedDropRoute init] */

void FUN_1026e7dc8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapRouterScope.FocusedDropRoute",0x1f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1026e7df4);
  (*pcVar1)();
}



/* Entry: 1026e7e28; end: 1026e7e37; -[_TtC14MapRouterScope16FocusedDropRoute .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026e7e28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112eb8160));
  return;
}



/* Entry: 1026e7e38; end: 1026e7e73;  */

ulong FUN_1026e7e38(void)

{
  ulong unaff_x20;
  
  func_0x000107c61174();
  return unaff_x20 | 0x7000000000000000;
}



/* Entry: 1026e7e74; end: 1026e7ec3;  */

void FUN_1026e7e74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  return;
}



/* Entry: 1026e7ec4; end: 1026e7eef;  */

void FUN_1026e7ec4(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1026e7ef0; end: 1026e7f17;  */

ulong FUN_1026e7ef0(void)

{
  ulong unaff_x20;
  
  func_0x000107c6157c();
  return unaff_x20 | 0xd000000000000000;
}



/* Entry: 1026e7f18; end: 1026e7f37;  */

void FUN_1026e7f18(void)

{
  func_0x000107c61168(&PTR_PTR_112eb81d8);
  return;
}



/* Entry: 1026e7f38; end: 1026e7f57;  */

void FUN_1026e7f38(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbff8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocObject_11034f218)();
  return;
}



/* Entry: 1026e7f58; end: 1026e7f83;  */

ulong FUN_1026e7f58(void)

{
  ulong unaff_x20;
  
  func_0x000107c6157c();
  return unaff_x20 | 0xc000000000000004;
}



/* Entry: 1026e7f84; end: 1026e7fa3;  */

void FUN_1026e7f84(void)

{
  func_0x000107c61168(&PTR_PTR_112eb8280);
  return;
}



/* Entry: 1026e7fa4; end: 1026e8007;  */

void FUN_1026e7fa4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_5;
  *(undefined8 *)(unaff_x20 + 0x18) = param_6;
  *(undefined8 *)(unaff_x20 + 0x20) = param_1;
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  *(undefined8 *)(unaff_x20 + 0x30) = param_3;
  *(undefined8 *)(unaff_x20 + 0x38) = param_4;
  return;
}



/* Entry: 1026e8008; end: 1026e802b;  */

void FUN_1026e8008(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1026e802c; end: 1026e8057;  */

ulong FUN_1026e802c(void)

{
  ulong unaff_x20;
  
  func_0x000107c6157c();
  return unaff_x20 | 0x6000000000000004;
}



/* Entry: 1026e8058; end: 1026e8077;  */

void FUN_1026e8058(void)

{
  func_0x000107c61168(&PTR_PTR_112eb8318);
  return;
}



/* Entry: 1026e8078; end: 1026e80b3; -[_TtC14MapRouterScope17HomeSettingsRoute init] */

void FUN_1026e8078(undefined8 param_1)

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



/* Entry: 1026e80b4; end: 1026e8123;  */

void FUN_1026e80b4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1026e8124; end: 1026e815f; -[_TtC14MapRouterScope29InferredSchoolOnboardingRoute init] */

void FUN_1026e8124(undefined8 param_1)

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



/* Entry: 1026e8160; end: 1026e8193;  */

void FUN_1026e8160(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1026e8194; end: 1026e81bf;  */

ulong FUN_1026e8194(void)

{
  ulong unaff_x20;
  
  func_0x000107c61174();
  return unaff_x20 | 0x5000000000000004;
}



/* Entry: 1026e81c0; end: 1026e81df;  */

void FUN_1026e81c0(void)

{
  func_0x000107c61168(&PTR_PTR_11285af90);
  return;
}



/* Entry: 1026e81e0; end: 1026e81ef;  */

void FUN_1026e81e0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1026e81f0; end: 1026e821b;  */

ulong FUN_1026e81f0(void)

{
  ulong unaff_x20;
  
  func_0x000107c6157c();
  return unaff_x20 | 0xa000000000000004;
}



/* Entry: 1026e821c; end: 1026e823b;  */

void FUN_1026e821c(void)

{
  func_0x000107c61168(&PTR_PTR_112eb8420);
  return;
}



/* Entry: 1026e823c; end: 1026e83ff;  */

int FUN_1026e823c(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfc < param_2) {
    param_2 = param_2 + 3;
    uVar3 = 2;
    if (0xfffeff < param_2) {
      uVar3 = 4;
    }
    if (param_2 >> 8 < 0xff) {
      uVar3 = 1;
    }
    uVar1 = 0;
    if (0xff < param_2) {
      uVar1 = uVar3;
    }
    if (uVar1 < 2) {
      if ((uVar1 != 0) && (uVar3 = (uint)param_1[1], param_1[1] != 0)) goto LAB_1026e82a4;
    }
    else if (uVar1 == 2) {
      uVar3 = (uint)*(ushort *)(param_1 + 1);
      if (*(ushort *)(param_1 + 1) != 0) {
LAB_1026e82a4:
        return ((uint)*param_1 | uVar3 << 8) - 3;
      }
    }
    else {
      uVar3 = *(uint *)(param_1 + 1);
      if (uVar3 != 0) goto LAB_1026e82a4;
    }
  }
  uVar3 = 0;
  if (1 < *param_1) {
    uVar3 = (*param_1 + 0x7ffffffe & 0x7fffffff) + 1;
  }
  iVar2 = 0;
  if (1 < uVar3) {
    iVar2 = uVar3 - 2;
  }
  return iVar2;
}



/* Entry: 1026e8400; end: 1026e842b;  */

ulong FUN_1026e8400(void)

{
  ulong unaff_x20;
  
  func_0x000107c6157c();
  return unaff_x20 | 0xd000000000000004;
}



/* Entry: 1026e842c; end: 1026e844b;  */

void FUN_1026e842c(void)

{
  func_0x000107c61168(&PTR_PTR_112eb84c0);
  return;
}


