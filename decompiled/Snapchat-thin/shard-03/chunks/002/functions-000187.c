/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1026b93e4; end: 1026b953f;  */

void FUN_1026b93e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112eb4e60,&UNK_10dacb8d8);
  puVar1 = &UNK_110537998;
  func_0x000107c613fc(&UNK_110537998,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x0001000823a8(FUN_1026b9540,puVar1);
  return;
}



/* Entry: 1026b9540; end: 1026b954b;  */

void FUN_1026b9540(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000100083b20(&uStack_48,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                      ,*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  FUN_1026b9610();
  func_0x000107c610f8();
  func_0x000107c6157c(uVar1);
  uVar2 = uStack_48;
  FUN_1026b973c(uStack_48,uStack_50,uStack_58,uVar1);
  func_0x000107c61170(uStack_48);
  func_0x000107c61574(uStack_50);
  func_0x000107c61574(uStack_58);
  *param_1 = uVar2;
  return;
}



/* Entry: 1026b954c; end: 1026b957f; -[_TtC32MapSDKDataBridgingImplementation17FullMapDataBridge start] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026b954c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1026b9acc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1026b9580; end: 1026b95df; -[_TtC32MapSDKDataBridgingImplementation17FullMapDataBridge init] */

void FUN_1026b9580(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapSDKDataBridgingImplementation.FullMapDataBridge",0x32,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1026b95ac);
  (*pcVar1)();
}



/* Entry: 1026b95e0; end: 1026b960f; -[_TtC32MapSDKDataBridgingImplementation17FullMapDataBridge .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026b95e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112eb4e98));
  return;
}



/* Entry: 1026b9610; end: 1026b962f;  */

void FUN_1026b9610(void)

{
  func_0x000107c61168(&PTR_PTR_112858d18);
  return;
}



/* Entry: 1026b9630; end: 1026b973b;  */

void FUN_1026b9630(long param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long *unaff_x20;
  ulong uVar6;
  long lVar7;
  
  uVar6 = *(ulong *)(param_1 + 0x10);
  lVar5 = *unaff_x20;
  lVar7 = *(long *)(lVar5 + 0x10);
  if (SCARRY8(lVar7,uVar6)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1026b9730);
    (*pcVar1)();
  }
  lVar2 = lVar5;
  func_0x000107c61558();
  if (((int)lVar2 == 0) ||
     (uVar4 = *(ulong *)(lVar5 + 0x18) >> 1, (long)uVar4 < (long)(lVar7 + uVar6))) {
    FUN_1026bb9dc();
    uVar4 = *(ulong *)(lVar2 + 0x18) >> 1;
    lVar7 = *(long *)(param_1 + 0x10);
    lVar5 = lVar2;
  }
  else {
    lVar7 = *(long *)(param_1 + 0x10);
  }
  if (lVar7 == 0) {
    func_0x000107c6142c(param_1);
    if (uVar6 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1026b9734);
      (*pcVar1)();
    }
  }
  else {
    lVar7 = *(long *)(lVar5 + 0x10);
    if (uVar4 - lVar7 < uVar6) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1026b9738);
      (*pcVar1)();
    }
    uVar3 = 0x112eb4ec8;
    func_0x0001000285a8(0x112eb4ec8,&UNK_10dacbc80);
    func_0x000107c6140c(lVar5 + lVar7 * 0x28 + 0x20,param_1 + 0x20,uVar6,uVar3);
    func_0x000107c6142c(param_1);
    if (uVar6 != 0) {
      if (SCARRY8(*(long *)(lVar5 + 0x10),uVar6)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1026b973c);
        (*pcVar1)();
      }
      *(ulong *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + uVar6;
    }
  }
  *unaff_x20 = lVar5;
  return;
}



/* Entry: 1026b973c; end: 1026b9acb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026b973c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  ulong unaff_x20;
  ulong uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined1 auStack_a8 [16];
  ulong uStack_98;
  undefined *apuStack_90 [5];
  undefined *puStack_68;
  
  uVar2 = unaff_x20;
  func_0x000107c614f0();
  func_0x0001048575f8();
  puVar3 = &UNK_10dacba38;
  func_0x000107c614e0(&UNK_10dacba38);
  if (uVar2 >> 0x3e == 0) {
    uVar8 = *(ulong *)((uVar2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar8 = uVar2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar2) {
      uVar8 = uVar2;
    }
    func_0x000107c60480();
  }
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar8 == 0) {
    func_0x000107c61574(puVar3);
    func_0x000107c6142c();
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_1026be2f4(0,uVar8 & ((long)uVar8 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar8 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1026b9ac8);
      (*pcVar1)();
    }
    uVar10 = 0;
    puVar7 = puStack_68;
    do {
      if ((uVar2 & 0xc000000000000001) == 0) {
        uVar5 = *(ulong *)(uVar2 + uVar10 * 8 + 0x20);
        func_0x000107c6157c(uVar5);
      }
      else {
        uVar5 = uVar10;
        FUN_1026c5b48(uVar10,uVar2);
      }
      uStack_98 = uVar5;
      func_0x000107c6157c(uVar5);
      func_0x000107c614bc(apuStack_90,&uStack_98,puVar3);
      func_0x000107c61578(uVar5,2);
      uVar5 = *(ulong *)(puVar7 + 0x10);
      puStack_68 = puVar7;
      if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar5) {
        FUN_1026be2f4(1 < *(ulong *)(puVar7 + 0x18),uVar5 + 1,1);
      }
      puVar7 = puStack_68;
      uVar10 = uVar10 + 1;
      *(ulong *)(puStack_68 + 0x10) = uVar5 + 1;
      FUN_1026b92a0(apuStack_90,puStack_68 + uVar5 * 0x28 + 0x20);
    } while (uVar8 != uVar10);
    func_0x000107c61574(puVar3);
    func_0x000107c6142c();
    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  func_0x0001048575f8();
  puVar3 = &UNK_10dacba38;
  func_0x000107c614e0(&UNK_10dacba38);
  if (uVar2 >> 0x3e == 0) {
    uVar8 = *(ulong *)((uVar2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar8 = uVar2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar2) {
      uVar8 = uVar2;
    }
    func_0x000107c60480();
  }
  if (uVar8 == 0) {
    func_0x000107c61574(puVar3);
    func_0x000107c6142c(uVar2);
    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puStack_68 = puVar9;
    FUN_1026be2f4(0,uVar8 & ((long)uVar8 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar8 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1026b9acc);
      (*pcVar1)();
    }
    uVar10 = 0;
    puVar9 = puStack_68;
    do {
      if ((uVar2 & 0xc000000000000001) == 0) {
        uVar5 = *(ulong *)(uVar2 + uVar10 * 8 + 0x20);
        func_0x000107c6157c(uVar5);
      }
      else {
        uVar5 = uVar10;
        FUN_1026c5b48(uVar10,uVar2);
      }
      uStack_98 = uVar5;
      func_0x000107c6157c(uVar5);
      func_0x000107c614bc(apuStack_90,&uStack_98,puVar3);
      func_0x000107c61578(uVar5,2);
      uVar5 = *(ulong *)(puVar9 + 0x10);
      puStack_68 = puVar9;
      if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar5) {
        FUN_1026be2f4(1 < *(ulong *)(puVar9 + 0x18),uVar5 + 1,1);
      }
      puVar9 = puStack_68;
      uVar10 = uVar10 + 1;
      *(ulong *)(puStack_68 + 0x10) = uVar5 + 1;
      FUN_1026b92a0(apuStack_90,puStack_68 + uVar5 * 0x28 + 0x20);
    } while (uVar8 != uVar10);
    func_0x000107c61574(puVar3);
    func_0x000107c6142c(uVar2);
  }
  apuStack_90[0] = puVar7;
  FUN_1026b9630(puVar9);
  puVar3 = apuStack_90[0];
  uVar6 = *(undefined8 *)(param_1 + _DAT_112eb9b90);
  lVar4 = 0;
  func_0x0001026b9dec();
  func_0x000107c613fc();
  *(undefined8 *)(lVar4 + 0x28) = 0;
  *(undefined8 *)(lVar4 + 0x30) = 0;
  *(undefined8 *)(lVar4 + 0x10) = uVar6;
  *(undefined8 *)(lVar4 + 0x18) = param_4;
  *(undefined **)(lVar4 + 0x20) = puVar3;
  *(long *)(unaff_x20 + _DAT_112eb4e98) = lVar4;
  puVar3 = PTR_s_init_1125d9248;
  func_0x000107c61174(uVar6);
  func_0x000107c61154(auStack_a8,puVar3);
  return;
}



/* Entry: 1026b9acc; end: 1026b9c93;  */

void FUN_1026b9acc(void)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  char *pcVar4;
  long *plVar5;
  undefined *puVar6;
  code *pcVar7;
  undefined8 uVar8;
  long unaff_x20;
  long lVar9;
  long lVar10;
  undefined1 auStack_80 [24];
  undefined8 uStack_68;
  long lStack_60;
  undefined *puStack_58;
  
  if (*(long *)(unaff_x20 + 0x28) == 0) {
    lVar10 = *(long *)(unaff_x20 + 0x20);
    lVar9 = *(long *)(lVar10 + 0x10);
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (lVar9 != 0) {
      puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x0001026be310(0,lVar9,0);
      lVar10 = lVar10 + 0x20;
      do {
        puVar6 = puStack_58;
        FUN_1026b9e0c(lVar10,auStack_80);
        lVar2 = lStack_60;
        uVar8 = uStack_68;
        func_0x0001000a8868(auStack_80,uStack_68);
        (**(code **)(lVar2 + 8))(uVar8,lVar2);
        func_0x0001000834e4(auStack_80);
        uVar1 = *(ulong *)(puVar6 + 0x10);
        puStack_58 = puVar6;
        if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar1) {
          func_0x0001026be310(1 < *(ulong *)(puVar6 + 0x18),uVar1 + 1,1);
        }
        *(ulong *)(puStack_58 + 0x10) = uVar1 + 1;
        *(undefined8 *)(puStack_58 + uVar1 * 8 + 0x20) = uVar8;
        lVar10 = lVar10 + 0x28;
        lVar9 = lVar9 + -1;
        puVar6 = puStack_58;
      } while (lVar9 != 0);
    }
    func_0x0001000285a8(0x112eb4f88,&UNK_10dacbaa8);
    puVar3 = puVar6;
    func_0x0001000c19f0(puVar6);
    func_0x000107c6142c(puVar6);
    pcVar4 = "start()";
    func_0x0001000c10c0();
    func_0x000107c61180();
    plVar5 = (long *)pcVar4;
    func_0x000100471e0c();
    func_0x000107c61574(puVar3);
    func_0x000107c615e8(pcVar4);
    puVar6 = &UNK_110537a08;
    func_0x000107c613fc(&UNK_110537a08,0x18,7);
    func_0x000107c61644(puVar6 + 0x10);
    pcVar7 = FUN_1026b9e50;
    puVar3 = puVar6;
    (**(code **)(*plVar5 + 0x60))();
    func_0x000107c61574(plVar5);
    func_0x000107c61574(puVar6);
    uVar8 = *(undefined8 *)(unaff_x20 + 0x28);
    *(code **)(unaff_x20 + 0x28) = pcVar7;
    *(undefined **)(unaff_x20 + 0x30) = puVar3;
    func_0x000107c615e8(uVar8);
  }
  return;
}



/* Entry: 1026b9c94; end: 1026b9d27;  */

