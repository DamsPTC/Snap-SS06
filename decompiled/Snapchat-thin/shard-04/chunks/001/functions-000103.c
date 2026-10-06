/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103130bcc; end: 103130be7;  */

void FUN_103130bcc(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_103130be8();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 103130be8; end: 103130d17;  */

undefined * FUN_103130be8(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103130d18);
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
    puVar3 = (undefined *)0x112f43a08;
    func_0x0001000285a8(0x112f43a08,&UNK_10db8fdd8);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0x112d6ca30;
    func_0x0001000285a8(0x112d6ca30,&UNK_10d92f680);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 103130d18; end: 103130e53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103130d18(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  double dVar6;
  double dVar7;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  uVar1 = param_5 - 2U >> 1;
  if ((uVar1 | param_5 << 0x3f) < 8) {
    uStack_70 = *(undefined8 *)(&UNK_10db8fde8 + uVar1 * 8);
  }
  else {
    uStack_70 = 0;
  }
  *(undefined8 *)(unaff_x20 + _DAT_112f439c8) = uStack_70;
  uStack_68 = 0;
  func_0x0001002a64a8(&uStack_70);
  lVar3 = *(long *)(unaff_x20 + _DAT_112f43988);
  if (lVar3 != 0) {
    func_0x000107c61174();
    lVar4 = lVar3;
    FUN_10312e5c4();
    dVar7 = *(double *)(lVar3 + _DAT_112f43918);
    dVar6 = param_1;
    func_0x00010312e704();
    lVar5 = lVar4;
    func_0x000107c5de64();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103130e54);
      (*pcVar2)();
    }
    func_0x000107c438d4(lVar5);
    func_0x000107c61170(lVar5);
    func_0x000107c609b0(dVar6,param_2,param_3,param_4);
    if (param_1 <= dVar7 * dVar6) {
      FUN_1031301ec();
    }
    func_0x000107c61170(lVar3);
  }
  return;
}



/* Entry: 103130e54; end: 103130e5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103130e54(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uStack_98;
  undefined1 uStack_90;
  undefined1 auStack_88 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar3 + 0x10,auStack_88,0,0,*(undefined8 *)(unaff_x20 + 0x28));
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    uVar7 = *(undefined8 *)(lVar3 + _DAT_112f439a0);
    uStack_98 = 0;
    uStack_90 = 1;
    func_0x000107c6157c(uVar7);
    func_0x0001002a64a8(&uStack_98);
    func_0x000107c61574(uVar7);
    lVar2 = _DAT_112f43988;
    if (*(long *)(lVar3 + _DAT_112f43988) == 0) {
      lVar4 = *(long *)(lVar3 + _DAT_112f43998);
      lVar5 = ((long *)(lVar3 + _DAT_112f43998))[1];
      func_0x000107c614f0();
      (**(code **)(lVar5 + 8))();
      lVar5 = lVar4;
      FUN_103130610();
      func_0x000107c6142c(lVar4);
      uVar7 = *(undefined8 *)(lVar3 + _DAT_112f439b0);
      puVar6 = &UNK_110611d30;
      func_0x000107c613fc(&UNK_110611d30,0x18,7);
      func_0x000107c61614(puVar6 + 0x10,lVar3);
      FUN_10312eea4(0);
      func_0x000107c610f8();
      FUN_10312f1a0(uVar7,lVar5,0x103130f2c,puVar6);
      func_0x000107c61574(puVar6);
      uVar7 = *(undefined8 *)(lVar3 + lVar2);
      *(long *)(lVar3 + lVar2) = lVar5;
      func_0x000107c61174(lVar5);
      func_0x000107c61170(uVar7);
      FUN_10312e69c();
      func_0x000107c3e2c0();
      func_0x000107c61170(uVar7);
      func_0x000107c61604(lVar5 + _DAT_112f43928,lVar3);
      FUN_10312e300(uVar1);
      FUN_10312d3f8();
      func_0x0001000d224c(&uStack_98);
      uVar1 = uStack_98;
      func_0x000107c4291c(uStack_98);
      func_0x000107c615e8(uVar1);
      FUN_10312fc18(0x3fd3333333333333,1);
      func_0x000107c61170(lVar3);
    }
    else {
      FUN_10312fa88(param_1);
      lVar5 = lVar3;
    }
    func_0x000107c61170(lVar5);
  }
  return;
}



/* Entry: 103130e60; end: 103130eb3;  */

void FUN_103130e60(code *param_1,code *param_2)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x18));
  (*param_2)(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 103130eb4; end: 103130ef7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103130eb4(code *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar2 + 0x10,auStack_78,0,0,uVar1,*(undefined8 *)(unaff_x20 + 0x28));
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    lVar5 = *(long *)(lVar2 + _DAT_112f43988);
    if (lVar5 != 0) {
      func_0x000107c61174();
      func_0x0001000d224c(&uStack_80);
      func_0x000107c42b7c(uStack_80);
      func_0x000107c615e8(uStack_80);
      FUN_10312fc18(0x3fd3333333333333,0);
      puVar3 = &UNK_110611d30;
      func_0x000107c613fc(&UNK_110611d30,0x18,7);
      func_0x000107c61614(puVar3 + 0x10,lVar2);
      puVar4 = &UNK_110611df8;
      func_0x000107c613fc(&UNK_110611df8,0x38,7);
      *(undefined **)(puVar4 + 0x10) = puVar3;
      *(long *)(puVar4 + 0x18) = lVar5;
      *(undefined8 *)(puVar4 + 0x20) = uVar1;
      *(code **)(puVar4 + 0x28) = param_1;
      *(undefined8 *)(puVar4 + 0x30) = param_2;
      func_0x000107c61174(lVar5);
      func_0x000107c6157c(puVar3);
      func_0x000107c615f0(uVar1);
      func_0x000100b64c10(param_1,param_2);
      FUN_10312e228(1,0x103130edc,puVar4);
      func_0x000107c61574(puVar3);
      func_0x000107c61574(puVar4);
      FUN_10312d818();
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar5);
      return;
    }
    func_0x000107c61170();
  }
  if (param_1 != (code *)0x0) {
    (*param_1)();
  }
  return;
}



/* Entry: 103130ef8; end: 103130f1f;  */

void FUN_103130ef8(void)

{
  long unaff_x20;
  
  if (*(code **)(unaff_x20 + 0x10) != (code *)0x0) {
    (**(code **)(unaff_x20 + 0x10))();
  }
  return;
}



/* Entry: 103130f20; end: 103130f3b;  */

/* WARNING: Possible PIC construction at 0x00010313051c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031305a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031304a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031305a4) */
/* WARNING: Removing unreachable block (ram,0x000103130520) */
/* WARNING: Removing unreachable block (ram,0x000103130534) */
/* WARNING: Removing unreachable block (ram,0x000103130548) */
/* WARNING: Removing unreachable block (ram,0x0001031305c0) */
/* WARNING: Removing unreachable block (ram,0x000103130554) */
/* WARNING: Removing unreachable block (ram,0x000103130560) */
/* WARNING: Removing unreachable block (ram,0x00010313053c) */
/* WARNING: Removing unreachable block (ram,0x000103130498) */
/* WARNING: Removing unreachable block (ram,0x00010313059c) */
/* WARNING: Removing unreachable block (ram,0x0001031304a8) */
/* WARNING: Removing unreachable block (ram,0x0001031304b4) */
/* WARNING: Removing unreachable block (ram,0x0001031305c4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103130f20(void)

{
  ulong *puVar1;
  ulong uVar2;
  long lVar3;
  code *pcVar4;
  ulong uVar5;
  undefined8 uVar6;
  long unaff_x20;
  ulong uVar7;
  
  uVar5 = *(ulong *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c44dd8();
  func_0x000107c61180();
  if (uVar5 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x103130610);
    (*pcVar4)();
  }
  uVar7 = uVar5;
  func_0x000107c5c3b0();
  func_0x000107c61180();
  func_0x000107c61170(uVar5);
  uVar6 = 0;
  func_0x000100f115fc(0);
  uVar5 = uVar7;
  func_0x000107c5fc54(uVar7,uVar6);
  func_0x000107c61170(uVar7);
  if (uVar5 >> 0x3e == 0) {
    uVar7 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar7 = uVar5 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar5) {
      uVar7 = uVar5;
    }
    func_0x000107c60480();
  }
  if (uVar7 != 0) {
    puVar1 = (ulong *)(lVar3 + _DAT_112f43998);
    uVar7 = *puVar1;
    uVar2 = puVar1[1];
    if ((uVar5 & 0xc000000000000001) == 0) {
      if (*(long *)((uVar5 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1031305cc);
        (*pcVar4)();
      }
      func_0x000107c61174(*(undefined8 *)(uVar5 + 0x20));
    }
    else {
      func_0x000100f040d0(0x3ff0000000000000,0,0,uVar5);
    }
    func_0x000107c614f0(uVar7);
    (**(code **)(uVar2 + 8))();
    FUN_103130610();
    uVar5 = uVar7;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar5);
  return;
}



/* Entry: 103130f3c; end: 103130f83;  */

undefined8 FUN_103130f3c(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112f432a8;
  func_0x0001000285a8(0x112f432a8,&UNK_10db8f980);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 103130f84; end: 103130fbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103130f84(undefined1 *param_1)

{
  undefined1 uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  uVar1 = *param_1;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    *(undefined1 *)(lVar2 + _DAT_112f439d0) = uVar1;
    func_0x000107c61170();
  }
  return;
}



/* Entry: 103130fbc; end: 10313100f; -[_TtC14MiniCameraImpl44MiniCameraTrayContentContainerViewController init] */

undefined1 * FUN_103130fbc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar2 = &uStack_30;
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  func_0x000107c53dec();
  return (undefined1 *)puVar2;
}



/* Entry: 103131010; end: 103131067; -[_TtC14MiniCameraImpl44MiniCameraTrayContentContainerViewController initWithCoder:] */

void FUN_103131010(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "MiniCameraImpl/MiniCameraTrayContentContainerViewController.swift",0x41,2,
                      0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103131068);
  (*pcVar1)();
}



/* Entry: 103131068; end: 1031311fb;  */

void FUN_103131068(long param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined8 unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar6 = &puStack_80;
  lVar2 = param_1;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c3d614();
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
    puVar4 = &UNK_110611f68;
    func_0x000107c613fc(&UNK_110611f68,0x28,7);
    *(long *)(puVar4 + 0x10) = lVar2;
    *(undefined8 *)(puVar4 + 0x18) = unaff_x20;
    *(long *)(puVar4 + 0x20) = param_1;
    puVar5 = &UNK_110611f90;
    func_0x000107c613fc(&UNK_110611f90,0x20,7);
    *(code **)(puVar5 + 0x10) = FUN_103131c1c;
    *(undefined **)(puVar5 + 0x18) = puVar4;
    pcStack_60 = FUN_103131c28;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_10006eb60;
    puStack_68 = &UNK_110611fa8;
    puStack_58 = puVar5;
    func_0x000107c60bc4(&puStack_80);
    puVar7 = puStack_58;
    func_0x000107c61174(lVar2);
    func_0x000107c61174();
    func_0x000107c61174(param_1);
    func_0x000107c6157c(puVar5);
    func_0x000107c61574(puVar7);
    func_0x000107c4e5fc(puVar3);
    func_0x000107c60bd0(ppuVar6);
    puVar7 = puVar5;
    func_0x000107c61544(puVar5,"",0x7e,0x1c,0x28,1);
    func_0x000107c61574(puVar5);
    if (((ulong)puVar7 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1031311fc);
      (*pcVar1)();
    }
    func_0x000107c41c30(param_1);
    func_0x000107c61574(puVar4);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 1031311fc; end: 103131593;  */

void FUN_1031311fc(long param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  func_0x000107c438d4();
  func_0x000107c54b80(0,0,param_1);
  lVar2 = param_2;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103131578);
    (*pcVar1)();
  }
  func_0x000107c438d4();
  func_0x000107c61170(lVar2);
  lVar2 = param_2;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10313157c);
    (*pcVar1)();
  }
  func_0x000107c438d4();
  func_0x000107c61170(lVar2);
  func_0x000107c438d4(param_1);
  func_0x000107c54b80(param_1);
  func_0x000107c3e748(param_3);
  lVar2 = param_2;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103131580);
    (*pcVar1)();
  }
  func_0x000107c3d89c();
  func_0x000107c61170(lVar2);
  lVar2 = param_1;
  func_0x000107c5a050();
  func_0x0001008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x18) = 9;
  *(undefined8 *)(lVar2 + 0x10) = 4;
  lVar3 = param_1;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  lVar4 = param_2;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103131584);
    (*pcVar1)();
  }
  lVar5 = lVar4;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  lVar4 = lVar3;
  func_0x000107c40284(0xc020000000000000);
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar5);
  *(long *)(lVar2 + 0x20) = lVar4;
  lVar3 = param_1;
  func_0x000107c4ace0();
  func_0x000107c61180();
  lVar4 = param_2;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103131588);
    (*pcVar1)();
  }
  lVar5 = lVar4;
  func_0x000107c4ace0();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  lVar4 = lVar3;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar5);
  *(long *)(lVar2 + 0x28) = lVar4;
  lVar3 = param_1;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  lVar4 = param_2;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10313158c);
    (*pcVar1)();
  }
  lVar5 = lVar4;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  lVar4 = lVar3;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar5);
  *(long *)(lVar2 + 0x30) = lVar4;
  func_0x000107c50890();
  func_0x000107c61180();
  lVar3 = param_2;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103131590);
    (*pcVar1)();
  }
  puVar6 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  lVar4 = lVar3;
  func_0x000107c50890(lVar3);
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  lVar3 = param_1;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c61170(lVar4);
  *(long *)(lVar2 + 0x38) = lVar3;
  uVar7 = 0;
  FUN_103131c64(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  lVar3 = lVar2;
  func_0x000107c5fc48(lVar2,uVar7);
  func_0x000107c61574(lVar2);
  func_0x000107c3d048(puVar6);
  func_0x000107c61170(lVar3);
  func_0x000107c5de64();
  func_0x000107c61180();
  if (param_2 != 0) {
    func_0x000107c4abfc();
    func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bf941b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_endAppearanceTransition_1125c2a10);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103131594);
  (*pcVar1)();
}



/* Entry: 103131594; end: 10313174f; -[_TtC14MiniCameraImpl44MiniCameraTrayContentContainerViewController attachUI:] */

/* WARNING: Possible PIC construction at 0x0001031315cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031315d0) */

void FUN_103131594(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_103131068(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 103131750; end: 10313192f; -[_TtC14MiniCameraImpl44MiniCameraTrayContentContainerViewController tray:canUseGestureToExpandOrCollapse:] */

uint FUN_103131750(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  func_0x0001031315e4(param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 103131930; end: 103131aeb; -[_TtC14MiniCameraImpl44MiniCameraTrayContentContainerViewController scrollViewForTray:] */

void FUN_103131930(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  func_0x0001031317c8(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103131aec; end: 103131b47; -[_TtC14MiniCameraImpl44MiniCameraTrayContentContainerViewController trayCanExpandWhenScrollAtBottom:] */

uint FUN_103131aec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  func_0x00010313198c(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 103131b48; end: 103131b9b;  */

void FUN_103131b48(long param_1,ulong param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  func_0x000107c5de64();
  func_0x000107c61180();
  if (param_1 != 0) {
    uVar2 = 0x3ff0000000000000;
    if ((param_2 & 1) == 0) {
      uVar2 = 0x3fd3333333333333;
    }
    func_0x000107c526c0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103131b9c);
  (*pcVar1)();
}



/* Entry: 103131b9c; end: 103131c1b; -[_TtC14MiniCameraImpl44MiniCameraTrayContentContainerViewController initWithNibName:bundle:] */

void FUN_103131b9c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MiniCameraImpl.MiniCameraTrayContentContainerViewController",0x3b,
                      "init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103131bc8);
  (*pcVar1)();
}



/* Entry: 103131c1c; end: 103131c27;  */

void FUN_103131c1c(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  long unaff_x20;
  
  lVar6 = *(long *)(unaff_x20 + 0x10);
  lVar9 = *(long *)(unaff_x20 + 0x18);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c438d4();
  func_0x000107c54b80(0,0,lVar6);
  lVar2 = lVar9;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103131578);
    (*pcVar1)();
  }
  func_0x000107c438d4();
  func_0x000107c61170(lVar2);
  lVar2 = lVar9;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10313157c);
    (*pcVar1)();
  }
  func_0x000107c438d4();
  func_0x000107c61170(lVar2);
  func_0x000107c438d4(lVar6);
  func_0x000107c54b80(lVar6);
  func_0x000107c3e748(uVar10);
  lVar2 = lVar9;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103131580);
    (*pcVar1)();
  }
  func_0x000107c3d89c();
  func_0x000107c61170(lVar2);
  lVar2 = lVar6;
  func_0x000107c5a050();
  func_0x0001008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x18) = 9;
  *(undefined8 *)(lVar2 + 0x10) = 4;
  lVar3 = lVar6;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  lVar4 = lVar9;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103131584);
    (*pcVar1)();
  }
  lVar5 = lVar4;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  lVar4 = lVar3;
  func_0x000107c40284(0xc020000000000000);
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar5);
  *(long *)(lVar2 + 0x20) = lVar4;
  lVar3 = lVar6;
  func_0x000107c4ace0();
  func_0x000107c61180();
  lVar4 = lVar9;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103131588);
    (*pcVar1)();
  }
  lVar5 = lVar4;
  func_0x000107c4ace0();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  lVar4 = lVar3;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar5);
  *(long *)(lVar2 + 0x28) = lVar4;
  lVar3 = lVar6;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  lVar4 = lVar9;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10313158c);
    (*pcVar1)();
  }
  lVar5 = lVar4;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  lVar4 = lVar3;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar5);
  *(long *)(lVar2 + 0x30) = lVar4;
  func_0x000107c50890();
  func_0x000107c61180();
  lVar3 = lVar9;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103131590);
    (*pcVar1)();
  }
  puVar7 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  lVar4 = lVar3;
  func_0x000107c50890(lVar3);
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  lVar3 = lVar6;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar4);
  *(long *)(lVar2 + 0x38) = lVar3;
  uVar8 = 0;
  FUN_103131c64(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  lVar6 = lVar2;
  func_0x000107c5fc48(lVar2,uVar8);
  func_0x000107c61574(lVar2);
  func_0x000107c3d048(puVar7);
  func_0x000107c61170(lVar6);
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar9 != 0) {
    func_0x000107c4abfc();
    func_0x000107c61170(lVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bf941b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(uVar10,PTR_s_endAppearanceTransition_1125c2a10);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103131594);
  (*pcVar1)();
}



/* Entry: 103131c28; end: 103131c47;  */