void FUN_1026b9c94(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_70 [16];
  long lStack_60;
  undefined8 uStack_58;
  undefined1 auStack_48 [24];
  
  uVar1 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    func_0x000107c5fcec(0);
    lStack_60 = param_2;
    uStack_58 = uVar1;
    func_0x000100f7a598(FUN_1026b9e58,auStack_70,
                        "MapSDKDataBridgingImplementation/MapDataBridgeInternal.swift",0x3c,2,0x28);
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 1026b9d28; end: 1026b9daf;  */

void FUN_1026b9d28(long param_1,undefined8 param_2)

{
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  long lStack_48;
  
  func_0x000100083b20(auStack_68);
  func_0x0001000a8868(auStack_68,uStack_50);
  (**(code **)(lStack_48 + 8))(param_2,uStack_50,lStack_48);
  func_0x0001000834e4(auStack_68);
  func_0x000107c5d698(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 1026b9db0; end: 1026b9e0b;  */

void FUN_1026b9db0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1026b9e0c; end: 1026b9e4f;  */

long FUN_1026b9e0c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 1026b9e50; end: 1026b9e57;  */

void FUN_1026b9e50(undefined8 *param_1)

{
  long lVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_70 [16];
  long lStack_60;
  undefined8 uStack_58;
  undefined1 auStack_48 [24];
  
  uVar2 = *param_1;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    func_0x000107c5fcec(0);
    lStack_60 = lVar1;
    uStack_58 = uVar2;
    func_0x000100f7a598(FUN_1026b9e58,auStack_70,
                        "MapSDKDataBridgingImplementation/MapDataBridgeInternal.swift",0x3c,2,0x28);
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 1026b9e58; end: 1026b9e6f;  */

void FUN_1026b9e58(void)

{
  long unaff_x20;
  
  FUN_1026b9d28(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 1026b9e70; end: 1026b9ee3;  */

long FUN_1026b9e70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  puVar2 = PTR_PTR_1126aad70;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar1 = PTR___swiftEmptySetSingleton_11034f1d8;
  *(undefined **)(unaff_x20 + 0x10) = puVar2;
  *(undefined8 *)(unaff_x20 + 0x28) = param_3;
  *(undefined **)(unaff_x20 + 0x30) = puVar1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  return unaff_x20;
}



/* Entry: 1026b9ee4; end: 1026ba06f;  */

void FUN_1026b9ee4(double param_1,ulong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  double dVar6;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  func_0x000107c44af0();
  if ((param_2 & 1) == 0) {
    FUN_1026ba0e4();
    uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
    uVar4 = uVar3;
    func_0x000107c5fadc(uVar3,uVar1);
    uVar2 = param_2;
    func_0x000107c5fadc(param_2,param_3);
    func_0x000105edc518(uVar5,uVar4,uVar2,1);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar2);
    func_0x000107c61428(unaff_x20 + 0x30,auStack_78,0,0);
    uVar4 = *(undefined8 *)(unaff_x20 + 0x30);
    func_0x000107c61434(uVar4);
    uVar2 = param_2;
    func_0x0001000f66f0(param_2,param_3,uVar4);
    func_0x000107c6142c(uVar4);
    if ((uVar2 & 1) == 0) {
      func_0x000107c61428(unaff_x20 + 0x30,auStack_a0,0x21,0);
      func_0x000107c61434(param_3);
      func_0x000100403b00(auStack_88,param_2,param_3);
      func_0x000107c614a8(auStack_a0);
      func_0x000107c6142c(uStack_80);
      func_0x000107c6071c();
      dVar6 = *(double *)(unaff_x20 + 0x18);
      func_0x000107c5fadc(uVar3,uVar1);
      func_0x000107c5fadc(param_2,param_3);
      func_0x000107c6142c(param_3);
      func_0x000105edc2a8(param_1 - dVar6,uVar5,uVar3,param_2);
      func_0x000107c61170(uVar3);
      func_0x000107c61170(param_2);
    }
    else {
      func_0x000107c6142c(param_3);
    }
  }
  return;
}



/* Entry: 1026ba070; end: 1026ba0a3;  */

void FUN_1026ba070(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1026ba0a4; end: 1026ba0c3;  */

void FUN_1026ba0a4(void)

{
  FUN_1026b9ee4();
  return;
}



/* Entry: 1026ba0c4; end: 1026ba0e3;  */

void FUN_1026ba0c4(void)

{
  func_0x000107c61168(&PTR_PTR_112eb4fd0);
  return;
}



/* Entry: 1026ba0e4; end: 1026badd3;  */

undefined1  [16] FUN_1026ba0e4(void)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined1 auVar10 [16];
  
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar2 = unaff_x20;
  func_0x000107c448b8();
  if ((int)lVar2 != 0) {
    puVar3 = (undefined *)0x0;
    func_0x0001000d182c(0,1,1,PTR___swiftEmptyArrayStorage_11034f1c8);
    uVar1 = *(ulong *)(puVar3 + 0x10);
    puVar8 = puVar3;
    if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar1) {
      puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar3 + 0x18));
      func_0x0001000d182c(puVar8,uVar1 + 1,1,puVar3);
    }
    *(ulong *)(puVar8 + 0x10) = uVar1 + 1;
    *(undefined8 *)(puVar8 + uVar1 * 0x10 + 0x20) = 0x73646e65697246;
    *(undefined8 *)(puVar8 + uVar1 * 0x10 + 0x28) = 0xe700000000000000;
  }
  lVar2 = unaff_x20;
  func_0x000107c448b4();
  if ((int)lVar2 != 0) {
    puVar3 = puVar8;
    func_0x000107c61558();
    puVar7 = puVar8;
    if (((ulong)puVar3 & 1) == 0) {
      puVar7 = (undefined *)0x0;
      func_0x0001000d182c(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8);
    }
    uVar1 = *(ulong *)(puVar7 + 0x10);
    puVar8 = puVar7;
    if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar1) {
      puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
      func_0x0001000d182c(puVar8,uVar1 + 1,1,puVar7);
    }
    *(ulong *)(puVar8 + 0x10) = uVar1 + 1;
    *(undefined8 *)(puVar8 + uVar1 * 0x10 + 0x20) = 0x6546646e65697246;
    *(undefined8 *)(puVar8 + uVar1 * 0x10 + 0x28) = 0xea00000000006465;
  }
  lVar2 = unaff_x20;
  func_0x000107c44c08();
  if ((int)lVar2 != 0) {
    puVar3 = puVar8;
    func_0x000107c61558();
    puVar7 = puVar8;
    if (((ulong)puVar3 & 1) == 0) {
      puVar7 = (undefined *)0x0;
      func_0x0001000d182c(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8);
    }
    uVar1 = *(ulong *)(puVar7 + 0x10);
    puVar8 = puVar7;
    if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar1) {
      puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
      func_0x0001000d182c(puVar8,uVar1 + 1,1,puVar7);
    }
    *(ulong *)(puVar8 + 0x10) = uVar1 + 1;
    *(undefined8 *)(puVar8 + uVar1 * 0x10 + 0x20) = 0x61636f4c72657355;
    *(undefined8 *)(puVar8 + uVar1 * 0x10 + 0x28) = 0xec0000006e6f6974;
  }
  lVar2 = unaff_x20;
  func_0x000107c44bd4();
  if ((int)lVar2 != 0) {
    puVar3 = puVar8;
    func_0x000107c61558();
    puVar7 = puVar8;
    if (((ulong)puVar3 & 1) == 0) {
      puVar7 = (undefined *)0x0;
      func_0x0001000d182c(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8);
    }
    uVar1 = *(ulong *)(puVar7 + 0x10);
    puVar8 = puVar7;
    if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar1) {
      puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
      func_0x0001000d182c(puVar8,uVar1 + 1,1,puVar7);
    }
    *(ulong *)(puVar8 + 0x10) = uVar1 + 1;
    *(undefined8 *)(puVar8 + uVar1 * 0x10 + 0x20) = 0x74536c6576617254;
    *(undefined8 *)(puVar8 + uVar1 * 0x10 + 0x28) = 0xec00000073757461;
  }
  lVar2 = unaff_x20;
  func_0x000107c4481c();
  if ((int)lVar2 != 0) {
    puVar3 = puVar8;
    func_0x000107c61558();
    puVar7 = puVar8;
    if (((ulong)puVar3 & 1) == 0) {
      puVar7 = (undefined *)0x0;
      func_0x0001000d182c(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8);
    }
    uVar1 = *(ulong *)(puVar7 + 0x10);
    puVar8 = puVar7;
    if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar1) {
      puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
      func_0x0001000d182c(puVar8,uVar1 + 1,1,puVar7);
    }
    *(ulong *)(puVar8 + 0x10) = uVar1 + 1;
    *(undefined8 *)(puVar8 + uVar1 * 0x10 + 0x20) = 0xd000000000000011;
    *(undefined8 *)(puVar8 + uVar1 * 0x10 + 0x28) = 0x800000010f0b60d0;
  }
  lVar2 = unaff_x20;
  func_0x000107c44974();
  if ((int)lVar2 != 0) {
    puVar3 = puVar8;
    func_0x000107c61558();
    puVar7 = puVar8;
    if (((ulong)puVar3 & 1) == 0) {
      puVar7 = (undefined *)0x0;
      func_0x0001000d182c(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8);
    }
    uVar1 = *(ulong *)(puVar7 + 0x10);
    puVar8 = puVar7;
    if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar1) {
      puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
      func_0x0001000d182c(puVar8,uVar1 + 1,1,puVar7);
    }
    *(ulong *)(puVar8 + 0x10) = uVar1 + 1;
    *(undefined8 *)(puVar8 + uVar1 * 0x10 + 0x20) = 0x697373655370614d;
    *(undefined8 *)(puVar8 + uVar1 * 0x10 + 0x28) = 0xec00000044496e6f;
  }
  lVar2 = unaff_x20;
  func_0x000107c4480c();
  if ((int)lVar2 != 0) {
    puVar3 = puVar8;
    func_0x000107c61558();
    puVar7 = puVar8;
    if (((ulong)puVar3 & 1) == 0) {
      puVar7 = (undefined *)0x0;
      func_0x0001000d182c(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8);
    }
    uVar1 = *(ulong *)(puVar7 + 0x10);
    puVar8 = puVar7;
    if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar1) {
      puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
      func_0x0001000d182c(puVar8,uVar1 + 1,1,puVar7);
    }
    *(ulong *)(puVar8 + 0x10) = uVar1 + 1;
    *(undefined8 *)(puVar8 + uVar1 * 0x10 + 0x20) = 0x55746e6572727543;
    *(undefined8 *)(puVar8 + uVar1 * 0x10 + 0x28) = 0xef65736f50726573;
  }
  lVar2 = unaff_x20;
  func_0x000107c44808();
  if ((int)lVar2 != 0) {
    puVar3 = puVar8;
    func_0x000107c61558();
    puVar7 = puVar8;
    if (((ulong)puVar3 & 1) == 0) {
      puVar7 = (undefined *)0x0;
      func_0x0001000d182c(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8);
    }
    uVar1 = *(ulong *)(puVar7 + 0x10);
    puVar8 = puVar7;
    if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar1) {
      puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
      func_0x0001000d182c(puVar8,uVar1 + 1,1,puVar7);
    }
    *(ulong *)(puVar8 + 0x10) = uVar1 + 1;
    *(undefined8 *)(puVar8 + uVar1 * 0x10 + 0x20) = 0x55746e6572727543;
    *(undefined8 *)(puVar8 + uVar1 * 0x10 + 0x28) = 0xed00004449726573;
  }
  lVar2 = unaff_x20;
  func_0x000107c44804();
  if ((int)lVar2 != 0) {
    puVar3 = puVar8;
    func_0x000107c61558();
    puVar7 = puVar8;
    if (((ulong)puVar3 & 1) == 0) {
      puVar7 = (undefined *)0x0;
      func_0x0001000d182c(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8);
    }
    uVar1 = *(ulong *)(puVar7 + 0x10);
    puVar8 = puVar7;
    if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar1) {
      puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
      func_0x0001000d182c(puVar8,uVar1 + 1,1,puVar7);
    }
    *(ulong *)(puVar8 + 0x10) = uVar1 + 1;
    *(undefined8 *)(puVar8 + uVar1 * 0x10 + 0x20) = 0xd000000000000013;
    *(undefined8 *)(puVar8 + uVar1 * 0x10 + 0x28) = 0x800000010f0b60b0;
  }
  lVar2 = unaff_x20;
  func_0x000107c44954();
  if ((int)lVar2 != 0) {
    puVar3 = puVar8;
    func_0x000107c61558();
    puVar7 = puVar8;
    if (((ulong)puVar3 & 1) == 0) {
      puVar7 = (undefined *)0x0;
      func_0x0001000d182c(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8);
    }
    uVar1 = *(ulong *)(puVar7 + 0x10);
    puVar8 = puVar7;
    if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar1) {
      puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
      func_0x0001000d182c(puVar8,uVar1 + 1,1,puVar7);
    }
    *(ulong *)(puVar8 + 0x10) = uVar1 + 1;
    *(undefined8 *)(puVar8 + uVar1 * 0x10 + 0x20) = 0xd00000000000001a;
    *(undefined8 *)(puVar8 + uVar1 * 0x10 + 0x28) = 0x800000010f0b6090;
  }
  lVar2 = unaff_x20;
  func_0x000107c42518();
  if (lVar2 != 0) {
    puVar3 = puVar8;
    func_0x000107c61558();
    puVar7 = puVar8;
    if (((ulong)puVar3 & 1) == 0) {
      puVar7 = (undefined *)0x0;
      func_0x0001000d182c(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8);
    }
    uVar1 = *(ulong *)(puVar7 + 0x10);
    puVar8 = puVar7;
    if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar1) {
      puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
      func_0x0001000d182c(puVar8,uVar1 + 1,1,puVar7);
    }
    *(ulong *)(puVar8 + 0x10) = uVar1 + 1;
    *(undefined8 *)(puVar8 + uVar1 * 0x10 + 0x20) = 0xd000000000000010;
    *(undefined8 *)(puVar8 + uVar1 * 0x10 + 0x28) = 0x800000010f0b6070;
  }
  lVar2 = unaff_x20;
  func_0x000107c449b8();
  if ((int)lVar2 != 0) {
    puVar3 = puVar8;
    func_0x000107c61558();
    puVar7 = puVar8;
    if (((ulong)puVar3 & 1) == 0) {
      puVar7 = (undefined *)0x0;
      func_0x0001000d182c(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8);
    }
    uVar1 = *(ulong *)(puVar7 + 0x10);
    puVar8 = puVar7;
    if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar1) {
      puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
      func_0x0001000d182c(puVar8,uVar1 + 1,1,puVar7);
    }
    *(ulong *)(puVar8 + 0x10) = uVar1 + 1;
    *(undefined8 *)(puVar8 + uVar1 * 0x10 + 0x20) = 0xd000000000000014;
    *(undefined8 *)(puVar8 + uVar1 * 0x10 + 0x28) = 0x800000010f0b6050;
  }
  lVar2 = unaff_x20;
  func_0x000107c44c34();
  if ((int)lVar2 != 0) {
    puVar3 = puVar8;
    func_0x000107c61558();
    puVar7 = puVar8;
    if (((ulong)puVar3 & 1) == 0) {
      puVar7 = (undefined *)0x0;
      func_0x0001000d182c(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8);
    }
    uVar1 = *(ulong *)(puVar7 + 0x10);
    puVar8 = puVar7;
    if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar1) {
      puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
      func_0x0001000d182c(puVar8,uVar1 + 1,1,puVar7);
    }
    *(ulong *)(puVar8 + 0x10) = uVar1 + 1;
    *(undefined8 *)(puVar8 + uVar1 * 0x10 + 0x20) = 0x6e49746567646957;
    *(undefined8 *)(puVar8 + uVar1 * 0x10 + 0x28) = 0xea00000000006f66;
  }
  lVar2 = unaff_x20;
  func_0x000107c44b50();
  if ((int)lVar2 != 0) {
    puVar3 = puVar8;
    func_0x000107c61558();
    puVar7 = puVar8;
    if (((ulong)puVar3 & 1) == 0) {
      puVar7 = (undefined *)0x0;
      func_0x0001000d182c(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8);
    }
    uVar1 = *(ulong *)(puVar7 + 0x10);
    puVar8 = puVar7;
    if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar1) {
      puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
      func_0x0001000d182c(puVar8,uVar1 + 1,1,puVar7);
    }
    *(ulong *)(puVar8 + 0x10) = uVar1 + 1;
    *(undefined8 *)(puVar8 + uVar1 * 0x10 + 0x20) = 0xd000000000000010;
    *(undefined8 *)(puVar8 + uVar1 * 0x10 + 0x28) = 0x800000010f0b6030;
  }
  lVar2 = unaff_x20;
  func_0x000107c44c0c();
  if ((int)lVar2 != 0) {
    puVar3 = puVar8;
    func_0x000107c61558();
    puVar7 = puVar8;
    if (((ulong)puVar3 & 1) == 0) {
      puVar7 = (undefined *)0x0;
      func_0x0001000d182c(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8);
    }
    uVar1 = *(ulong *)(puVar7 + 0x10);
    puVar8 = puVar7;
    if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar1) {
      puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
      func_0x0001000d182c(puVar8,uVar1 + 1,1,puVar7);
    }
    *(ulong *)(puVar8 + 0x10) = uVar1 + 1;
    *(undefined8 *)(puVar8 + uVar1 * 0x10 + 0x20) = 0x6174654472657355;
    *(undefined8 *)(puVar8 + uVar1 * 0x10 + 0x28) = 0xeb00000000736c69;
  }
  lVar2 = unaff_x20;
  func_0x000107c4470c();
  if ((int)lVar2 != 0) {
    puVar3 = puVar8;
    func_0x000107c61558();
    puVar7 = puVar8;
    if (((ulong)puVar3 & 1) == 0) {
      puVar7 = (undefined *)0x0;
      func_0x0001000d182c(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8);
    }
    uVar1 = *(ulong *)(puVar7 + 0x10);
    puVar8 = puVar7;
    if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar1) {
      puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
      func_0x0001000d182c(puVar8,uVar1 + 1,1,puVar7);
    }
    *(ulong *)(puVar8 + 0x10) = uVar1 + 1;
    *(undefined8 *)(puVar8 + uVar1 * 0x10 + 0x20) = 0xd000000000000014;
    *(undefined8 *)(puVar8 + uVar1 * 0x10 + 0x28) = 0x800000010f0b6010;
  }
  lVar2 = unaff_x20;
  func_0x000107c44710();
  if ((int)lVar2 != 0) {
    puVar3 = puVar8;
    func_0x000107c61558();
    puVar7 = puVar8;
    if (((ulong)puVar3 & 1) == 0) {
      puVar7 = (undefined *)0x0;
      func_0x0001000d182c(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8);
    }
    uVar1 = *(ulong *)(puVar7 + 0x10);
    puVar8 = puVar7;
    if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar1) {
      puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
      func_0x0001000d182c(puVar8,uVar1 + 1,1,puVar7);
    }
    *(ulong *)(puVar8 + 0x10) = uVar1 + 1;
    *(undefined8 *)(puVar8 + uVar1 * 0x10 + 0x20) = 0xd00000000000001a;
    *(undefined8 *)(puVar8 + uVar1 * 0x10 + 0x28) = 0x800000010f0b5ff0;
  }
  lVar2 = unaff_x20;
  func_0x000107c44758();
  if ((int)lVar2 != 0) {
    puVar3 = puVar8;
    func_0x000107c61558();
    puVar7 = puVar8;
    if (((ulong)puVar3 & 1) == 0) {
      puVar7 = (undefined *)0x0;
      func_0x0001000d182c(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8);
    }
    uVar1 = *(ulong *)(puVar7 + 0x10);
    puVar8 = puVar7;
    if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar1) {
      puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
      func_0x0001000d182c(puVar8,uVar1 + 1,1,puVar7);
    }
    *(ulong *)(puVar8 + 0x10) = uVar1 + 1;
    *(undefined8 *)(puVar8 + uVar1 * 0x10 + 0x20) = 0x4979726574746142;
    *(undefined8 *)(puVar8 + uVar1 * 0x10 + 0x28) = 0xeb000000006f666e;
  }
  lVar2 = unaff_x20;
  func_0x000107c44af0();
  if ((int)lVar2 != 0) {
    puVar3 = puVar8;
    func_0x000107c61558();
    puVar7 = puVar8;
    if (((ulong)puVar3 & 1) == 0) {
      puVar7 = (undefined *)0x0;
      func_0x0001000d182c(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8);
    }
    uVar1 = *(ulong *)(puVar7 + 0x10);
    puVar8 = puVar7;
    if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar1) {
      puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
      func_0x0001000d182c(puVar8,uVar1 + 1,1,puVar7);
    }
    *(ulong *)(puVar8 + 0x10) = uVar1 + 1;
    *(undefined8 *)(puVar8 + uVar1 * 0x10 + 0x20) = 0x6e49726f736e6553;
    *(undefined8 *)(puVar8 + uVar1 * 0x10 + 0x28) = 0xea00000000006f66;
  }
  lVar2 = unaff_x20;
  func_0x000107c44704();
  if ((int)lVar2 != 0) {
    puVar3 = puVar8;
    func_0x000107c61558();
    puVar7 = puVar8;
    if (((ulong)puVar3 & 1) == 0) {
      puVar7 = (undefined *)0x0;
      func_0x0001000d182c(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8);
    }
    uVar1 = *(ulong *)(puVar7 + 0x10);
    puVar8 = puVar7;
    if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar1) {
      puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
      func_0x0001000d182c(puVar8,uVar1 + 1,1,puVar7);
    }
    *(ulong *)(puVar8 + 0x10) = uVar1 + 1;
    *(undefined8 *)(puVar8 + uVar1 * 0x10 + 0x20) = 0x6f6f46776f6c6c41;
    *(undefined8 *)(puVar8 + uVar1 * 0x10 + 0x28) = 0xee00737065747374;
  }
  lVar2 = unaff_x20;
  func_0x000107c44708();
  if ((int)lVar2 != 0) {
    puVar3 = puVar8;
    func_0x000107c61558();
    puVar7 = puVar8;
    if (((ulong)puVar3 & 1) == 0) {
      puVar7 = (undefined *)0x0;
      func_0x0001000d182c(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8);
    }
    uVar1 = *(ulong *)(puVar7 + 0x10);
    puVar8 = puVar7;
    if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar1) {
      puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
      func_0x0001000d182c(puVar8,uVar1 + 1,1,puVar7);
    }
    *(ulong *)(puVar8 + 0x10) = uVar1 + 1;
    *(undefined8 *)(puVar8 + uVar1 * 0x10 + 0x20) = 0xd000000000000020;
    *(undefined8 *)(puVar8 + uVar1 * 0x10 + 0x28) = 0x800000010f0b5fc0;
  }
  func_0x000107c449cc();
  if ((int)unaff_x20 == 0) {
    if (*(long *)(puVar8 + 0x10) == 0) {
      func_0x000107c6142c(puVar8);
      uVar9 = 0xe700000000000000;
      uVar6 = 0x6e776f6e6b6e55;
      goto LAB_1026ba830;
    }
  }
  else {
    puVar3 = puVar8;
    func_0x000107c61558();
    puVar7 = puVar8;
    if (((ulong)puVar3 & 1) == 0) {
      puVar7 = (undefined *)0x0;
      func_0x0001000d182c(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8);
    }
    uVar1 = *(ulong *)(puVar7 + 0x10);
    puVar8 = puVar7;
    if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar1) {
      puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
      func_0x0001000d182c(puVar8,uVar1 + 1,1,puVar7);
    }
    *(ulong *)(puVar8 + 0x10) = uVar1 + 1;
    *(undefined8 *)(puVar8 + uVar1 * 0x10 + 0x20) = 0x6979616c50776f4e;
    *(undefined8 *)(puVar8 + uVar1 * 0x10 + 0x28) = 0xea0000000000676e;
  }
  uVar4 = 0x112d38270;
  func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
  uVar5 = uVar4;
  func_0x00010011d734();
  uVar6 = 0x2c;
  uVar9 = 0xe100000000000000;
  func_0x000107c5fa80(0x2c,0xe100000000000000,uVar4,uVar5);
  func_0x000107c6142c(puVar8);
LAB_1026ba830:
  auVar10._8_8_ = uVar9;
  auVar10._0_8_ = uVar6;
  return auVar10;
}



/* Entry: 1026badd4; end: 1026bae53;  */

void FUN_1026badd4(void)

{
  func_0x0001000285a8(0x112eb5048,&UNK_10dacbb20);
  func_0x0001000823a8(0x1026bae14,0);
  return;
}



/* Entry: 1026bae54; end: 1026bae63;  */

void FUN_1026bae54(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbff8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocObject_11034f218)();
  return;
}



/* Entry: 1026bae64; end: 1026bafe7;  */

void FUN_1026bae64(undefined8 param_1)

{
  undefined8 uVar1;
  char *pcVar2;
  undefined **ppuVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined8 uStack_38;
  
  ppuVar3 = &puStack_60;
  pcVar2 = "updates";
  func_0x0001000c10c0("updates");
  func_0x000107c61180();
  pcStack_40 = FUN_1026bb0b0;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_110537a88;
  uStack_38 = param_1;
  func_0x000107c60bc4(&puStack_60);
  uVar1 = uStack_38;
  func_0x000107c6157c(param_1);
  func_0x000107c61574(uVar1);
  func_0x000107c4e524(pcVar2);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c615e8(pcVar2);
  func_0x0001000b6d30(0);
  func_0x000107c613fc();
  func_0x0001000b6d50(0,0);
  return;
}



/* Entry: 1026bafe8; end: 1026baff7;  */