void FUN_103131c28(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 103131c48; end: 103131c63;  */

void FUN_103131c48(long param_1,long param_2)

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



/* Entry: 103131c64; end: 103131ca3;  */

void FUN_103131c64(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 103131ca4; end: 103131db3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103131ca4(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  ppuVar2 = &puStack_80;
  ppuVar4 = &puStack_80;
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f43a38);
  pcStack_60 = FUN_103131db4;
  puStack_58 = (undefined *)0x0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = (undefined *)0x103131e04;
  puStack_68 = &UNK_110611fe0;
  func_0x000107c60bc4(&puStack_80);
  func_0x000107c61574(puStack_58);
  puVar3 = &UNK_110612018;
  func_0x000107c613fc(&UNK_110612018,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  pcStack_60 = (code *)0x1031327bc;
  puStack_80 = puVar1;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_100ba5314;
  puStack_68 = &UNK_110612030;
  puStack_58 = puVar3;
  func_0x000107c60bc4(&puStack_80);
  func_0x000107c61574(puStack_58);
  func_0x000107c42c14(uVar5);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 103131db4; end: 103131e87;  */

void FUN_103131db4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x000100685a30();
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000103af2c68();
  param_1[3] = uVar1;
  *param_1 = param_2;
  return;
}



/* Entry: 103131e88; end: 103132077;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103131e88(long param_1,long param_2)

{
  ulong uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_68,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    puVar10 = *(undefined8 **)(param_1 + 0x10);
    if (puVar10 == (undefined8 *)0x0) {
      lVar11 = *(long *)(PTR___swiftEmptyArrayStorage_11034f1c8 + 0x10);
      puVar3 = (undefined8 *)PTR___swiftEmptyArrayStorage_11034f1c8;
      puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      func_0x000107c61434(param_1);
      puVar3 = puVar10;
      func_0x000101341d44(puVar10,0);
      puVar4 = &uStack_90;
      func_0x000101343178(puVar4,puVar3 + 4,puVar10,param_1);
      func_0x000100ba5608(uStack_90,uStack_88,uStack_80,uStack_78,uStack_70);
      if (puVar4 != puVar10) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103132078);
        (*pcVar2)();
      }
      lVar11 = puVar3[2];
      puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    PTR___swiftEmptyArrayStorage_11034f1c8 = puVar9;
    if (lVar11 != 0) {
      puVar10 = puVar3 + 4;
      do {
        puVar4 = puVar10;
        func_0x0001007bbd18(puVar10,&uStack_90);
        func_0x000107c602bc();
        func_0x0001007bbff0(&uStack_90);
        uVar5 = 0;
        func_0x000103af2e4c(0);
        puVar6 = puVar4;
        func_0x000107c61480(puVar4,uVar5);
        if (puVar6 == (undefined8 *)0x0) {
          func_0x000107c61170(puVar4);
        }
        else {
          uVar12 = ((undefined8 *)((long)puVar6 + _DAT_112fe9660))[1];
          uVar5 = *(undefined8 *)((long)puVar6 + _DAT_112fe9660);
          func_0x000107c61174(uVar5);
          func_0x000107c61170(puVar4);
          puVar7 = puVar9;
          func_0x000107c61558();
          puVar8 = puVar9;
          if (((ulong)puVar7 & 1) == 0) {
            puVar8 = (undefined *)0x0;
            FUN_103132474(0,*(long *)(puVar9 + 0x10) + 1,1,puVar9);
          }
          uVar1 = *(ulong *)(puVar8 + 0x10);
          puVar9 = puVar8;
          if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar1) {
            puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
            FUN_103132474(puVar9,uVar1 + 1,1,puVar8);
          }
          *(ulong *)(puVar9 + 0x10) = uVar1 + 1;
          *(undefined8 *)(puVar9 + uVar1 * 0x10 + 0x28) = uVar12;
          *(undefined8 *)(puVar9 + uVar1 * 0x10 + 0x20) = uVar5;
        }
        puVar10 = puVar10 + 5;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
    }
    func_0x000107c61574(puVar3);
    uVar5 = *(undefined8 *)(param_2 + _DAT_112f43a40);
    *(undefined **)(param_2 + _DAT_112f43a40) = puVar9;
    func_0x000107c61170(param_2);
    func_0x000107c6142c(uVar5);
  }
  return;
}



/* Entry: 103132078; end: 1031320d7; -[_TtC14MiniCameraImpl39MiniCameraTrayPassthroughViewAggregator init] */

void FUN_103132078(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MiniCameraImpl.MiniCameraTrayPassthroughViewAggregator",0x36,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1031320a4);
  (*pcVar1)();
}



/* Entry: 1031320d8; end: 10313210f; -[_TtC14MiniCameraImpl39MiniCameraTrayPassthroughViewAggregator .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031320d8(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f43a38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112f43a40));
  return;
}



/* Entry: 103132110; end: 10313212f;  */

void FUN_103132110(void)

{
  func_0x000107c61168(&PTR_PTR_1128b9df0);
  return;
}



/* Entry: 103132130; end: 10313246f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_103132130(void)

{
  ulong *puVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  ulong uVar13;
  code *pcVar14;
  ulong uVar15;
  ulong uVar16;
  long unaff_x20;
  undefined *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  undefined *puVar7;
  
  lVar4 = *(long *)(unaff_x20 + _DAT_112f43a40);
  uVar13 = *(ulong *)(lVar4 + 0x10);
  func_0x000107c61434();
  puVar17 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar13 != 0) {
    uVar23 = 0;
    do {
      if (*(ulong *)(lVar4 + 0x10) <= uVar23) {
                    /* WARNING: Does not return */
        pcVar14 = (code *)SoftwareBreakpoint(1,0x103132458);
        (*pcVar14)();
      }
      puVar1 = (ulong *)(lVar4 + 0x20 + uVar23 * 0x10);
      uVar15 = *puVar1;
      uVar21 = puVar1[1];
      uVar5 = uVar15;
      func_0x000107c614f0();
      pcVar14 = *(code **)(uVar21 + 8);
      func_0x000107c61174(uVar15);
      (*pcVar14)(uVar5,uVar21);
      func_0x000107c61170(uVar15);
      if (uVar5 >> 0x3e == 0) {
        uVar15 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar15 = uVar5 & 0xffffffffffffff8;
        if ((uVar5 & 0x8000000000000000) != 0) {
          uVar15 = uVar5;
        }
        func_0x000107c60480();
      }
      uVar21 = (ulong)puVar17 >> 0x3e;
      if (uVar21 == 0) {
        puVar6 = *(undefined **)((undefined *)((ulong)puVar17 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar6 = (undefined *)((ulong)puVar17 & 0xffffffffffffff8);
        if (((ulong)puVar17 & 0x8000000000000000) != 0) {
          puVar6 = puVar17;
        }
        func_0x000107c60480();
      }
      if (SCARRY8((long)puVar6,uVar15)) {
                    /* WARNING: Does not return */
        pcVar14 = (code *)SoftwareBreakpoint(1,0x10313245c);
        (*pcVar14)();
      }
      puVar6 = puVar6 + uVar15;
      puVar7 = puVar17;
      func_0x000107c61550();
      uVar3 = 0;
      if (uVar21 == 0) {
        uVar3 = (uint)puVar7;
      }
      puVar7 = (undefined *)(ulong)uVar3;
      if ((uVar3 != 1) ||
         (uVar16 = (ulong)puVar17 & 0xffffffffffffff8,
         (long)(*(ulong *)(uVar16 + 0x18) >> 1) < (long)puVar6)) {
        if (uVar21 == 0) {
          puVar12 = *(undefined **)((undefined *)((ulong)puVar17 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar12 = (undefined *)((ulong)puVar17 & 0xffffffffffffff8);
          if (((ulong)puVar17 & 0x8000000000000000) != 0) {
            puVar12 = puVar17;
          }
          func_0x000107c60480();
        }
        if ((long)puVar12 <= (long)puVar6) {
          puVar12 = puVar6;
        }
        func_0x0001023b5804(puVar7,puVar12,1,puVar17);
        uVar16 = (ulong)puVar7 & 0xffffffffffffff8;
        puVar17 = puVar7;
      }
      lVar2 = *(long *)(uVar16 + 0x10);
      uVar21 = (*(ulong *)(uVar16 + 0x18) >> 1) - lVar2;
      if (uVar5 >> 0x3e == 0) {
        uVar20 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
        if (uVar20 != 0) {
          if (uVar21 < uVar20) {
                    /* WARNING: Does not return */
            pcVar14 = (code *)SoftwareBreakpoint(1,0x10313246c);
            (*pcVar14)();
          }
          uVar8 = 0;
          FUN_103132760(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
          func_0x000107c6140c(uVar16 + lVar2 * 8 + 0x20,(uVar5 & 0xffffffffffffff8) + 0x20,uVar20,
                              uVar8);
          goto LAB_1031323a8;
        }
LAB_103132190:
        func_0x000107c6142c(uVar5);
        if (0 < (long)uVar15) goto LAB_10313245c;
      }
      else {
        uVar20 = uVar5 & 0xffffffffffffff8;
        if ((uVar5 & 0x8000000000000000) != 0) {
          uVar20 = uVar5;
        }
        uVar9 = uVar20;
        func_0x000107c60480();
        if (uVar9 == 0) goto LAB_103132190;
        func_0x000107c60480();
        if ((long)uVar21 < (long)uVar20) {
                    /* WARNING: Does not return */
          pcVar14 = (code *)SoftwareBreakpoint(1,0x103132468);
          (*pcVar14)();
        }
        if ((long)uVar9 < 1) {
                    /* WARNING: Does not return */
          pcVar14 = (code *)SoftwareBreakpoint(1,0x103132470);
          (*pcVar14)();
        }
        lVar2 = uVar16 + lVar2 * 8;
        puVar18 = (undefined8 *)(lVar2 + 0x20);
        if ((uVar5 & 0xc000000000000001) == 0) {
          uVar8 = *(undefined8 *)(uVar5 + 0x20);
          *puVar18 = uVar8;
          lVar22 = uVar9 - 1;
          if (lVar22 != 0) {
            uVar11 = uVar8;
            puVar18 = (undefined8 *)(uVar5 + 0x28);
            puVar19 = (undefined8 *)(lVar2 + 0x28);
            do {
              uVar8 = *puVar18;
              *puVar19 = uVar8;
              func_0x000107c61174(uVar11);
              lVar22 = lVar22 + -1;
              uVar11 = uVar8;
              puVar18 = puVar18 + 1;
              puVar19 = puVar19 + 1;
            } while (lVar22 != 0);
          }
          func_0x000107c61174(uVar8);
        }
        else {
          uVar21 = 0;
          do {
            uVar10 = uVar21;
            FUN_1031325a4(uVar21,uVar5,&PTR__OBJC_CLASS___UIView_1126aec20,0x112d360b0);
            puVar18[uVar21] = uVar10;
            uVar21 = uVar21 + 1;
          } while (uVar9 != uVar21);
        }
LAB_1031323a8:
        func_0x000107c6142c(uVar5);
        if ((long)uVar20 < (long)uVar15) {
LAB_10313245c:
                    /* WARNING: Does not return */
          pcVar14 = (code *)SoftwareBreakpoint(1,0x103132460);
          (*pcVar14)();
        }
        if (0 < (long)uVar20) {
          if (SCARRY8(*(long *)(uVar16 + 0x10),uVar20)) {
                    /* WARNING: Does not return */
            pcVar14 = (code *)SoftwareBreakpoint(1,0x103132464);
            (*pcVar14)();
          }
          *(ulong *)(uVar16 + 0x10) = *(long *)(uVar16 + 0x10) + uVar20;
        }
      }
      uVar23 = uVar23 + 1;
    } while (uVar23 != uVar13);
  }
  func_0x000107c6142c();
  return puVar17;
}



/* Entry: 103132470; end: 103132473;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_103132470(void)

{
  ulong *puVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  ulong uVar13;
  code *pcVar14;
  ulong uVar15;
  ulong uVar16;
  long unaff_x20;
  undefined *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  undefined *puVar7;
  
  lVar4 = *(long *)(unaff_x20 + _DAT_112f43a40);
  uVar13 = *(ulong *)(lVar4 + 0x10);
  func_0x000107c61434();
  puVar17 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar13 != 0) {
    uVar23 = 0;
    do {
      if (*(ulong *)(lVar4 + 0x10) <= uVar23) {
                    /* WARNING: Does not return */
        pcVar14 = (code *)SoftwareBreakpoint(1,0x103132458);
        (*pcVar14)();
      }
      puVar1 = (ulong *)(lVar4 + 0x20 + uVar23 * 0x10);
      uVar15 = *puVar1;
      uVar21 = puVar1[1];
      uVar5 = uVar15;
      func_0x000107c614f0();
      pcVar14 = *(code **)(uVar21 + 8);
      func_0x000107c61174(uVar15);
      (*pcVar14)(uVar5,uVar21);
      func_0x000107c61170(uVar15);
      if (uVar5 >> 0x3e == 0) {
        uVar15 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar15 = uVar5 & 0xffffffffffffff8;
        if ((uVar5 & 0x8000000000000000) != 0) {
          uVar15 = uVar5;
        }
        func_0x000107c60480();
      }
      uVar21 = (ulong)puVar17 >> 0x3e;
      if (uVar21 == 0) {
        puVar6 = *(undefined **)((undefined *)((ulong)puVar17 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar6 = (undefined *)((ulong)puVar17 & 0xffffffffffffff8);
        if (((ulong)puVar17 & 0x8000000000000000) != 0) {
          puVar6 = puVar17;
        }
        func_0x000107c60480();
      }
      if (SCARRY8((long)puVar6,uVar15)) {
                    /* WARNING: Does not return */
        pcVar14 = (code *)SoftwareBreakpoint(1,0x10313245c);
        (*pcVar14)();
      }
      puVar6 = puVar6 + uVar15;
      puVar7 = puVar17;
      func_0x000107c61550();
      uVar3 = 0;
      if (uVar21 == 0) {
        uVar3 = (uint)puVar7;
      }
      puVar7 = (undefined *)(ulong)uVar3;
      if ((uVar3 != 1) ||
         (uVar16 = (ulong)puVar17 & 0xffffffffffffff8,
         (long)(*(ulong *)(uVar16 + 0x18) >> 1) < (long)puVar6)) {
        if (uVar21 == 0) {
          puVar12 = *(undefined **)((undefined *)((ulong)puVar17 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar12 = (undefined *)((ulong)puVar17 & 0xffffffffffffff8);
          if (((ulong)puVar17 & 0x8000000000000000) != 0) {
            puVar12 = puVar17;
          }
          func_0x000107c60480();
        }
        if ((long)puVar12 <= (long)puVar6) {
          puVar12 = puVar6;
        }
        func_0x0001023b5804(puVar7,puVar12,1,puVar17);
        uVar16 = (ulong)puVar7 & 0xffffffffffffff8;
        puVar17 = puVar7;
      }
      lVar2 = *(long *)(uVar16 + 0x10);
      uVar21 = (*(ulong *)(uVar16 + 0x18) >> 1) - lVar2;
      if (uVar5 >> 0x3e == 0) {
        uVar20 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
        if (uVar20 != 0) {
          if (uVar21 < uVar20) {
                    /* WARNING: Does not return */
            pcVar14 = (code *)SoftwareBreakpoint(1,0x10313246c);
            (*pcVar14)();
          }
          uVar8 = 0;
          FUN_103132760(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
          func_0x000107c6140c(uVar16 + lVar2 * 8 + 0x20,(uVar5 & 0xffffffffffffff8) + 0x20,uVar20,
                              uVar8);
          goto LAB_1031323a8;
        }
LAB_103132190:
        func_0x000107c6142c(uVar5);
        if (0 < (long)uVar15) goto LAB_10313245c;
      }
      else {
        uVar20 = uVar5 & 0xffffffffffffff8;
        if ((uVar5 & 0x8000000000000000) != 0) {
          uVar20 = uVar5;
        }
        uVar9 = uVar20;
        func_0x000107c60480();
        if (uVar9 == 0) goto LAB_103132190;
        func_0x000107c60480();
        if ((long)uVar21 < (long)uVar20) {
                    /* WARNING: Does not return */
          pcVar14 = (code *)SoftwareBreakpoint(1,0x103132468);
          (*pcVar14)();
        }
        if ((long)uVar9 < 1) {
                    /* WARNING: Does not return */
          pcVar14 = (code *)SoftwareBreakpoint(1,0x103132470);
          (*pcVar14)();
        }
        lVar2 = uVar16 + lVar2 * 8;
        puVar18 = (undefined8 *)(lVar2 + 0x20);
        if ((uVar5 & 0xc000000000000001) == 0) {
          uVar8 = *(undefined8 *)(uVar5 + 0x20);
          *puVar18 = uVar8;
          lVar22 = uVar9 - 1;
          if (lVar22 != 0) {
            uVar11 = uVar8;
            puVar18 = (undefined8 *)(uVar5 + 0x28);
            puVar19 = (undefined8 *)(lVar2 + 0x28);
            do {
              uVar8 = *puVar18;
              *puVar19 = uVar8;
              func_0x000107c61174(uVar11);
              lVar22 = lVar22 + -1;
              uVar11 = uVar8;
              puVar18 = puVar18 + 1;
              puVar19 = puVar19 + 1;
            } while (lVar22 != 0);
          }
          func_0x000107c61174(uVar8);
        }
        else {
          uVar21 = 0;
          do {
            uVar10 = uVar21;
            FUN_1031325a4(uVar21,uVar5,&PTR__OBJC_CLASS___UIView_1126aec20,0x112d360b0);
            puVar18[uVar21] = uVar10;
            uVar21 = uVar21 + 1;
          } while (uVar9 != uVar21);
        }
LAB_1031323a8:
        func_0x000107c6142c(uVar5);
        if ((long)uVar20 < (long)uVar15) {
LAB_10313245c:
                    /* WARNING: Does not return */
          pcVar14 = (code *)SoftwareBreakpoint(1,0x103132460);
          (*pcVar14)();
        }
        if (0 < (long)uVar20) {
          if (SCARRY8(*(long *)(uVar16 + 0x10),uVar20)) {
                    /* WARNING: Does not return */
            pcVar14 = (code *)SoftwareBreakpoint(1,0x103132464);
            (*pcVar14)();
          }
          *(ulong *)(uVar16 + 0x10) = *(long *)(uVar16 + 0x10) + uVar20;
        }
      }
      uVar23 = uVar23 + 1;
    } while (uVar23 != uVar13);
  }
  func_0x000107c6142c();
  return puVar17;
}



/* Entry: 103132474; end: 1031325a3;  */

undefined * FUN_103132474(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1031325a4);
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
    puVar3 = (undefined *)0x112f43a70;
    func_0x0001000285a8(0x112f43a70,&UNK_10db8fe98);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0x112f43a78;
    func_0x0001000285a8(0x112f43a78,&UNK_10db8fea0);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 0x10 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 1031325a4; end: 10313275f;  */

ulong FUN_1031325a4(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103132688);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10313268c);
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
  FUN_103132760(0,param_4,param_3);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103132760);
  (*pcVar2)();
}



/* Entry: 103132760; end: 10313279f;  */

void FUN_103132760(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1031327a0; end: 1031327cb;  */

void FUN_1031327a0(long param_1,long param_2)

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



/* Entry: 1031327cc; end: 1031327d7; -[SCMiniCameraSnapEditorNavigationEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031327cc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f43a80;
  func_0x000107c61428(param_1 + _DAT_112f43a80,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1031327d8; end: 1031327e3; -[SCMiniCameraSnapEditorNavigationEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031327d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f43a80;
  func_0x000107c61428(param_1 + _DAT_112f43a80,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1031327e4; end: 1031327ef; -[SCMiniCameraSnapEditorNavigationEntryPoint lensExplorerStudySettingsServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031327e4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f43a88;
  func_0x000107c61428(param_1 + _DAT_112f43a88,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1031327f0; end: 103132833;  */

void FUN_1031327f0(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 103132834; end: 10313283f; -[SCMiniCameraSnapEditorNavigationEntryPoint setLensExplorerStudySettingsServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103132834(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f43a88;
  func_0x000107c61428(param_1 + _DAT_112f43a88,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103132840; end: 103132893;  */

void FUN_103132840(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103132894; end: 1031328db; -[SCMiniCameraSnapEditorNavigationEntryPoint navigationServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103132894(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f43a90;
  func_0x000107c61428(param_1 + _DAT_112f43a90,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1031328dc; end: 10313293f; -[SCMiniCameraSnapEditorNavigationEntryPoint setNavigationServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031328dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f43a90;
  func_0x000107c61428(param_1 + _DAT_112f43a90,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 103132940; end: 103132a43;  */

/* WARNING: Possible PIC construction at 0x0001031329d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031329e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031329d4) */
/* WARNING: Removing unreachable block (ram,0x0001031329e4) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */

void FUN_103132940(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c4b104();
    func_0x000107c61180();
    if (lVar2 != 0) {
      func_0x000107c4d530();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar1);
        lVar1 = lVar2;
      }
      else {
        FUN_103128d5c(0);
        func_0x000107c613fc();
        FUN_103128a98(lVar1,lVar2,unaff_x20);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 103132a44; end: 103132a6b; -[SCMiniCameraSnapEditorNavigationEntryPoint begin] */

void FUN_103132a44(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_103132940();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103132a6c; end: 103132aaf; -[SCMiniCameraSnapEditorNavigationEntryPoint end] */

void FUN_103132a6c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103132ab0; end: 103132cb3;  */

void FUN_103132ab0(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    uVar2 = 0xd000000000000021;
    if (((param_2 == -0x2fffffffffffffdf) && (param_3 == -0x7ffffffef10399b0)) ||
       (func_0x000107c605b8(0xd000000000000021,0x800000010efc6650,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c55d28();
    }
    else {
      if ((param_2 != -0x2fffffffffffffe7) || (param_3 != -0x7ffffffef0ee7630)) {
        uVar2 = 0xd000000000000019;
        func_0x000107c605b8(0xd000000000000019,0x800000010f1189d0,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "MiniCameraImpl/SCMiniCameraSnapEditorNavigationEntryPoint.swift",0x3f
                              ,2,0x2d,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x103132cb4);
          (*pcVar1)();
        }
      }
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c569f4();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103132cb4; end: 103132d5f; -[SCMiniCameraSnapEditorNavigationEntryPoint setValue:forIvarName:] */

void FUN_103132cb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_103132ab0(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103132d60; end: 103132ddf; -[SCMiniCameraSnapEditorNavigationEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103132d60(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f43a80,0);
  func_0x000107c61614(param_1 + _DAT_112f43a88,0);
  *(undefined8 *)(param_1 + _DAT_112f43a90) = 0;
  *(undefined8 *)(param_1 + _DAT_112f43a98) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103132de0; end: 103132e13;  */

void FUN_103132de0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103132e14; end: 103132e6b; -[SCMiniCameraSnapEditorNavigationEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103132e14(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f43a80);
  func_0x000107c61610(param_1 + _DAT_112f43a88);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f43a90));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f43a98));
  return;
}



/* Entry: 103132e6c; end: 103132ec7;  */

void FUN_103132e6c(void)

{
  func_0x000107c61168(&PTR_PTR_1128b9eb8);
  return;
}



/* Entry: 103132ec8; end: 103132ed7;  */

void FUN_103132ec8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103132ed8; end: 103132f07;  */

void FUN_103132ed8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x0001007d4e28();
  func_0x000107c610f8();
  func_0x000107c453e4();
  *param_1 = uVar1;
  return;
}



/* Entry: 103132f08; end: 103132f73;  */

void FUN_103132f08(undefined8 param_1)

{
  if (lRam0000000112f43af0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e74a25c);
  return;
}



/* Entry: 103132f74; end: 10313316b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103132f74(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 uVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined *apuStack_88 [3];
  undefined8 uStack_70;
  undefined **ppuStack_68;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  uVar1 = *(ulong *)(param_4 + _DAT_113070400);
  uVar2 = ((ulong *)(param_4 + _DAT_113070400))[1];
  uVar3 = uVar1;
  func_0x000107c614f0();
  pcVar8 = *(code **)(uVar2 + 0x20);
  func_0x000107c615f0(uVar1);
  (*pcVar8)(uVar3,uVar2);
  func_0x000107c615e8(uVar1);
  if ((uVar3 & 1) == 0) {
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
  }
  else {
    uVar7 = *(undefined8 *)(param_3 + _DAT_1130385b0);
    func_0x0001000285a8(0x112d5a8a0,&UNK_10d927f50);
    uVar9 = *(undefined8 *)(param_5 + _DAT_113070388);
    func_0x000107c61174();
    func_0x000107c3d14c(uVar9);
    func_0x000107c61180();
    uVar4 = uVar9;
    func_0x0001000b637c();
    func_0x000107c61170(uVar9);
    puVar5 = PTR_PTR_1126aeea8;
    func_0x000107c610f8();
    func_0x000107c453e4();
    uVar6 = 0;
    FUN_103142f20();
    uVar9 = uVar6;
    func_0x000107c613fc();
    func_0x0001031417d8(puVar5,uVar9);
    ppuStack_68 = &PTR_DAT_110612a00;
    apuStack_88[0] = puVar5;
    uStack_70 = uVar6;
    func_0x000103153c74(0);
    func_0x000107c613fc();
    FUN_103153664(uVar7,uVar4,apuStack_88);
    FUN_103153684();
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    *(undefined8 *)(unaff_x20 + 0x10) = uVar7;
  }
  return unaff_x20;
}



/* Entry: 10313316c; end: 1031331bb;  */

undefined8 FUN_10313316c(void)

{
  undefined8 uVar1;
  long unaff_x20;
  long lVar2;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    func_0x000107c6157c(lVar2);
    FUN_103153a5c();
    func_0x000107c61574(lVar2);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  }
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  func_0x000107c61574(uVar1);
  return 0;
}



/* Entry: 1031331bc; end: 1031331df;  */

void FUN_1031331bc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1031331e0; end: 1031331e3;  */

void FUN_1031331e0(void)

{
  return;
}



/* Entry: 1031331e4; end: 103133207;  */

undefined8 FUN_1031331e4(void)

{
  FUN_10313316c();
  return 0;
}



/* Entry: 103133208; end: 103133227;  */

void FUN_103133208(void)

{
  func_0x000107c61168(&PTR_PTR_112f43bd0);
  return;
}



/* Entry: 103133228; end: 1031339bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103133228(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,long param_7,undefined8 param_8,undefined8 param_9
                  ,long param_10,undefined8 param_11,long param_12)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  char *pcVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  undefined1 *puVar12;
  long extraout_x8;
  undefined8 uVar13;
  long unaff_x20;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 auStack_210 [6];
  undefined1 auStack_1e0 [8];
  undefined8 *puStack_1d8;
  undefined8 uStack_1d0;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  long lStack_190;
  undefined1 *puStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
  long lStack_138;
  undefined1 auStack_130 [40];
  undefined *apuStack_108 [3];
  undefined8 uStack_f0;
  undefined **ppuStack_e8;
  undefined1 auStack_e0 [40];
  long alStack_b8 [4];
  undefined **ppuStack_98;
  undefined8 auStack_90 [3];
  undefined8 uStack_78;
  undefined **ppuStack_70;
  
  lStack_138 = param_12;
  uStack_158 = param_11;
  lVar1 = 0;
  uStack_150 = param_8;
  uStack_148 = param_5;
  lStack_140 = param_1;
  func_0x000107c5f804();
  lStack_180 = *(long *)(lVar1 + -8);
  lStack_178 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_180 + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puStack_188 = auStack_1e0 + lVar1;
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_4;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  func_0x000107c61174();
  lVar14 = param_3;
  func_0x000107c4aeb0();
  func_0x000107c61180();
  lVar2 = lVar14;
  func_0x000107c4aeb4();
  func_0x000107c61180();
  func_0x000107c61170(lVar14);
  lVar14 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  lStack_190 = unaff_x20;
  if (lVar14 == 0) {
    func_0x000107c61170(param_6);
    func_0x000107c61170(lStack_140);
    func_0x000107c61170(param_7);
    func_0x000107c61170(param_10);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c61170(uStack_148);
    func_0x000107c61170(uStack_150);
    func_0x000107c61170(param_9);
    func_0x000107c61170(uStack_158);
    func_0x000107c61170(lStack_138);
  }
  else {
    uStack_1b8 = param_9;
    lStack_160 = param_10;
    uStack_1b0 = param_4;
    lStack_198 = param_3;
    lStack_170 = param_7;
    lStack_168 = lVar14;
    func_0x0001000285a8(0x112d59e88,&UNK_10d920c30);
    uVar3 = *(undefined8 *)(param_6 + _DAT_1130385c0);
    func_0x000107c61174();
    uVar7 = uVar3;
    func_0x0001000bda74();
    func_0x000107c61170(uVar3);
    uVar13 = *(undefined8 *)(lStack_140 + _DAT_112f710d8);
    uVar4 = 0;
    FUN_10314365c();
    func_0x000107c613fc();
    uVar3 = uVar13;
    FUN_1031431d8(uVar13,uVar7);
    ppuStack_70 = &PTR_DAT_110613058;
    puVar5 = PTR_PTR_1126aeea8;
    auStack_90[0] = uVar3;
    uStack_78 = uVar4;
    func_0x000107c610f8();
    func_0x000107c615f0(uVar13);
    uStack_1c0 = uVar7;
    func_0x000107c6157c(uVar7);
    func_0x000107c453e4();
    uVar3 = 0;
    FUN_103142f20();
    uVar7 = uVar3;
    func_0x000107c613fc();
    func_0x0001031417d8(puVar5,uVar7);
    lVar14 = lStack_138;
    puStack_1c8 = puVar5;
    func_0x000107c42d48();
    func_0x000107c61180();
    lVar2 = lVar14;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar14);
    lStack_1a8 = param_6;
    uStack_1a0 = param_2;
    if (lVar2 == 0) {
      lVar14 = 0;
      uVar7 = 0;
      ppuStack_98 = (undefined **)0x0;
      alStack_b8[1] = 0;
      alStack_b8[2] = 0;
    }
    else {
      lVar6 = lVar2;
      func_0x000107c615f0();
      func_0x000107c40a74();
      func_0x000107c61180();
      func_0x000107c578a4();
      func_0x000107c57d24(lVar6);
      uVar7 = 0;
      FUN_10313ffb0();
      func_0x000107c610f8();
      lVar14 = lVar6;
      func_0x000107c615f0();
      func_0x00010313fc3c();
      func_0x000107c615ec(lVar2,2);
      func_0x000107c615e8(lVar6);
      ppuStack_98 = &PTR_DAT_1106129e8;
    }
    lVar6 = lStack_178;
    lVar2 = lStack_180;
    puVar12 = puStack_188;
    alStack_b8[0] = lVar14;
    alStack_b8[3] = uVar7;
    (**(code **)(lStack_180 + 0x68))
              (puStack_188,
               *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0,
               lStack_178);
    puVar8 = PTR_PTR_1126ae790;
    func_0x000107c610f8(PTR_PTR_1126ae790);
    uVar7 = 0xd00000000000001e;
    func_0x000107c5fadc(0xd00000000000001e,0x800000010f1271d0);
    func_0x000107c5f800();
    func_0x000107c470d0(puVar8);
    func_0x000107c61170(uVar7);
    (**(code **)(lVar2 + 8))(puVar12,lVar6);
    pcVar9 = 
    "init(conditionalBeginIn:cameraFeaturePluginScope:lensCarouselScopedLensCarouselManagementServices:lensesFeatureServices:lensContentServices:cameraUIServices:lensDownloadMetadataServices:webLensesServices:webLensesSendFlowServices:webLensesActiveLensServices:webLensRetentionStore:lensCrashLoggerServices:)"
    ;
    func_0x0001000c10c0(
                       "init(conditionalBeginIn:cameraFeaturePluginScope:lensCarouselScopedLensCarouselManagementServices:lensesFeatureServices:lensContentServices:cameraUIServices:lensDownloadMetadataServices:webLensesServices:webLensesSendFlowServices:webLensesActiveLensServices:webLensRetentionStore:lensCrashLoggerServices:)"
                       );
    func_0x000107c61180();
    func_0x0001000285a8(0x112d3b7d0,&UNK_10d904cc0);
    lVar14 = lStack_168;
    func_0x000107c3d14c(lStack_168);
    func_0x000107c61180();
    lVar2 = lVar14;
    func_0x0001000b637c();
    func_0x000107c61170(lVar14);
    uVar7 = 0x112d3b7d8;
    func_0x0001000285a8(0x112d3b7d8,&UNK_10d920690);
    uVar4 = 0x1031339bc;
    func_0x0001000bfde0(0x1031339bc,0,uVar7);
    uStack_1d0 = uVar4;
    func_0x000107c61574(lVar2);
    puVar10 = auStack_90;
    puVar12 = auStack_e0;
    func_0x0001031339ec(puVar10,puVar12);
    uVar15 = *(undefined8 *)(lStack_170 + _DAT_11307d1c0);
    FUN_10313fb6c();
    puVar5 = puStack_1c8;
    ppuStack_e8 = &PTR_DAT_110612a00;
    apuStack_108[0] = puStack_1c8;
    uVar16 = *(undefined8 *)(lStack_160 + _DAT_113070388);
    puStack_1d8 = puVar10;
    uStack_f0 = uVar3;
    func_0x000103133a30(alStack_b8,auStack_130);
    puVar11 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x000107c61168();
    func_0x000107c615f0(uVar15);
    func_0x000107c6157c(puVar5);
    func_0x000107c61174(puVar8);
    func_0x000107c615f0(pcVar9);
    uVar4 = uStack_150;
    uVar3 = uStack_150;
    func_0x000107c61174();
    uVar7 = uStack_1b8;
    uVar13 = uStack_1b8;
    lStack_178 = uVar3;
    func_0x000107c61174();
    lStack_180 = uVar13;
    func_0x000107c615f0(uVar16);
    uVar3 = uStack_158;
    uVar13 = uStack_158;
    func_0x000107c61174();
    puStack_188 = (undefined1 *)uVar13;
    func_0x000107c415e0();
    func_0x000107c61180();
    uVar13 = 0;
    FUN_103152ea8(0);
    func_0x000107c610f8();
    *(undefined **)((long)auStack_210 + lVar1 + 0x20) = puVar11;
    *(undefined1 **)((long)auStack_210 + lVar1 + 0x28) = auStack_130;
    *(undefined8 *)((long)auStack_210 + lVar1 + 0x10) = uVar16;
    *(undefined8 *)((long)auStack_210 + lVar1 + 0x18) = uVar3;
    *(undefined8 *)((long)auStack_210 + lVar1) = uVar4;
    *(undefined8 *)((long)auStack_210 + lVar1 + 8) = uVar7;
    uVar3 = uStack_1d0;
    func_0x00010314eed4(uVar13,uStack_1d0,auStack_e0,uVar15,puStack_1d8,puVar12,apuStack_108,puVar8,
                        pcVar9);
    uVar7 = uStack_1b0;
    uVar4 = uStack_1b0;
    func_0x000107c5d198(uStack_1b0);
    func_0x000107c61180();
    func_0x000107c4fc08();
    func_0x000107c61170(uVar4);
    uVar4 = uVar7;
    func_0x000107c3f198(uVar7);
    func_0x000107c61180();
    func_0x000107c4fc08();
    func_0x000107c61170(uVar4);
    *(undefined8 *)(lStack_190 + 0x18) = uVar3;
    func_0x000107c61174(uVar3);
    FUN_10314f164();
    func_0x000107c61170(uVar7);
    func_0x000107c61574(uStack_1c0);
    func_0x000107c61574(puVar5);
    func_0x000107c61170(puVar8);
    func_0x000107c615e8(pcVar9);
    func_0x000107c61170(lStack_178);
    func_0x000107c61170(lStack_180);
    func_0x000107c61170(puStack_188);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(lStack_1a8);
    func_0x000107c61170(lStack_140);
    func_0x000107c615e8(lStack_168);
    func_0x000107c61170(lStack_170);
    func_0x000107c61170(lStack_160);
    func_0x000107c61170(uStack_1a0);
    func_0x000107c61170(lStack_198);
    func_0x000107c61170(uStack_148);
    func_0x000107c61170(lStack_138);
    func_0x000103133a80(alStack_b8);
    func_0x0001000834e4(auStack_90);
  }
  return lStack_190;
}



/* Entry: 1031339bc; end: 103133ac7;  */

void FUN_1031339bc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x000107c4dfe8();
  func_0x000107c61180();
  *param_1 = uVar1;
  return;
}



/* Entry: 103133ac8; end: 103133b63;  */

undefined8 FUN_103133ac8(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  lVar1 = *(long *)(unaff_x20 + 0x18);
  uVar2 = 0;
  if (lVar1 != 0) {
    func_0x000107c61174();
    FUN_10314fc10();
    uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
    uVar2 = uVar3;
    func_0x000107c5d198(uVar3);
    func_0x000107c61180();
    func_0x000107c5d34c();
    func_0x000107c61170(uVar2);
    func_0x000107c3f198(uVar3);
    func_0x000107c61180();
    func_0x000107c5d34c();
    func_0x000107c61170(lVar1);
    func_0x000107c61170(uVar3);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  }
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  func_0x000107c61170(uVar2);
  return 0;
}



/* Entry: 103133b64; end: 103133b8f;  */

void FUN_103133b64(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103133b90; end: 103133b93;  */

void FUN_103133b90(void)

{
  return;
}



/* Entry: 103133b94; end: 103133bb7;  */

undefined8 FUN_103133b94(void)

{
  FUN_103133ac8();
  return 0;
}



/* Entry: 103133bb8; end: 103133bd7;  */

void FUN_103133bb8(void)

{
  func_0x000107c61168(&PTR_PTR_112f43c78);
  return;
}



/* Entry: 103133bd8; end: 103134263;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103133bd8(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7,long param_8,undefined8 param_9,undefined8 param_10)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long unaff_x20;
  undefined8 uVar15;
  undefined8 uVar16;
  code *pcVar17;
  code *pcVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  ulong auStack_70 [2];
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  uVar3 = *(ulong *)(param_3 + _DAT_113070400);
  uVar1 = ((ulong *)(param_3 + _DAT_113070400))[1];
  uVar2 = uVar3;
  func_0x000107c614f0();
  pcVar18 = *(code **)(uVar1 + 0x10);
  func_0x000107c615f0(uVar3);
  (*pcVar18)(uVar2,uVar1);
  func_0x000107c615e8(uVar3);
  if ((uVar2 & 1) == 0) {
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_7);
LAB_10313415c:
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_2);
  }
  else {
    func_0x0001000d224c(auStack_70);
    uVar3 = auStack_70[0];
    func_0x000107c4b324();
    func_0x000107c615e8(auStack_70[0]);
    if ((uVar3 & 1) == 0) {
      func_0x000107c61170(param_1);
      func_0x000107c61170(param_3);
      func_0x000107c61170(param_6);
      func_0x000107c61170(param_5);
      func_0x000107c61170(param_7);
      func_0x000107c61170(param_4);
      func_0x000107c61170(param_2);
      func_0x000107c61170(param_8);
      goto LAB_1031341bc;
    }
    lVar4 = *(long *)(param_3 + _DAT_113070408);
    if (lVar4 != 0) {
      lVar14 = ((long *)(param_3 + _DAT_113070408))[1];
      func_0x000107c615f0();
      lVar5 = param_8;
      func_0x000107c4b2ec();
      func_0x000107c61180();
      lVar6 = lVar5;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar5);
      if (lVar6 != 0) {
        uVar7 = *(undefined8 *)(param_5 + _DAT_1130813f0);
        uVar19 = *(undefined8 *)(param_6 + _DAT_113036458);
        uVar20 = *(undefined8 *)(param_6 + _DAT_113036488);
        uVar16 = *(undefined8 *)(param_7 + _DAT_113070f60);
        uVar15 = *(undefined8 *)(param_1 + _DAT_112f710d8);
        func_0x000107c6157c();
        func_0x000107c6157c(uVar19);
        func_0x000107c6157c(uVar20);
        func_0x000107c6157c(uVar16);
        func_0x000107c4ae5c();
        func_0x000107c61180();
        puVar8 = &UNK_1106121a0;
        func_0x000107c613fc(&UNK_1106121a0,0x18,7);
        func_0x000107c61614(puVar8 + 0x10,uVar15);
        FUN_103414440(0);
        func_0x000107c613fc();
        uVar10 = param_10;
        FUN_103413f70(param_10);
        uVar9 = 0;
        func_0x000104343354(0);
        func_0x000107c613fc();
        pcVar18 = FUN_1031342d0;
        func_0x000104341f08(FUN_1031342d0,puVar8,0,0,uVar10,&PTR_DAT_110652230,uVar9);
        func_0x000107c61580(uVar19,3);
        func_0x000107c6157c(uVar7);
        func_0x000107c6157c(uVar20);
        func_0x000107c6157c(uVar16);
        func_0x000107c61174();
        func_0x000107c6157c(pcVar18);
        lVar5 = lVar6;
        func_0x000107c4c18c();
        func_0x000107c61180();
        func_0x0001000285a8(0x112d5a8a0,&UNK_10d927f50);
        uVar10 = *(undefined8 *)(param_4 + _DAT_113070388);
        func_0x000107c3d14c(uVar10);
        func_0x000107c61180();
        uVar9 = uVar10;
        func_0x0001000b637c();
        func_0x000107c61170(uVar10);
        uVar10 = 0x112d5d480;
        func_0x0001000285a8(0x112d5d480,&UNK_10d923b90);
        pcVar17 = FUN_1031344b0;
        func_0x0001000bfde0(FUN_1031344b0,0,uVar10);
        func_0x000107c61574(uVar9);
        func_0x000103417d80(0);
        func_0x000107c613fc();
        uVar11 = uVar16;
        func_0x0001034162e4(uVar16,pcVar18,&PTR_DAT_11075cab0,FUN_10313432c,uVar19,FUN_103134384,
                            uVar19,FUN_1031343dc,uVar19,FUN_103134450,uVar7,FUN_1031344a8,uVar20,
                            lVar5,pcVar17,&UNK_102a3f210,0);
        func_0x000107c6157c();
        uVar12 = param_9;
        func_0x000107c5c360(param_9);
        func_0x000107c61180();
        uVar10 = *(undefined8 *)(param_3 + _DAT_113070410);
        uVar9 = ((undefined8 *)(param_3 + _DAT_113070410))[1];
        FUN_1034151f0(0);
        func_0x000107c613fc();
        func_0x000107c615f0(uVar10);
        func_0x000107c615f4(lVar4,2);
        uVar13 = uVar11;
        func_0x000103414904(uVar11,&PTR_DAT_1106527e0,uVar12,uVar10,uVar9,lVar4,lVar14);
        func_0x000107c614f0(lVar4);
        pcVar17 = *(code **)(lVar14 + 0x18);
        func_0x000107c6157c(uVar13);
        (*pcVar17)();
        func_0x000107c615e8(lVar4);
        func_0x000107c61574(uVar13);
        func_0x000107c61170(param_3);
        func_0x000107c61170(param_6);
        func_0x000107c61170(param_5);
        func_0x000107c61170(param_7);
        func_0x000107c61170(param_1);
        func_0x000107c615e8(lVar6);
        func_0x000107c61170(param_4);
        func_0x000107c61170(param_2);
        func_0x000107c61170(param_8);
        func_0x000107c61170(param_9);
        func_0x000107c61170(param_10);
        func_0x000107c61574(uVar20);
        func_0x000107c61574(uVar7);
        func_0x000107c61574(uVar19);
        func_0x000107c61574(pcVar18);
        func_0x000107c61574(uVar16);
        func_0x000107c61170(uVar15);
        *(long *)(unaff_x20 + 0x10) = lVar4;
        *(long *)(unaff_x20 + 0x18) = lVar14;
        *(undefined8 *)(unaff_x20 + 0x20) = uVar11;
        *(undefined8 *)(unaff_x20 + 0x28) = uVar13;
        return unaff_x20;
      }
      func_0x000107c61170(param_1);
      func_0x000107c615e8(lVar4);
      func_0x000107c61170(param_3);
      func_0x000107c61170(param_6);
      func_0x000107c61170(param_5);
      func_0x000107c61170(param_7);
      goto LAB_10313415c;
    }
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_7);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_2);
  }
  func_0x000107c61170(param_8);
LAB_1031341bc:
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_10);
  return unaff_x20;
}



/* Entry: 103134264; end: 1031342cf;  */

long FUN_103134264(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x000107c5e3f8();
    func_0x000107c61180();
    func_0x000107c61170(param_1);
  }
  return lVar1;
}



/* Entry: 1031342d0; end: 1031342d7;  */

long FUN_1031342d0(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c5e3f8();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
  }
  return lVar2;
}



/* Entry: 1031342d8; end: 10313432b;  */

undefined8 FUN_1031342d8(void)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  
  func_0x0001000d224c(&uStack_28);
  uVar1 = uStack_28;
  func_0x000107c49fa0(uStack_28);
  func_0x000107c615e8(uStack_28);
  return uVar1;
}



/* Entry: 10313432c; end: 10313432f;  */

undefined8 FUN_10313432c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  
  func_0x0001000d224c(&uStack_28);
  uVar1 = uStack_28;
  func_0x000107c49fa0(uStack_28,param_2,param_1,0);
  func_0x000107c615e8(uStack_28);
  return uVar1;
}



/* Entry: 103134330; end: 103134383;  */

uint FUN_103134330(void)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  
  func_0x0001000d224c(&uStack_28);
  uVar1 = uStack_28;
  func_0x000107c49fa0(uStack_28);
  func_0x000107c615e8(uStack_28);
  return (uint)uVar1 ^ 1;
}



/* Entry: 103134384; end: 10313438b;  */

uint FUN_103134384(void)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  
  func_0x0001000d224c(&uStack_28);
  uVar1 = uStack_28;
  func_0x000107c49fa0(uStack_28);
  func_0x000107c615e8(uStack_28);
  return (uint)uVar1 ^ 1;
}



/* Entry: 10313438c; end: 1031343db;  */

undefined8 FUN_10313438c(void)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  
  func_0x0001000d224c(&uStack_28);
  uVar1 = uStack_28;
  func_0x000107c4233c(uStack_28);
  func_0x000107c615e8(uStack_28);
  return uVar1;
}



/* Entry: 1031343dc; end: 1031343df;  */

undefined8 FUN_1031343dc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  
  func_0x0001000d224c(&uStack_28);
  uVar1 = uStack_28;
  func_0x000107c4233c(uStack_28,param_2,param_1);
  func_0x000107c615e8(uStack_28);
  return uVar1;
}



/* Entry: 1031343e0; end: 10313444f;  */

undefined8 FUN_1031343e0(undefined8 param_1)

{
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  long lStack_48;
  
  func_0x0001000d224c(auStack_68);
  func_0x0001000a8868(auStack_68,uStack_50);
  (**(code **)(lStack_48 + 0xd0))(uStack_50,lStack_48);
  func_0x0001000834e4(auStack_68);
  return param_1;
}



/* Entry: 103134450; end: 103134457;  */

undefined8 FUN_103134450(undefined8 param_1)

{
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  long lStack_48;
  
  func_0x0001000d224c(auStack_68);
  func_0x0001000a8868(auStack_68,uStack_50);
  (**(code **)(lStack_48 + 0xd0))(uStack_50,lStack_48);
  func_0x0001000834e4(auStack_68);
  return param_1;
}



/* Entry: 103134458; end: 1031344a7;  */

undefined8 FUN_103134458(void)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  
  func_0x0001000d224c(&uStack_28);
  uVar1 = uStack_28;
  func_0x000107c4b314(uStack_28);
  func_0x000107c61180();
  func_0x000107c615e8(uStack_28);
  return uVar1;
}



/* Entry: 1031344a8; end: 1031344af;  */

undefined8 FUN_1031344a8(void)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  
  func_0x0001000d224c(&uStack_28);
  uVar1 = uStack_28;
  func_0x000107c4b314(uStack_28);
  func_0x000107c61180();
  func_0x000107c615e8(uStack_28);
  return uVar1;
}



/* Entry: 1031344b0; end: 10313451f;  */

void FUN_1031344b0(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_38;
  
  puStack_38 = (undefined *)0x0;
  func_0x000107c5fc50(*param_2,&puStack_38,PTR___sSSN_11034da80);
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puStack_38 != (undefined *)0x0) {
    puVar1 = puStack_38;
  }
  puVar2 = puVar1;
  func_0x000100403a6c();
  func_0x000107c6142c(puVar1);
  *param_1 = puVar2;
  return;
}



/* Entry: 103134520; end: 103134607;  */

undefined8 FUN_103134520(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  
  lVar3 = *(long *)(unaff_x20 + 0x28);
  if (lVar3 != 0) {
    func_0x000107c6157c(lVar3);
    func_0x000103414a78();
    func_0x000107c61574(lVar3);
    lVar3 = *(long *)(unaff_x20 + 0x28);
    if ((lVar3 != 0) && (lVar4 = *(long *)(unaff_x20 + 0x10), lVar4 != 0)) {
      lVar5 = *(long *)(unaff_x20 + 0x18);
      lVar1 = lVar4;
      func_0x000107c614f0(lVar4);
      pcVar6 = *(code **)(lVar5 + 0x20);
      func_0x000107c6157c(lVar3);
      func_0x000107c615f0(lVar4);
      (*pcVar6)(lVar3,&PTR_DAT_110652310,lVar1,lVar5);
      func_0x000107c615e8(lVar4);
      func_0x000107c61574(lVar3);
    }
  }
  lVar3 = *(long *)(unaff_x20 + 0x20);
  if (lVar3 != 0) {
    func_0x000107c6157c(lVar3);
    FUN_103416fd8();
    func_0x000107c61574(lVar3);
  }
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  func_0x000107c61574(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  func_0x000107c61574(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  func_0x000107c615e8(uVar2);
  return 0;
}



/* Entry: 103134608; end: 10313463b;  */

void FUN_103134608(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10313463c; end: 10313463f;  */

void FUN_10313463c(void)

{
  return;
}



/* Entry: 103134640; end: 1031346ff;  */

undefined8 FUN_103134640(void)

{
  FUN_103134520();
  return 0;
}



/* Entry: 103134700; end: 10313471f;  */

void FUN_103134700(void)

{
  func_0x000107c61168(&PTR_PTR_112f43d20);
  return;
}



/* Entry: 103134720; end: 10313478b;  */

undefined8
FUN_103134720(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_10313478c(param_1,param_2,param_3,param_4,param_5);
  return unaff_x20;
}



/* Entry: 10313478c; end: 103134d2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10313478c(undefined8 param_1,long param_2,long param_3,long param_4,long param_5)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  char *pcVar12;
  code *pcVar13;
  undefined8 *puVar14;
  undefined *puVar15;
  undefined1 *puVar16;
  long lVar17;
  long extraout_x8;
  long unaff_x20;
  long lVar18;
  code *pcVar19;
  undefined8 uVar20;
  long alStack_1c0 [6];
  undefined1 auStack_190 [8];
  undefined1 *puStack_188;
  long lStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  undefined1 auStack_130 [40];
  undefined *apuStack_108 [3];
  undefined8 uStack_f0;
  undefined **ppuStack_e8;
  undefined1 auStack_e0 [40];
  long alStack_b8 [4];
  undefined **ppuStack_98;
  undefined8 auStack_90 [3];
  undefined8 uStack_78;
  undefined **ppuStack_70;
  
  lVar4 = 0;
  func_0x000107c5f804();
  lVar17 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar17 + 0x40));
  lVar3 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  uVar1 = *(ulong *)(param_3 + _DAT_113070400);
  uVar2 = ((ulong *)(param_3 + _DAT_113070400))[1];
  uVar5 = uVar1;
  func_0x000107c614f0();
  pcVar19 = *(code **)(uVar2 + 0x38);
  func_0x000107c615f0(uVar1);
  (*pcVar19)(uVar5,uVar2);
  func_0x000107c615e8(uVar1);
  if ((uVar5 & 1) == 0) {
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_5);
  }
  else {
    uVar8 = param_1;
    lStack_168 = param_3;
    lStack_160 = param_4;
    func_0x000107c4b5dc();
    func_0x000107c61180();
    uVar6 = 0;
    FUN_103143bac();
    func_0x000107c613fc();
    func_0x0001031437ac();
    ppuStack_70 = &PTR_DAT_110613088;
    puVar7 = PTR_PTR_1126aeea8;
    auStack_90[0] = uVar8;
    uStack_78 = uVar6;
    func_0x000107c610f8();
    func_0x000107c453e4();
    uVar8 = 0;
    FUN_103142f20();
    uStack_178 = uVar8;
    func_0x000107c613fc();
    func_0x0001031417d8();
    lVar18 = param_5;
    puStack_170 = puVar7;
    func_0x000107c42d48();
    func_0x000107c61180();
    lVar9 = lVar18;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar18);
    lStack_158 = param_5;
    if (lVar9 == 0) {
      lVar18 = 0;
      uVar8 = 0;
      ppuStack_98 = (undefined **)0x0;
      alStack_b8[1] = 0;
      alStack_b8[2] = 0;
    }
    else {
      lVar10 = lVar9;
      func_0x000107c615f0();
      func_0x000107c40a74();
      func_0x000107c61180();
      func_0x000107c578a4();
      func_0x000107c57d24(lVar10);
      uVar8 = 0;
      FUN_10313ffb0();
      func_0x000107c610f8();
      lVar18 = lVar10;
      func_0x000107c615f0();
      func_0x00010313fc3c();
      func_0x000107c615ec(lVar9,2);
      func_0x000107c615e8(lVar10);
      ppuStack_98 = &PTR_DAT_1106129e8;
    }
    lStack_180 = param_2;
    alStack_b8[0] = lVar18;
    alStack_b8[3] = uVar8;
    (**(code **)(lVar17 + 0x68))
              (auStack_190 + lVar3,
               *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0,
               lVar4);
    puVar11 = PTR_PTR_1126ae790;
    func_0x000107c610f8(PTR_PTR_1126ae790);
    uVar8 = 0xd000000000000027;
    func_0x000107c5fadc(0xd000000000000027,0x800000010f127330);
    func_0x000107c5f800();
    func_0x000107c470d0(puVar11);
    func_0x000107c61170(uVar8);
    (**(code **)(lVar17 + 8))(auStack_190 + lVar3,lVar4);
    pcVar12 = 
    "init(beginIn:lensDownloadMetadataServices:webLensesServices:webLensesActiveLensServices:lensCrashLoggerServices:)"
    ;
    func_0x0001000c10c0(
                       "init(beginIn:lensDownloadMetadataServices:webLensesServices:webLensesActiveLensServices:lensCrashLoggerServices:)"
                       );
    func_0x000107c61180();
    func_0x0001000285a8(0x112f43d90,&UNK_10db90020);
    uVar8 = param_1;
    func_0x000107c4b3dc(param_1);
    func_0x000107c61180();
    uVar6 = uVar8;
    func_0x0001000b637c();
    func_0x000107c61170(uVar8);
    uVar8 = 0x112d3b7d8;
    func_0x0001000285a8(0x112d3b7d8,&UNK_10d920690);
    pcVar19 = FUN_103134d2c;
    func_0x0001000d5158(FUN_103134d2c,0,uVar8);
    func_0x000107c61574(uVar6);
    pcVar13 = FUN_103134fac;
    func_0x0001000bfde0(FUN_103134fac,0,uVar8);
    puVar14 = auStack_90;
    puVar16 = auStack_e0;
    func_0x0001031339ec(puVar14);
    uVar20 = *(undefined8 *)(param_2 + _DAT_11307d1c0);
    FUN_10313fb6c();
    lVar17 = lStack_160;
    puVar7 = puStack_170;
    uStack_f0 = uStack_178;
    ppuStack_e8 = &PTR_DAT_110612a00;
    apuStack_108[0] = puStack_170;
    uVar6 = *(undefined8 *)(lStack_160 + _DAT_113070388);
    puStack_188 = puVar16;
    func_0x000103133a30(alStack_b8,auStack_130);
    puVar15 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x000107c61168();
    func_0x000107c615f0(uVar20);
    func_0x000107c6157c(puVar7);
    func_0x000107c61174(puVar11);
    func_0x000107c615f0(pcVar12);
    lVar4 = lStack_168;
    lVar18 = lStack_168;
    func_0x000107c61174(lStack_168);
    func_0x000107c615f0(uVar6);
    func_0x000107c415e0();
    func_0x000107c61180();
    uVar8 = 0;
    FUN_103152ea8(0);
    func_0x000107c610f8();
    *(undefined **)((long)alStack_1c0 + lVar3 + 0x20) = puVar15;
    *(undefined1 **)((long)alStack_1c0 + lVar3 + 0x28) = auStack_130;
    *(undefined8 *)((long)alStack_1c0 + lVar3 + 0x10) = uVar6;
    *(undefined8 *)((long)alStack_1c0 + lVar3 + 0x18) = 0;
    *(long *)((long)alStack_1c0 + lVar3) = lVar4;
    *(undefined8 *)((long)alStack_1c0 + lVar3 + 8) = 0;
    func_0x00010314eed4(uVar8,pcVar13,auStack_e0,uVar20,puVar14,puStack_188,apuStack_108,puVar11,
                        pcVar12);
    uVar8 = *(undefined8 *)(unaff_x20 + 0x10);
    *(code **)(unaff_x20 + 0x10) = pcVar13;
    func_0x000107c61174();
    func_0x000107c61170(uVar8);
    FUN_10314f164();
    func_0x000107c61574(puVar7);
    func_0x000107c61170(puVar11);
    func_0x000107c615e8(pcVar12);
    func_0x000107c61170(lVar18);
    func_0x000107c61170(pcVar13);
    func_0x000107c61170(lStack_180);
    func_0x000107c61170(lVar17);
    func_0x000107c61170(param_1);
    func_0x000107c61170(lStack_158);
    func_0x000107c61574(pcVar19);
    func_0x000103133a80(alStack_b8);
    func_0x0001000834e4(auStack_90);
  }
  return unaff_x20;
}



/* Entry: 103134d2c; end: 103134fa7;  */

void FUN_103134d2c(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  ppuVar5 = &puStack_a0;
  ppuVar6 = &puStack_a0;
  ppuVar9 = &puStack_a0;
  uVar11 = *param_2;
  *param_1 = 1;
  puVar3 = &UNK_110612200;
  func_0x000107c613fc(&UNK_110612200,0x18,7);
  *(undefined8 **)(puVar3 + 0x10) = param_1;
  puVar4 = &UNK_110612228;
  func_0x000107c613fc(&UNK_110612228,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_103135088;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = (code *)0x1031350b4;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_100fe4704;
  puStack_88 = &UNK_110612240;
  puStack_78 = puVar4;
  func_0x000107c60bc4(&puStack_a0);
  puVar7 = puStack_78;
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar7);
  pcStack_80 = FUN_103134fa8;
  puStack_78 = (undefined *)0x0;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_100fe4704;
  puStack_88 = &UNK_110612268;
  func_0x000107c60bc4(&puStack_a0);
  func_0x000107c61574(puStack_78);
  puVar7 = &UNK_1106122a0;
  func_0x000107c613fc(&UNK_1106122a0,0x18,7);
  *(undefined8 **)(puVar7 + 0x10) = param_1;
  puVar8 = &UNK_1106122c8;
  func_0x000107c613fc(&UNK_1106122c8,0x20,7);
  *(undefined8 *)(puVar8 + 0x10) = 0x1031350f0;
  *(undefined **)(puVar8 + 0x18) = puVar7;
  pcStack_80 = FUN_103135100;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_10006eb60;
  puStack_88 = &UNK_1106122e0;
  puStack_78 = puVar8;
  func_0x000107c60bc4(&puStack_a0);
  puVar1 = puStack_78;
  func_0x000107c6157c(puVar8);
  func_0x000107c61574(puVar1);
  func_0x000107c4c5f0(uVar11);
  func_0x000107c60bd0(ppuVar9);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61574(puVar3);
  puVar3 = puVar4;
  func_0x000107c61544(puVar4,"",0x6d,0x3e,0x2a,1);
  func_0x000107c61574(puVar4);
  if (((ulong)puVar3 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x103134fa0);
    (*pcVar2)();
  }
  uVar10 = 0;
  func_0x000107c61544(0,"",0x6d,0x40,0x21,1);
  func_0x000107c61574(puVar7);
  if ((uVar10 & 1) == 0) {
    puVar3 = puVar8;
    func_0x000107c61544(puVar8,"",0x6d,0x41,0x26,1);
    func_0x000107c61574(puVar8);
    if (((ulong)puVar3 & 1) == 0) {
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x103134fa8);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103134fa4);
  (*pcVar2)();
}



/* Entry: 103134fa8; end: 103134fab;  */

void FUN_103134fa8(void)

{
  return;
}



/* Entry: 103134fac; end: 10313501b;  */

void FUN_103134fac(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_10314e820();
  *param_1 = uVar1;
  return;
}



/* Entry: 10313501c; end: 10313503f;  */

void FUN_10313501c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103135040; end: 103135043;  */

void FUN_103135040(void)

{
  return;
}



/* Entry: 103135044; end: 103135067;  */

undefined8 FUN_103135044(void)

{
  func_0x000103134fd4();
  return 0;
}



/* Entry: 103135068; end: 103135087;  */

void FUN_103135068(void)

{
  func_0x000107c61168(&PTR_PTR_112f43dd8);
  return;
}



/* Entry: 103135088; end: 1031350d3;  */

void FUN_103135088(long param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = **(long **)(unaff_x20 + 0x10);
  **(long **)(unaff_x20 + 0x10) = param_1;
  func_0x000107c61174();
  if (lVar1 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1031350d4; end: 1031350ff;  */

void FUN_1031350d4(long param_1,long param_2)

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



/* Entry: 103135100; end: 10313511f;  */

void FUN_103135100(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}