void FUN_1026bafe8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1026baff8; end: 1026bb043;  */

void FUN_1026baff8(void)

{
  func_0x0001000285a8(0x112eb5050,&UNK_10dacbee0);
  func_0x000107c613fc();
  func_0x0001000b64ac(FUN_1026bae64,0);
  return;
}



/* Entry: 1026bb044; end: 1026bb08f;  */

undefined ** FUN_1026bb044(void)

{
  return &PTR_DAT_112eb9bc0;
}



/* Entry: 1026bb090; end: 1026bb0af;  */

void FUN_1026bb090(void)

{
  func_0x000107c61168(&PTR_PTR_112eb50d8);
  return;
}



/* Entry: 1026bb0b0; end: 1026bb0d3;  */

void FUN_1026bb0b0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_38;
  
  FUN_1026bb0d4(0);
  puVar1 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
  func_0x000107c61168(PTR__OBJC_CLASS___UIDevice_1126aeb10);
  func_0x000107c40efc();
  func_0x000107c61180();
  puVar2 = puVar1;
  FUN_1026bb118();
  func_0x000107c61170(puVar1);
  puVar1 = PTR_PTR_1126b1de8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c52c18();
  func_0x000107c61170(puVar2);
  puStack_38 = puVar1;
  func_0x000100087f6c(&puStack_38);
  func_0x000107c61170(puVar1);
  return;
}



/* Entry: 1026bb0d4; end: 1026bb117;  */

void FUN_1026bb0d4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eb5130 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126c6098;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112eb5130 = puVar1;
  return;
}



/* Entry: 1026bb118; end: 1026bb23f;  */

undefined8 FUN_1026bb118(float param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 unaff_x20;
  
  func_0x000107c614e8();
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c61180();
  lVar2 = param_2;
  func_0x000107c49a9c(param_2);
  func_0x000107c52c24(param_2,param_3,1);
  func_0x000107c3e70c(param_2);
  param_1 = param_1 * 100.0;
  if (0x7f7fffff < (uint)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1026bb238);
    (*pcVar1)();
  }
  if (-2.147484e+09 < param_1) {
    if (param_1 < 2.1474836e+09) {
      func_0x000107c52c1c(unaff_x20,param_3,(int)param_1);
      lVar3 = param_2;
      func_0x000107c3e720(param_2);
      func_0x000107c555b4(unaff_x20,param_3,lVar3 == 2);
      puVar4 = PTR__OBJC_CLASS___NSProcessInfo_1126aeba8;
      func_0x000107c61168(PTR__OBJC_CLASS___NSProcessInfo_1126aeba8);
      func_0x000107c4f2b0();
      func_0x000107c61180();
      puVar5 = puVar4;
      func_0x000107c4a014();
      func_0x000107c61170(puVar4);
      func_0x000107c55710(unaff_x20,param_3,puVar5);
      func_0x000107c61170(unaff_x20);
      func_0x000107c52c24(param_2,param_3,lVar2);
      return unaff_x20;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1026bb240);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1026bb23c);
  (*pcVar1)();
}



/* Entry: 1026bb240; end: 1026bb28b;  */

void FUN_1026bb240(undefined8 param_1)

{
  func_0x0001000285a8(0x112eb5048,&UNK_10dacbb20);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1026bb2f0,param_1);
  return;
}



/* Entry: 1026bb28c; end: 1026bb2ef;  */

void FUN_1026bb28c(long *param_1,long param_2)

{
  long lVar1;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1026bbb58();
  lVar1 = param_2;
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = uStack_38;
  param_1[3] = param_2;
  param_1[4] = (long)&PTR_DAT_110537ad8;
  *param_1 = lVar1;
  return;
}



/* Entry: 1026bb2f0; end: 1026bb2f7;  */

void FUN_1026bb2f0(long *param_1)

{
  long lVar1;
  long unaff_x20;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1026bbb58();
  lVar1 = unaff_x20;
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = uStack_38;
  param_1[3] = unaff_x20;
  param_1[4] = (long)&PTR_DAT_110537ad8;
  *param_1 = lVar1;
  return;
}



/* Entry: 1026bb2f8; end: 1026bb327;  */

void FUN_1026bb2f8(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 1026bb328; end: 1026bb747;  */

void FUN_1026bb328(undefined8 param_1,undefined *param_2)

{
  undefined *puVar1;
  ulong uVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong uVar12;
  long unaff_x20;
  long lVar13;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined *puStack_68;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c43a58();
  func_0x000107c61180();
  lVar5 = lVar4;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  if (lVar5 == 0) {
    func_0x0001000285a8(0x112eb4f88,&UNK_10dacbaa8);
    func_0x000104886440();
  }
  else {
    lVar4 = 0;
    ppuStack_80 = &PTR____CFConstantStringClassReference_110dc5158;
    ppuStack_88 = &PTR____CFConstantStringClassReference_110dc50f8;
    puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
    do {
      bVar3 = *(byte *)(lVar4 + 0x112eb5160);
      if (bVar3 < 3) {
        ppuVar6 = &PTR____CFConstantStringClassReference_110dc5118;
        if ((bVar3 != 0) && (ppuVar6 = ppuStack_88, bVar3 != 1)) {
          ppuVar6 = &PTR____CFConstantStringClassReference_110dc50d8;
        }
      }
      else {
        ppuVar6 = &PTR____CFConstantStringClassReference_110dc50b8;
        if ((bVar3 != 3) && (ppuVar6 = ppuStack_80, bVar3 != 4)) {
          ppuVar6 = &PTR____CFConstantStringClassReference_110dc5138;
        }
      }
      func_0x000107c5faec(ppuVar6);
      puVar9 = param_2;
      func_0x000107c5fadc();
      func_0x000107c6142c(param_2);
      lVar13 = lVar5;
      func_0x000107c42504();
      func_0x000107c61180();
      func_0x000107c61170(ppuVar6);
      param_2 = puVar9;
      if (lVar13 != 0) {
        lVar7 = lVar13;
        func_0x000107c5faec();
        func_0x000107c61170(lVar13);
        lVar13 = *(long *)(&UNK_10dacbc90 + (ulong)bVar3 * 8);
        param_2 = *(undefined **)(&UNK_10dacbcc0 + (ulong)bVar3 * 8);
        FUN_1026bc030(0,0x112eb5168,&PTR_PTR_1126b1df0);
        func_0x000103c02830();
        if (lVar13 == 0) {
          func_0x000107c6142c(puVar9);
        }
        else {
          func_0x000103c02830();
          if (lVar7 == 0) {
            func_0x000107c61170(lVar13);
            param_2 = puVar9;
          }
          else {
            puVar8 = PTR_PTR_1126c60a0;
            func_0x000107c610f8();
            func_0x000107c453e4();
            func_0x000107c61180();
            func_0x000107c559e4();
            func_0x000107c61174(lVar7);
            func_0x000107c5446c(puVar8);
            func_0x000107c61170(lVar13);
            func_0x000107c61170(lVar7);
            func_0x000107c61170(lVar7);
            func_0x000107c61170(puVar8);
            puVar10 = puVar11;
            func_0x000107c61550();
            if ((((int)puVar10 == 0) || ((long)puVar11 < 0)) ||
               (puVar10 = puVar11, ((ulong)puVar11 >> 0x3e & 1) != 0)) {
              if ((ulong)puVar11 >> 0x3e == 0) {
                puVar9 = *(undefined **)(((ulong)puVar11 & 0xffffffffffffff8) + 0x10);
              }
              else {
                puVar9 = (undefined *)((ulong)puVar11 & 0xffffffffffffff8);
                if ((undefined *)0x7fffffffffffffff < puVar11) {
                  puVar9 = puVar11;
                }
                func_0x000107c60480();
              }
              puVar9 = puVar9 + 1;
              puVar10 = (undefined *)0x0;
              FUN_1026bbcd8(0,puVar9,1,puVar11,FUN_1026c2fac,0x112eb5268,&PTR_PTR_1126c60a0);
            }
            uVar12 = (ulong)puVar10 & 0xffffffffffffff8;
            uVar2 = *(ulong *)(uVar12 + 0x10);
            puVar1 = (undefined *)(uVar2 + 1);
            puVar11 = puVar10;
            if (*(ulong *)(uVar12 + 0x18) >> 1 <= uVar2) {
              puVar11 = (undefined *)(ulong)(1 < *(ulong *)(uVar12 + 0x18));
              puVar9 = puVar1;
              FUN_1026bbcd8(puVar11,puVar1,1,puVar10,FUN_1026c2fac,0x112eb5268,&PTR_PTR_1126c60a0);
              uVar12 = (ulong)puVar11 & 0xffffffffffffff8;
            }
            *(undefined **)(uVar12 + 0x10) = puVar1;
            *(undefined **)(uVar12 + uVar2 * 8 + 0x20) = puVar8;
            param_2 = puVar9;
          }
        }
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 != 6);
    func_0x0001000285a8(0x112eb4f88,&UNK_10dacbaa8);
    puVar9 = PTR_PTR_1126b1de8;
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000107c61180();
    puVar8 = puVar11;
    FUN_1026bb7bc(puVar11,FUN_1026c5cfc,0x112eb5268,&PTR_PTR_1126c60a0);
    func_0x000107c6142c(puVar11);
    puVar11 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    puVar10 = puVar8;
    func_0x000107c5fc48(puVar8,PTR___sypN_11034f1a8 + 8);
    func_0x000107c6142c(puVar8);
    func_0x000107c45788(puVar11);
    func_0x000107c61170(puVar10);
    func_0x000107c54478(puVar9);
    func_0x000107c61170(puVar11);
    func_0x000107c61170(puVar9);
    puStack_68 = puVar9;
    func_0x000100854cb0(&puStack_68);
    func_0x000107c61170(puVar9);
    func_0x000107c615e8(lVar5);
  }
  return;
}



/* Entry: 1026bb748; end: 1026bb76b;  */

void FUN_1026bb748(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1026bb76c; end: 1026bb78b;  */

void FUN_1026bb76c(void)

{
  FUN_1026bb328();
  return;
}



/* Entry: 1026bb78c; end: 1026bb7bb;  */

void FUN_1026bb78c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_110537ad0;
  return;
}



/* Entry: 1026bb7bc; end: 1026bb9a3;  */

undefined * FUN_1026bb7bc(ulong param_1,code *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uStack_90;
  undefined1 auStack_88 [32];
  undefined *puStack_68;
  
  if (param_1 >> 0x3e == 0) {
    uVar5 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar5 = param_1;
    }
    func_0x000107c60480();
  }
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100c077e4(0,uVar5 & ((long)uVar5 >> 0x3f ^ 0xffffffffffffffffU),0);
    puVar6 = puStack_68;
    puVar1 = PTR___sypN_11034f1a8;
    if ((long)uVar5 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1026bb9a4);
      (*pcVar2)();
    }
    if ((param_1 & 0xc000000000000001) == 0) {
      uVar4 = 0;
      FUN_1026bc030(0,param_3,param_4);
      puVar1 = PTR___sypN_11034f1a8;
      puVar7 = (ulong *)(param_1 + 0x20);
      do {
        uStack_90 = *puVar7;
        func_0x000107c61174();
        func_0x000107c6147c(auStack_88,&uStack_90,uVar4,puVar1 + 8,7);
        uVar8 = *(ulong *)(puVar6 + 0x10);
        puStack_68 = puVar6;
        if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar8) {
          func_0x000100c077e4(1 < *(ulong *)(puVar6 + 0x18),uVar8 + 1,1);
        }
        puVar6 = puStack_68;
        *(ulong *)(puStack_68 + 0x10) = uVar8 + 1;
        func_0x000100102924(auStack_88,puStack_68 + uVar8 * 0x20 + 0x20);
        uVar5 = uVar5 - 1;
        puVar7 = puVar7 + 1;
      } while (uVar5 != 0);
    }
    else {
      uVar8 = 0;
      do {
        uVar3 = uVar8;
        (*param_2)(uVar8,param_1);
        uVar4 = 0;
        uStack_90 = uVar3;
        FUN_1026bc030(0,param_3,param_4);
        func_0x000107c6147c(auStack_88,&uStack_90,uVar4,puVar1 + 8,7);
        uVar3 = *(ulong *)(puVar6 + 0x10);
        puStack_68 = puVar6;
        if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar3) {
          func_0x000100c077e4(1 < *(ulong *)(puVar6 + 0x18),uVar3 + 1,1);
        }
        puVar6 = puStack_68;
        uVar8 = uVar8 + 1;
        *(ulong *)(puStack_68 + 0x10) = uVar3 + 1;
        func_0x000100102924(auStack_88,puStack_68 + uVar3 * 0x20 + 0x20);
      } while (uVar5 != uVar8);
    }
  }
  return puVar6;
}



/* Entry: 1026bb9a4; end: 1026bb9db;  */

undefined * FUN_1026bb9a4(ulong param_1)

{
  undefined *puVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uStack_90;
  undefined1 auStack_88 [32];
  undefined *puStack_68;
  
  if (param_1 >> 0x3e == 0) {
    uVar5 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar5 = param_1;
    }
    func_0x000107c60480();
  }
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100c077e4(0,uVar5 & ((long)uVar5 >> 0x3f ^ 0xffffffffffffffffU),0);
    puVar6 = puStack_68;
    puVar1 = PTR___sypN_11034f1a8;
    if ((long)uVar5 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1026bb9a4);
      (*pcVar2)();
    }
    if ((param_1 & 0xc000000000000001) == 0) {
      uVar4 = 0;
      FUN_1026bc030(0,0x112eb5250,&PTR_PTR_1126d0948);
      puVar1 = PTR___sypN_11034f1a8;
      puVar7 = (ulong *)(param_1 + 0x20);
      do {
        uStack_90 = *puVar7;
        func_0x000107c61174();
        func_0x000107c6147c(auStack_88,&uStack_90,uVar4,puVar1 + 8,7);
        uVar8 = *(ulong *)(puVar6 + 0x10);
        puStack_68 = puVar6;
        if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar8) {
          func_0x000100c077e4(1 < *(ulong *)(puVar6 + 0x18),uVar8 + 1,1);
        }
        puVar6 = puStack_68;
        *(ulong *)(puStack_68 + 0x10) = uVar8 + 1;
        func_0x000100102924(auStack_88,puStack_68 + uVar8 * 0x20 + 0x20);
        uVar5 = uVar5 - 1;
        puVar7 = puVar7 + 1;
      } while (uVar5 != 0);
    }
    else {
      uVar8 = 0;
      do {
        uVar3 = uVar8;
        FUN_1026c60b0(uVar8,param_1);
        uVar4 = 0;
        uStack_90 = uVar3;
        FUN_1026bc030(0,0x112eb5250,&PTR_PTR_1126d0948);
        func_0x000107c6147c(auStack_88,&uStack_90,uVar4,puVar1 + 8,7);
        uVar3 = *(ulong *)(puVar6 + 0x10);
        puStack_68 = puVar6;
        if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar3) {
          func_0x000100c077e4(1 < *(ulong *)(puVar6 + 0x18),uVar3 + 1,1);
        }
        puVar6 = puStack_68;
        uVar8 = uVar8 + 1;
        *(ulong *)(puStack_68 + 0x10) = uVar3 + 1;
        func_0x000100102924(auStack_88,puStack_68 + uVar3 * 0x20 + 0x20);
      } while (uVar5 != uVar8);
    }
  }
  return puVar6;
}



/* Entry: 1026bb9dc; end: 1026bbb1f;  */

undefined * FUN_1026bb9dc(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1026bbb20);
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
    puVar3 = (undefined *)0x112eb5270;
    func_0x0001000285a8(0x112eb5270,&UNK_10dacbfa0);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x28) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0x112eb4ec8;
    func_0x0001000285a8(0x112eb4ec8,&UNK_10dacbc80);
    func_0x000107c6140c(puVar4,puVar1,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar7 * 0x28 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar7 * 0x28);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 1026bbb20; end: 1026bbb57;  */

undefined ** FUN_1026bbb20(void)

{
  return &PTR_DAT_112eb9bc0;
}



/* Entry: 1026bbb58; end: 1026bbb77;  */

void FUN_1026bbb58(void)

{
  func_0x000107c61168(&PTR_PTR_112eb51f0);
  return;
}



/* Entry: 1026bbb78; end: 1026bbc9f;  */

ulong FUN_1026bbb78(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1026bbca0);
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
  func_0x0001026c2fb8(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1026bbc9c);
      (*pcVar1)();
    }
    FUN_1026bbe1c(0,uVar2,uVar3 + 0x20,param_4);
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



/* Entry: 1026bbca0; end: 1026bbcd7;  */

ulong FUN_1026bbca0(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1026bbe1c);
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
  (*(code *)0x1026c2fc4)(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1026bbe18);
      (*pcVar1)();
    }
    FUN_1026bbf14(0,uVar2,uVar3 + 0x20,param_4,0x112eb5260,&PTR_PTR_1126c60f8);
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



/* Entry: 1026bbcd8; end: 1026bbe1b;  */

ulong FUN_1026bbcd8(ulong param_1,ulong param_2,ulong param_3,ulong param_4,code *param_5,
                   undefined8 param_6,undefined8 param_7)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1026bbe1c);
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
  (*param_5)(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1026bbe18);
      (*pcVar1)();
    }
    FUN_1026bbf14(0,uVar2,uVar3 + 0x20,param_4,param_6,param_7);
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



/* Entry: 1026bbe1c; end: 1026bbf13;  */

long FUN_1026bbe1c(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1026bbf10);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1026bbf14);
        (*pcVar3)();
      }
      uVar4 = 0;
      func_0x000104384ae4(0);
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
      func_0x000104384ae4(0);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1026bbf0c);
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



/* Entry: 1026bbf14; end: 1026bc02f;  */

long FUN_1026bbf14(long param_1,long param_2,long param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1026bc02c);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1026bc030);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_1026bc030(0,param_5,param_6);
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
      FUN_1026bc030(0,param_5,param_6);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1026bc028);
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



/* Entry: 1026bc030; end: 1026bc0bb;  */

void FUN_1026bc030(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1026bc0bc; end: 1026bc11f;  */

void FUN_1026bc0bc(long *param_1,long param_2)

{
  long lVar1;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1026bc4b0();
  lVar1 = param_2;
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = uStack_38;
  param_1[3] = param_2;
  param_1[4] = (long)&PTR_DAT_110537b50;
  *param_1 = lVar1;
  return;
}



/* Entry: 1026bc120; end: 1026bc127;  */

void FUN_1026bc120(long *param_1)

{
  long lVar1;
  long unaff_x20;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1026bc4b0();
  lVar1 = unaff_x20;
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = uStack_38;
  param_1[3] = unaff_x20;
  param_1[4] = (long)&PTR_DAT_110537b50;
  *param_1 = lVar1;
  return;
}



/* Entry: 1026bc128; end: 1026bc157;  */

void FUN_1026bc128(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 1026bc158; end: 1026bc33f;  */

void FUN_1026bc158(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long unaff_x20;
  long lVar8;
  undefined *puStack_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c3e550();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 == 0) {
    func_0x0001000285a8(0x112eb4f88,&UNK_10dacbaa8);
    func_0x000104886440();
  }
  else {
    func_0x0001000285a8(0x112d5c1e0,&UNK_10d923090);
    lVar1 = lVar2;
    func_0x000107c3e548(lVar2);
    func_0x000107c61180();
    lVar8 = lVar1;
    func_0x0001000b637c();
    func_0x000107c61170(lVar1);
    uVar3 = 0;
    FUN_1026bc3e0(0,0x112eb5168,&PTR_PTR_1126b1df0);
    pcVar4 = FUN_1026bc340;
    func_0x0001000d5158(FUN_1026bc340,0,uVar3);
    func_0x000107c61574(lVar8);
    uVar5 = 0;
    FUN_1026bc3e0(0,0x112eb5278,&PTR_PTR_1126b1de8);
    uVar3 = 0x1026bc398;
    uVar7 = 0;
    func_0x0001000bfde0(0x1026bc398,0,uVar5);
    func_0x000107c61574(pcVar4);
    lVar1 = lVar2;
    func_0x000107c3e544();
    func_0x000107c61180();
    if (lVar1 == 0) {
      lVar8 = 0;
      uVar7 = 0;
    }
    else {
      lVar8 = lVar1;
      func_0x000107c5faec();
      func_0x000107c61170(lVar1);
    }
    func_0x000103c02830(lVar8,uVar7);
    if (lVar8 == 0) {
      func_0x000107c615e8(lVar2);
    }
    else {
      puVar6 = PTR_PTR_1126b1de8;
      func_0x000107c610f8();
      func_0x000107c453e4();
      func_0x000107c53cbc();
      puStack_48 = puVar6;
      func_0x0001006c71a4(&puStack_48);
      func_0x000107c61170(puVar6);
      func_0x000107c61170(lVar8);
      func_0x000107c615e8(lVar2);
      func_0x000107c61574(uVar3);
    }
  }
  return;
}



/* Entry: 1026bc340; end: 1026bc3df;  */

void FUN_1026bc340(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_1026bc3e0(0,0x112eb5168,&PTR_PTR_1126b1df0);
  func_0x000107c5faec();
  func_0x000103c02830();
  *param_1 = uVar1;
  return;
}



/* Entry: 1026bc3e0; end: 1026bc41f;  */

void FUN_1026bc3e0(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1026bc420; end: 1026bc443;  */

void FUN_1026bc420(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1026bc444; end: 1026bc463;  */

void FUN_1026bc444(void)

{
  FUN_1026bc158();
  return;
}



/* Entry: 1026bc464; end: 1026bc4af;  */

undefined ** FUN_1026bc464(void)

{
  return &PTR_DAT_112eb9bc0;
}



/* Entry: 1026bc4b0; end: 1026bc4cf;  */

void FUN_1026bc4b0(void)

{
  func_0x000107c61168(&PTR_PTR_112eb5300);
  return;
}



/* Entry: 1026bc4d0; end: 1026bc5c7;  */

void FUN_1026bc4d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112eb5048,&UNK_10dacbb20);
  puVar1 = &UNK_110537bd0;
  func_0x000107c613fc(&UNK_110537bd0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1026bc5c8,puVar1);
  return;
}



/* Entry: 1026bc5c8; end: 1026bc5cf;  */

void FUN_1026bc5c8(long *param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_38,lVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100083b20(&uStack_40);
  FUN_1026bd41c();
  lVar2 = lVar1;
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x10) = uStack_38;
  *(undefined8 *)(lVar2 + 0x18) = uStack_40;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_110537c68;
  *param_1 = lVar2;
  return;
}



/* Entry: 1026bc5d0; end: 1026bc60b;  */

void FUN_1026bc5d0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 1026bc60c; end: 1026bcbb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026bc60c(void)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined *puVar9;
  code *pcVar10;
  code *pcVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  long *plVar17;
  undefined *puVar18;
  ulong uVar19;
  long unaff_x20;
  long lVar20;
  undefined1 auStack_a8 [32];
  long lStack_88;
  undefined *apuStack_80 [4];
  
  lVar3 = *(long *)(*(long *)(unaff_x20 + 0x10) + _DAT_113072718);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar4 = *(long *)(unaff_x20 + 0x18);
    func_0x000107c4b8d8();
    func_0x000107c61180();
    lVar5 = lVar4;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    if (lVar5 != 0) {
      func_0x0001000285a8(0x112eb5360,&UNK_10dacbdb0);
      lVar4 = lVar3;
      func_0x000107c5bd48(lVar3);
      func_0x000107c61180();
      lVar20 = lVar4;
      func_0x0001000b637c();
      func_0x000107c61170(lVar4);
      uVar16 = 0x112eb5368;
      func_0x0001000285a8(0x112eb5368,&UNK_10dacbdb8);
      pcVar6 = FUN_1026bcbb4;
      func_0x0001000d5158(FUN_1026bcbb4,0,uVar16);
      func_0x000107c61574(lVar20);
      puVar9 = &UNK_110537bf8;
      puVar18 = puVar9;
      func_0x000107c613fc(&UNK_110537bf8,0x18,7);
      func_0x000107c61614(puVar18 + 0x10,lVar5);
      uVar7 = 0;
      func_0x0001026bd49c(0,0x112eb5278,&PTR_PTR_1126b1de8);
      func_0x000107c615f0(lVar5);
      pcVar8 = FUN_1026bd120;
      func_0x0001000d5158(FUN_1026bd120,puVar18,uVar7);
      func_0x000107c61574(pcVar6);
      func_0x000107c61574(puVar18);
      func_0x0001000285a8(0x112eb07a0,&UNK_10dac4d00);
      lVar4 = lVar5;
      func_0x000107c4b930(lVar5);
      func_0x000107c61180();
      lVar20 = lVar4;
      func_0x0001000b637c();
      func_0x000107c61170(lVar4);
      puVar18 = puVar9;
      func_0x000107c613fc(&UNK_110537bf8,0x18,7);
      func_0x000107c61614(puVar18 + 0x10,lVar5);
      uVar16 = 0x1026bd128;
      func_0x0001000c0ebc(0x1026bd128,puVar18);
      func_0x000107c61574(lVar20);
      func_0x000107c61574(puVar18);
      func_0x000107c613fc(&UNK_110537bf8,0x18,7);
      func_0x000107c61614(puVar9 + 0x10,lVar5);
      func_0x000107c615e8(lVar5);
      puVar18 = &UNK_110537c20;
      func_0x000107c613fc(&UNK_110537c20,0x18,7);
      func_0x000107c61614(puVar18 + 0x10,lVar3);
      puVar15 = &UNK_110537c48;
      func_0x000107c613fc(&UNK_110537c48,0x20,7);
      *(undefined **)(puVar15 + 0x10) = puVar9;
      *(undefined **)(puVar15 + 0x18) = puVar18;
      pcVar6 = FUN_1026bd15c;
      func_0x0001000d5158(FUN_1026bd15c,puVar15,uVar7);
      func_0x000107c61574(uVar16);
      func_0x000107c61574(puVar15);
      pcVar10 = (code *)0x112eb4f88;
      func_0x0001000285a8(0x112eb4f88,&UNK_10dacbaa8);
      FUN_1026bd20c(0x112eb4f88,&UNK_10dacbaa8,0x112eb5490,&UNK_10dacbec8);
      func_0x000107c613fc();
      *(undefined8 *)(pcVar10 + 0x18) = 5;
      *(undefined8 *)(pcVar10 + 0x10) = 2;
      *(code **)(pcVar10 + 0x20) = pcVar8;
      *(code **)(pcVar10 + 0x28) = pcVar6;
      func_0x000107c6157c(pcVar8);
      func_0x000107c6157c(pcVar6);
      pcVar11 = pcVar10;
      func_0x0001000c19f0();
      func_0x000107c61574(pcVar10);
      lVar4 = lVar5;
      func_0x000107c4b88c();
      func_0x000107c61180();
      if (lVar4 == 0) {
        func_0x000107c615e8(lVar3);
        func_0x000107c615e8(lVar5);
        func_0x000107c61574(pcVar8);
      }
      else {
        lVar20 = lVar3;
        func_0x000107c3db78();
        func_0x000107c61180();
        lVar12 = lVar20;
        func_0x000107c3e15c();
        func_0x000107c61180();
        func_0x000107c61170(lVar20);
        puVar9 = PTR___sypN_11034f1a8;
        lVar13 = lVar12;
        func_0x000107c5fc54(lVar12,PTR___sypN_11034f1a8 + 8);
        func_0x000107c61170(lVar12);
        lVar20 = *(long *)(lVar13 + 0x10);
        puVar18 = PTR___swiftEmptyArrayStorage_11034f1c8;
        lVar12 = lVar13;
        if (lVar20 == 0) {
          func_0x000107c6142c(lVar13);
          puVar18 = PTR___swiftEmptyArrayStorage_11034f1c8;
        }
        else {
          do {
            func_0x0001000bb420(lVar12 + 0x20,apuStack_80);
            func_0x000100102924(apuStack_80,auStack_a8);
            uVar16 = 0;
            func_0x000104384ae4(0);
            plVar17 = &lStack_88;
            func_0x000107c6147c(plVar17,auStack_a8,puVar9 + 8,uVar16,6);
            lVar2 = lStack_88;
            if ((((ulong)plVar17 & 1) != 0) && (lStack_88 != 0)) {
              puVar15 = puVar18;
              func_0x000107c61550();
              if (((int)puVar15 == 0) ||
                 (((long)puVar18 < 0 || (puVar15 = puVar18, ((ulong)puVar18 >> 0x3e & 1) != 0)))) {
                if ((ulong)puVar18 >> 0x3e == 0) {
                  puVar14 = *(undefined **)(((ulong)puVar18 & 0xffffffffffffff8) + 0x10);
                }
                else {
                  puVar14 = (undefined *)((ulong)puVar18 & 0xffffffffffffff8);
                  if ((undefined *)0x7fffffffffffffff < puVar18) {
                    puVar14 = puVar18;
                  }
                  func_0x000107c60480(puVar14);
                }
                puVar15 = (undefined *)0x0;
                FUN_1026bbb78(0,puVar14 + 1,1,puVar18);
              }
              uVar19 = (ulong)puVar15 & 0xffffffffffffff8;
              uVar1 = *(ulong *)(uVar19 + 0x10);
              puVar18 = puVar15;
              if (*(ulong *)(uVar19 + 0x18) >> 1 <= uVar1) {
                puVar18 = (undefined *)(ulong)(1 < *(ulong *)(uVar19 + 0x18));
                FUN_1026bbb78(puVar18,uVar1 + 1,1,puVar15);
                uVar19 = (ulong)puVar18 & 0xffffffffffffff8;
              }
              *(ulong *)(uVar19 + 0x10) = uVar1 + 1;
              *(long *)(uVar19 + uVar1 * 8 + 0x20) = lVar2;
            }
            lVar20 = lVar20 + -1;
            lVar12 = lVar12 + 0x20;
          } while (lVar20 != 0);
          func_0x000107c6142c(lVar13);
        }
        func_0x0001026bd49c(0,0x112eb5370,&PTR_PTR_1126c60d0);
        func_0x000107c61174(lVar4);
        FUN_1026bd4dc(puVar18,lVar4);
        puVar9 = PTR_PTR_1126b1de8;
        func_0x000107c610f8();
        func_0x000107c453e4();
        func_0x000107c53cc8();
        func_0x000107c61170(puVar18);
        apuStack_80[0] = puVar9;
        func_0x0001006c71a4(apuStack_80);
        func_0x000107c61170(puVar9);
        func_0x000107c615e8(lVar5);
        func_0x000107c615e8(lVar3);
        func_0x000107c61574(pcVar8);
        func_0x000107c61574(pcVar6);
        func_0x000107c61170(lVar4);
        pcVar6 = pcVar11;
      }
      func_0x000107c61574(pcVar6);
      return;
    }
    func_0x000107c615e8(lVar3);
  }
  func_0x0001000285a8(0x112eb4f88,&UNK_10dacbaa8);
  func_0x000104886440();
  return;
}



/* Entry: 1026bcbb4; end: 1026bcbfb;  */

void FUN_1026bcbb4(undefined8 *param_1)

{
  undefined1 auStack_40 [16];
  undefined8 *puStack_30;
  
  *param_1 = 0;
  puStack_30 = param_1;
  func_0x000104387ff0(FUN_1026bcbfc,0,FUN_1026bd470,auStack_40);
  return;
}



/* Entry: 1026bcbfc; end: 1026bcbff;  */

void FUN_1026bcbfc(void)

{
  return;
}



/* Entry: 1026bcc00; end: 1026bccef;  */

void FUN_1026bcc00(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_48 [24];
  
  uVar2 = *param_2;
  func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    lVar1 = param_3;
    func_0x000107c4b88c();
    func_0x000107c61180();
    func_0x000107c615e8(param_3);
    if (lVar1 != 0) {
      func_0x0001026bd49c(0,0x112eb5370,&PTR_PTR_1126c60d0);
      func_0x000107c61434(uVar2);
      func_0x000107c61174(lVar1);
      FUN_1026bd4dc(uVar2,lVar1);
      puVar3 = PTR_PTR_1126b1de8;
      func_0x000107c610f8();
      func_0x000107c453e4();
      func_0x000107c53cc8();
      func_0x000107c61170(lVar1);
      func_0x000107c61170(uVar2);
      goto LAB_1026bccd8;
    }
  }
  puVar3 = (undefined *)0x0;
LAB_1026bccd8:
  *param_1 = puVar3;
  return;
}



/* Entry: 1026bccf0; end: 1026bce8b;  */

undefined8 FUN_1026bccf0(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  char cStack_41;
  
  uVar7 = *param_1;
  cStack_41 = '\0';
  puVar3 = &UNK_110537cc8;
  func_0x000107c613fc(&UNK_110537cc8,0x18,7);
  *(char **)(puVar3 + 0x10) = &cStack_41;
  puVar4 = &UNK_110537cf0;
  func_0x000107c613fc(&UNK_110537cf0,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_1026bd43c;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  uStack_58 = 0x1026bd44c;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0x42000000;
  puStack_68 = &UNK_10006eb60;
  puStack_60 = &UNK_110537d08;
  ppuVar5 = &puStack_78;
  puStack_50 = puVar4;
  func_0x000107c60bc4(ppuVar5);
  puVar1 = puStack_50;
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar1);
  func_0x000107c4c604(uVar7);
  func_0x000107c60bd0(ppuVar5);
  if (cStack_41 == '\x01') {
    func_0x000107c61428(param_2 + 0x10,&puStack_78,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618();
    if (param_2 == 0) goto LAB_1026bce30;
    lVar6 = param_2;
    func_0x000107c4b88c();
    func_0x000107c61180();
    func_0x000107c615e8(param_2);
    func_0x000107c61574(puVar3);
    if (lVar6 != 0) {
      func_0x000107c61170(lVar6);
      uVar7 = 1;
      goto LAB_1026bce3c;
    }
  }
  else {
LAB_1026bce30:
    func_0x000107c61574(puVar3);
  }
  uVar7 = 0;
LAB_1026bce3c:
  puVar3 = puVar4;
  func_0x000107c61544(puVar4,"",0x81,0x32,0x30,1);
  func_0x000107c61574(puVar4);
  if (((ulong)puVar3 & 1) == 0) {
    return uVar7;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1026bce8c);
  (*pcVar2)();
}



/* Entry: 1026bce8c; end: 1026bd11f;  */

void FUN_1026bce8c(undefined8 *param_1,undefined8 param_2,long param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_d8 [32];
  long lStack_b8;
  undefined1 auStack_b0 [32];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_78,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 == 0) {
    puVar11 = (undefined *)0x0;
  }
  else {
    lVar3 = param_3;
    func_0x000107c4b88c();
    func_0x000107c61180();
    func_0x000107c615e8(param_3);
    puVar11 = (undefined *)0x0;
    if (lVar3 != 0) {
      func_0x000107c61428(param_4 + 0x10,auStack_90,0,0);
      param_4 = param_4 + 0x10;
      func_0x000107c61618();
      puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (param_4 != 0) {
        lVar13 = param_4;
        func_0x000107c3db78();
        func_0x000107c61180();
        func_0x000107c615e8(param_4);
        lVar12 = lVar13;
        func_0x000107c3e15c();
        func_0x000107c61180();
        func_0x000107c61170(lVar13);
        puVar11 = PTR___sypN_11034f1a8;
        lVar4 = lVar12;
        func_0x000107c5fc54(lVar12,PTR___sypN_11034f1a8 + 8);
        func_0x000107c61170(lVar12);
        lVar12 = lVar4;
        puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
        for (lVar13 = *(long *)(lVar4 + 0x10); lVar13 != 0; lVar13 = lVar13 + -1) {
          lVar12 = lVar12 + 0x20;
          func_0x0001000bb420(lVar12,auStack_b0);
          func_0x000100102924(auStack_b0,auStack_d8);
          uVar7 = 0;
          func_0x000104384ae4(0);
          plVar8 = &lStack_b8;
          func_0x000107c6147c(plVar8,auStack_d8,puVar11 + 8,uVar7,6);
          lVar2 = lStack_b8;
          if ((((ulong)plVar8 & 1) != 0) && (lStack_b8 != 0)) {
            puVar6 = puVar9;
            func_0x000107c61550();
            if (((int)puVar6 == 0) ||
               (((long)puVar9 < 0 || (puVar6 = puVar9, ((ulong)puVar9 >> 0x3e & 1) != 0)))) {
              if ((ulong)puVar9 >> 0x3e == 0) {
                puVar5 = *(undefined **)(((ulong)puVar9 & 0xffffffffffffff8) + 0x10);
              }
              else {
                puVar5 = (undefined *)((ulong)puVar9 & 0xffffffffffffff8);
                if ((undefined *)0x7fffffffffffffff < puVar9) {
                  puVar5 = puVar9;
                }
                func_0x000107c60480(puVar5);
              }
              puVar6 = (undefined *)0x0;
              FUN_1026bbb78(0,puVar5 + 1,1,puVar9);
            }
            uVar10 = (ulong)puVar6 & 0xffffffffffffff8;
            uVar1 = *(ulong *)(uVar10 + 0x10);
            puVar9 = puVar6;
            if (*(ulong *)(uVar10 + 0x18) >> 1 <= uVar1) {
              puVar9 = (undefined *)(ulong)(1 < *(ulong *)(uVar10 + 0x18));
              FUN_1026bbb78(puVar9,uVar1 + 1,1,puVar6);
              uVar10 = (ulong)puVar9 & 0xffffffffffffff8;
            }
            *(ulong *)(uVar10 + 0x10) = uVar1 + 1;
            *(long *)(uVar10 + uVar1 * 8 + 0x20) = lVar2;
          }
        }
        func_0x000107c6142c(lVar4);
      }
      func_0x0001026bd49c(0,0x112eb5370,&PTR_PTR_1126c60d0);
      func_0x000107c61174(lVar3);
      FUN_1026bd4dc(puVar9,lVar3);
      puVar11 = PTR_PTR_1126b1de8;
      func_0x000107c610f8();
      func_0x000107c453e4();
      func_0x000107c53cc8();
      func_0x000107c61170(lVar3);
      func_0x000107c61170(puVar9);
    }
  }
  *param_1 = puVar11;
  return;
}



/* Entry: 1026bd120; end: 1026bd12f;  */

void FUN_1026bd120(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  uVar3 = *param_2;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c4b88c();
    func_0x000107c61180();
    func_0x000107c615e8(lVar1);
    if (lVar2 != 0) {
      func_0x0001026bd49c(0,0x112eb5370,&PTR_PTR_1126c60d0);
      func_0x000107c61434(uVar3);
      func_0x000107c61174(lVar2);
      FUN_1026bd4dc(uVar3,lVar2);
      puVar4 = PTR_PTR_1126b1de8;
      func_0x000107c610f8();
      func_0x000107c453e4();
      func_0x000107c53cc8();
      func_0x000107c61170(lVar2);
      func_0x000107c61170(uVar3);
      goto LAB_1026bccd8;
    }
  }
  puVar4 = (undefined *)0x0;
LAB_1026bccd8:
  *param_1 = puVar4;
  return;
}



/* Entry: 1026bd130; end: 1026bd15b;  */

void FUN_1026bd130(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1026bd15c; end: 1026bd163;  */

void FUN_1026bd15c(undefined8 *param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined *puVar11;
  long unaff_x20;
  long lVar12;
  long lVar13;
  undefined1 auStack_d8 [32];
  long lStack_b8;
  undefined1 auStack_b0 [32];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar13 = *(long *)(unaff_x20 + 0x10);
  lVar12 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar13 + 0x10,auStack_78,0,0);
  lVar13 = lVar13 + 0x10;
  func_0x000107c61618();
  if (lVar13 == 0) {
    puVar11 = (undefined *)0x0;
  }
  else {
    lVar3 = lVar13;
    func_0x000107c4b88c();
    func_0x000107c61180();
    func_0x000107c615e8(lVar13);
    puVar11 = (undefined *)0x0;
    if (lVar3 != 0) {
      func_0x000107c61428(lVar12 + 0x10,auStack_90,0,0);
      lVar12 = lVar12 + 0x10;
      func_0x000107c61618();
      puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (lVar12 != 0) {
        lVar13 = lVar12;
        func_0x000107c3db78();
        func_0x000107c61180();
        func_0x000107c615e8(lVar12);
        lVar12 = lVar13;
        func_0x000107c3e15c();
        func_0x000107c61180();
        func_0x000107c61170(lVar13);
        puVar11 = PTR___sypN_11034f1a8;
        lVar4 = lVar12;
        func_0x000107c5fc54(lVar12,PTR___sypN_11034f1a8 + 8);
        func_0x000107c61170(lVar12);
        lVar12 = lVar4;
        puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
        for (lVar13 = *(long *)(lVar4 + 0x10); lVar13 != 0; lVar13 = lVar13 + -1) {
          lVar12 = lVar12 + 0x20;
          func_0x0001000bb420(lVar12,auStack_b0);
          func_0x000100102924(auStack_b0,auStack_d8);
          uVar7 = 0;
          func_0x000104384ae4(0);
          plVar8 = &lStack_b8;
          func_0x000107c6147c(plVar8,auStack_d8,puVar11 + 8,uVar7,6);
          lVar2 = lStack_b8;
          if ((((ulong)plVar8 & 1) != 0) && (lStack_b8 != 0)) {
            puVar6 = puVar9;
            func_0x000107c61550();
            if (((int)puVar6 == 0) ||
               (((long)puVar9 < 0 || (puVar6 = puVar9, ((ulong)puVar9 >> 0x3e & 1) != 0)))) {
              if ((ulong)puVar9 >> 0x3e == 0) {
                puVar5 = *(undefined **)(((ulong)puVar9 & 0xffffffffffffff8) + 0x10);
              }
              else {
                puVar5 = (undefined *)((ulong)puVar9 & 0xffffffffffffff8);
                if ((undefined *)0x7fffffffffffffff < puVar9) {
                  puVar5 = puVar9;
                }
                func_0x000107c60480(puVar5);
              }
              puVar6 = (undefined *)0x0;
              FUN_1026bbb78(0,puVar5 + 1,1,puVar9);
            }
            uVar10 = (ulong)puVar6 & 0xffffffffffffff8;
            uVar1 = *(ulong *)(uVar10 + 0x10);
            puVar9 = puVar6;
            if (*(ulong *)(uVar10 + 0x18) >> 1 <= uVar1) {
              puVar9 = (undefined *)(ulong)(1 < *(ulong *)(uVar10 + 0x18));
              FUN_1026bbb78(puVar9,uVar1 + 1,1,puVar6);
              uVar10 = (ulong)puVar9 & 0xffffffffffffff8;
            }
            *(ulong *)(uVar10 + 0x10) = uVar1 + 1;
            *(long *)(uVar10 + uVar1 * 8 + 0x20) = lVar2;
          }
        }
        func_0x000107c6142c(lVar4);
      }
      func_0x0001026bd49c(0,0x112eb5370,&PTR_PTR_1126c60d0);
      func_0x000107c61174(lVar3);
      FUN_1026bd4dc(puVar9,lVar3);
      puVar11 = PTR_PTR_1126b1de8;
      func_0x000107c610f8();
      func_0x000107c453e4();
      func_0x000107c53cc8();
      func_0x000107c61170(lVar3);
      func_0x000107c61170(puVar9);
    }
  }
  *param_1 = puVar11;
  return;
}



/* Entry: 1026bd164; end: 1026bd18f;  */

void FUN_1026bd164(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1026bd190; end: 1026bd1af;  */

void FUN_1026bd190(void)

{
  FUN_1026bc60c();
  return;
}



/* Entry: 1026bd1b0; end: 1026bd20b;  */

void FUN_1026bd1b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_110537c60;
  return;
}



/* Entry: 1026bd20c; end: 1026bd27f;  */

/* WARNING: Possible PIC construction at 0x0001026bd24c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001026bd250) */
/* WARNING: Removing unreachable block (ram,0x0001026bd254) */

void FUN_1026bd20c(ulong *param_1,long *param_2,ulong *param_3,long *param_4)

{
  undefined1 *puVar1;
  int iVar2;
  ulong *puVar3;
  ulong uVar4;
  long *plVar5;
  long *unaff_x19;
  ulong *unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  iVar2 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  puVar3 = param_3;
  plVar5 = param_4;
  if (iVar2 != 0) {
    unaff_x30 = 0x1026bd250;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
    puVar3 = param_1;
    plVar5 = param_2;
    unaff_x19 = param_4;
    unaff_x20 = param_3;
    unaff_x29 = puVar1;
  }
  *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  if (*puVar3 == 0 || (*puVar3 & 1) != 0) {
    uVar4 = (long)plVar5 + (long)(int)*plVar5;
    func_0x000107c61518(uVar4,*plVar5 >> 0x20,0,0);
    *puVar3 = uVar4;
  }
  return;
}



/* Entry: 1026bd280; end: 1026bd2a3;  */

void FUN_1026bd280(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong *puVar4;
  long *plVar5;
  
  puVar4 = (ulong *)0x112eb5498;
  plVar5 = (long *)&UNK_10dacbed0;
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    func_0x0001026bd49c(0,0x112eb5268,&PTR_PTR_1126c60a0);
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



/* Entry: 1026bd2a4; end: 1026bd2ff;  */

void FUN_1026bd2a4(void)

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
    func_0x000104384ae4();
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x112eb5488;
  plVar5 = (long *)&UNK_10dacbec0;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 1026bd300; end: 1026bd323;  */

void FUN_1026bd300(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong *puVar4;
  long *plVar5;
  
  puVar4 = (ulong *)0x112eb5480;
  plVar5 = (long *)&UNK_10dacbeb8;
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    func_0x0001026bd49c(0,0x112eb5260,&PTR_PTR_1126c60f8);
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



/* Entry: 1026bd324; end: 1026bd39b;  */

void FUN_1026bd324(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    func_0x0001026bd49c(0,param_1,param_2);
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



/* Entry: 1026bd39c; end: 1026bd41b;  */

void FUN_1026bd39c(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong *puVar4;
  long *plVar5;
  
  puVar4 = (ulong *)0x112eb5470;
  plVar5 = (long *)&UNK_10dacbea8;
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    func_0x0001026bd49c(0,0x112eb5250,&PTR_PTR_1126d0948);
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



/* Entry: 1026bd41c; end: 1026bd43b;  */

void FUN_1026bd41c(void)

{
  func_0x000107c61168(&PTR_PTR_112eb53f8);
  return;
}



/* Entry: 1026bd43c; end: 1026bd46f;  */

void FUN_1026bd43c(void)

{
  long unaff_x20;
  
  **(undefined1 **)(unaff_x20 + 0x10) = 1;
  return;
}



/* Entry: 1026bd470; end: 1026bd4db;  */

void FUN_1026bd470(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = **(undefined8 **)(unaff_x20 + 0x10);
  **(undefined8 **)(unaff_x20 + 0x10) = param_1;
  func_0x000107c61434();
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1);
  return;
}



/* Entry: 1026bd4dc; end: 1026bd66f;  */

undefined8 FUN_1026bd4dc(ulong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 unaff_x20;
  undefined1 auStack_b0 [16];
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x000107c614e8();
  func_0x000107c610f8();
  func_0x000107c453e4();
  if (param_1 >> 0x3e == 0) {
    uVar4 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar4 = param_1;
    }
    func_0x000107c60480();
  }
  if (uVar4 == 0) {
    func_0x000107c6142c(param_1);
  }
  else {
    if ((param_1 & 0xc000000000000001) == 0) {
      if (*(long *)((param_1 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1026bd670);
        (*pcVar3)();
      }
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      func_0x000107c61174(uVar5);
    }
    else {
      uVar5 = 0;
      func_0x0001026c5d10(0,param_1);
    }
    func_0x000107c6142c(param_1);
    uStack_60 = 0;
    uStack_58 = 0xe000000000000000;
    uStack_70 = 0;
    uStack_68 = 0xe000000000000000;
    uStack_80 = 0;
    uStack_78 = 0xe000000000000000;
    puStack_98 = &uStack_60;
    puStack_90 = &uStack_70;
    puStack_88 = &uStack_80;
    uStack_a0 = param_2;
    func_0x00010438499c(FUN_1026bd8f0,auStack_b0);
    uVar2 = uStack_58;
    uVar6 = uStack_60;
    func_0x000107c5fadc(uStack_60,uStack_58);
    func_0x000107c56abc(unaff_x20);
    func_0x000107c61170(uVar6);
    uVar1 = uStack_68;
    uVar6 = uStack_70;
    func_0x000107c5fadc(uStack_70,uStack_68);
    func_0x000107c534e4(unaff_x20);
    func_0x000107c61170(uVar6);
    uVar6 = uStack_78;
    uVar7 = uStack_80;
    func_0x000107c5fadc(uStack_80,uStack_78);
    func_0x000107c534e8(unaff_x20);
    func_0x000107c6142c(uVar2);
    func_0x000107c6142c(uVar1);
    func_0x000107c6142c(uVar6);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(param_2);
    param_2 = uVar5;
  }
  func_0x000107c61170(param_2);
  return unaff_x20;
}



/* Entry: 1026bd670; end: 1026bd8ef;  */

/* WARNING: Possible PIC construction at 0x0001026bd774: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026bd7e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026bd80c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026bd834: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026bd858: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026bd78c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001026bd85c) */
/* WARNING: Removing unreachable block (ram,0x0001026bd838) */
/* WARNING: Removing unreachable block (ram,0x0001026bd810) */
/* WARNING: Removing unreachable block (ram,0x0001026bd7e4) */
/* WARNING: Removing unreachable block (ram,0x0001026bd7e8) */
/* WARNING: Removing unreachable block (ram,0x000107c6142c) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0014) */
/* WARNING: Removing unreachable block (ram,0x0001026bd778) */
/* WARNING: Removing unreachable block (ram,0x0001026bd77c) */
/* WARNING: Removing unreachable block (ram,0x0001026bd784) */
/* WARNING: Removing unreachable block (ram,0x0001026bd790) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026bd670(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  uVar5 = *(ulong *)(param_2 + _DAT_113072a70);
  if (uVar5 == 0) {
    return;
  }
  uVar4 = uVar5 & 0xffffffffffffff8;
  if (uVar5 >> 0x3e == 0) {
    uVar2 = *(ulong *)(uVar4 + 0x10);
  }
  else {
    uVar2 = uVar5;
    if (-1 < (long)uVar5) {
      uVar2 = uVar4;
    }
    func_0x000107c60480();
  }
  if (uVar2 == 0) {
    return;
  }
  if ((uVar5 & 0xc000000000000001) == 0) {
    if (*(long *)(uVar4 + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1026bd8f0);
      (*pcVar1)();
    }
    lVar3 = *(long *)(uVar5 + 0x20);
    func_0x000107c61174();
  }
  else {
    lVar3 = 0;
    FUN_10264be7c(0,uVar5,param_4,param_5,param_6,param_7);
  }
  if (*(char *)(lVar3 + _DAT_1130729f0) != '\x01') goto code_r0x000107c61170;
  lVar6 = *(long *)(lVar3 + _DAT_1130729f8);
  if (lVar6 != 0) {
    func_0x000107c61174();
    func_0x000107c5ee84();
    if (param_1 <= 0.0) goto code_r0x000107c61170;
    uVar5 = *(ulong *)(lVar6 + _DAT_113072a28);
    func_0x000107c4077c();
    func_0x000103b3e210();
    if ((uVar5 & 1) != 0) {
      func_0x000107c421a0(param_4);
      goto code_r0x000107c61170;
    }
    func_0x000107c61170(lVar6);
  }
  func_0x000107c61174(*(undefined8 *)(lVar3 + _DAT_1130729c0));
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1026bd8f0; end: 1026bd8fb;  */

/* WARNING: Possible PIC construction at 0x0001026bd774: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026bd7e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026bd80c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026bd834: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026bd858: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026bd78c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001026bd85c) */
/* WARNING: Removing unreachable block (ram,0x0001026bd838) */
/* WARNING: Removing unreachable block (ram,0x0001026bd810) */
/* WARNING: Removing unreachable block (ram,0x0001026bd7e4) */
/* WARNING: Removing unreachable block (ram,0x0001026bd7e8) */
/* WARNING: Removing unreachable block (ram,0x000107c6142c) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0014) */
/* WARNING: Removing unreachable block (ram,0x0001026bd778) */
/* WARNING: Removing unreachable block (ram,0x0001026bd77c) */
/* WARNING: Removing unreachable block (ram,0x0001026bd784) */
/* WARNING: Removing unreachable block (ram,0x0001026bd790) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026bd8f0(double param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar9 = *(ulong *)(param_2 + _DAT_113072a70);
  if (uVar9 == 0) {
    return;
  }
  uVar8 = uVar9 & 0xffffffffffffff8;
  if (uVar9 >> 0x3e == 0) {
    uVar6 = *(ulong *)(uVar8 + 0x10);
  }
  else {
    uVar6 = uVar9;
    if (-1 < (long)uVar9) {
      uVar6 = uVar8;
    }
    func_0x000107c60480();
  }
  if (uVar6 == 0) {
    return;
  }
  if ((uVar9 & 0xc000000000000001) == 0) {
    if (*(long *)(uVar8 + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1026bd8f0);
      (*pcVar5)();
    }
    lVar7 = *(long *)(uVar9 + 0x20);
    func_0x000107c61174();
  }
  else {
    lVar7 = 0;
    FUN_10264be7c(0,uVar9,uVar1,uVar3,uVar2,uVar4);
  }
  if (*(char *)(lVar7 + _DAT_1130729f0) != '\x01') goto code_r0x000107c61170;
  lVar10 = *(long *)(lVar7 + _DAT_1130729f8);
  if (lVar10 != 0) {
    func_0x000107c61174();
    func_0x000107c5ee84();
    if (param_1 <= 0.0) goto code_r0x000107c61170;
    uVar9 = *(ulong *)(lVar10 + _DAT_113072a28);
    func_0x000107c4077c();
    func_0x000103b3e210();
    if ((uVar9 & 1) != 0) {
      func_0x000107c421a0(uVar1);
      goto code_r0x000107c61170;
    }
    func_0x000107c61170(lVar10);
  }
  func_0x000107c61174(*(undefined8 *)(lVar7 + _DAT_1130729c0));
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1026bd8fc; end: 1026bd947;  */

void FUN_1026bd8fc(undefined8 param_1)

{
  func_0x0001000285a8(0x112eb5048,&UNK_10dacbb20);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1026bd9ac,param_1);
  return;
}



/* Entry: 1026bd948; end: 1026bd9ab;  */

void FUN_1026bd948(long *param_1,long param_2)

{
  long lVar1;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1026be370();
  lVar1 = param_2;
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = uStack_38;
  param_1[3] = param_2;
  param_1[4] = (long)&PTR_DAT_110537d80;
  *param_1 = lVar1;
  return;
}



/* Entry: 1026bd9ac; end: 1026bd9b3;  */

void FUN_1026bd9ac(long *param_1)

{
  long lVar1;
  long unaff_x20;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1026be370();
  lVar1 = unaff_x20;
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = uStack_38;
  param_1[3] = unaff_x20;
  param_1[4] = (long)&PTR_DAT_110537d80;
  *param_1 = lVar1;
  return;
}



/* Entry: 1026bd9b4; end: 1026bd9e3;  */

void FUN_1026bd9b4(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 1026bd9e4; end: 1026bd9f7;  */

void FUN_1026bd9e4(void)

{
  func_0x000107c437cc();
  return;
}



/* Entry: 1026bd9f8; end: 1026bda93;  */

undefined * FUN_1026bd9f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b1de8;
  func_0x000107c610f8(PTR_PTR_1126b1de8);
  func_0x000107c453e4();
  puVar2 = PTR_PTR_1126c0308;
  func_0x000107c610f8(PTR_PTR_1126c0308);
  func_0x000107c61174(puVar1);
  func_0x000107c453e4(puVar2);
  func_0x000107c5a494();
  func_0x000107c61174(puVar2);
  func_0x000107c52650(puVar1,param_2,puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  return puVar1;
}



/* Entry: 1026bda94; end: 1026bdaa7;  */

void FUN_1026bda94(void)

{
  func_0x000107c437d0();
  return;
}



/* Entry: 1026bdaa8; end: 1026bdb43;  */

undefined * FUN_1026bdaa8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b1de8;
  func_0x000107c610f8(PTR_PTR_1126b1de8);
  func_0x000107c453e4();
  puVar2 = PTR_PTR_1126c0308;
  func_0x000107c610f8(PTR_PTR_1126c0308);
  func_0x000107c61174(puVar1);
  func_0x000107c453e4(puVar2);
  func_0x000107c5a494();
  func_0x000107c61174(puVar2);
  func_0x000107c52654(puVar1,param_2,puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  return puVar1;
}



/* Entry: 1026bdb44; end: 1026bdb57;  */

void FUN_1026bdb44(void)

{
  func_0x000107c44ef8();
  return;
}



/* Entry: 1026bdb58; end: 1026bdbf7;  */

undefined * FUN_1026bdb58(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b1de8;
  func_0x000107c610f8(PTR_PTR_1126b1de8);
  func_0x000107c453e4();
  puVar2 = PTR_PTR_1126c0308;
  func_0x000107c610f8(PTR_PTR_1126c0308);
  func_0x000107c61174(puVar1);
  func_0x000107c453e4(puVar2);
  func_0x000107c5a494();
  func_0x000107c61174(puVar2);
  func_0x000107c52658(puVar1,param_2,puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  return puVar1;
}



/* Entry: 1026bdbf8; end: 1026bdc0b;  */

void FUN_1026bdbf8(void)

{
  func_0x000107c4c34c();
  return;
}



/* Entry: 1026bdc0c; end: 1026bdcab;  */

undefined * FUN_1026bdc0c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b1de8;
  func_0x000107c610f8(PTR_PTR_1126b1de8);
  func_0x000107c453e4();
  puVar2 = PTR_PTR_1126c0308;
  func_0x000107c610f8(PTR_PTR_1126c0308);
  func_0x000107c61174(puVar1);
  func_0x000107c453e4(puVar2);
  func_0x000107c5a494();
  func_0x000107c61174(puVar2);
  func_0x000107c5265c(puVar1,param_2,puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  return puVar1;
}



/* Entry: 1026bdcac; end: 1026be1a7;  */

void FUN_1026bdcac(void)

{
  code *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  code *pcVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong *puVar13;
  undefined8 *puVar14;
  long unaff_x20;
  undefined8 uVar15;
  ulong auStack_88 [2];
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar7 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c42eac();
  func_0x000107c61180();
  if (lVar7 != 0) {
    lVar8 = lVar7;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar7);
    if (lVar8 == 0) {
      func_0x0001000285a8(0x112eb4f88,&UNK_10dacbaa8);
      func_0x000104886440();
    }
    else {
      puStack_78 = PTR___swiftEmptyArrayStorage_11034f1c8;
      lVar7 = 4;
      func_0x0001026be310(0,4,0);
      puVar14 = (undefined8 *)0x112eb54c8;
      do {
        puVar5 = puStack_78;
        pcVar1 = (code *)puVar14[2];
        uVar3 = puVar14[3];
        pcVar2 = (code *)puVar14[4];
        uVar4 = puVar14[5];
        uStack_68 = puVar14[1];
        uStack_70 = *puVar14;
        puVar9 = &UNK_110537d60;
        func_0x000107c613fc(&UNK_110537d60,0x48,7);
        *(long *)(puVar9 + 0x10) = lVar8;
        uVar15 = *puVar14;
        *(undefined8 *)(puVar9 + 0x20) = puVar14[1];
        *(undefined8 *)(puVar9 + 0x18) = uVar15;
        *(code **)(puVar9 + 0x28) = pcVar1;
        *(undefined8 *)(puVar9 + 0x30) = uVar3;
        *(code **)(puVar9 + 0x38) = pcVar2;
        *(undefined8 *)(puVar9 + 0x40) = uVar4;
        func_0x0001000285a8(0x112eb5050,&UNK_10dacbee0);
        func_0x000107c613fc();
        func_0x000100402194(&uStack_70,auStack_88);
        func_0x000107c6157c(uVar3);
        func_0x000107c6157c(uVar4);
        func_0x000100402194(&uStack_70,auStack_88);
        func_0x000107c6157c(uVar3);
        func_0x000107c6157c(uVar4);
        lVar10 = lVar8;
        func_0x000107c61174();
        pcVar6 = FUN_1026be32c;
        func_0x0001000b64ac(FUN_1026be32c,puVar9);
        lVar11 = lVar10;
        (*pcVar1)();
        uVar12 = (ulong)((uint)lVar11 & 1);
        (*pcVar2)();
        puVar13 = auStack_88;
        auStack_88[0] = uVar12;
        func_0x0001006c71a4();
        func_0x000107c61574(pcVar6);
        func_0x000100bcb1dc(&uStack_70);
        func_0x000107c61170(uVar12);
        func_0x000107c61574(uVar4);
        func_0x000107c61574(uVar3);
        uVar12 = *(ulong *)(puVar5 + 0x10);
        puStack_78 = puVar5;
        if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar12) {
          func_0x0001026be310(1 < *(ulong *)(puVar5 + 0x18),uVar12 + 1,1);
        }
        puVar9 = puStack_78;
        puVar14 = puVar14 + 6;
        *(ulong *)(puStack_78 + 0x10) = uVar12 + 1;
        *(ulong **)(puStack_78 + uVar12 * 8 + 0x20) = puVar13;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
      func_0x0001000285a8(0x112eb4f88,&UNK_10dacbaa8);
      func_0x0001000c19f0(puVar9);
      func_0x000107c61170(lVar10);
      func_0x000107c61574(puVar9);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x1026bdf24);
  (*pcVar6)();
}


