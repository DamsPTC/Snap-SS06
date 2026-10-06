/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103368344; end: 103368383;  */

void FUN_103368344(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1033701f4(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("LensesModularCameraScopeGraphBridgeScopeInitializationPluginProvider",0x44,2)
  ;
  *param_1 = uVar1;
  return;
}



/* Entry: 103368384; end: 103368407;  */

void FUN_103368384(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(param_4,param_3);
  func_0x000100082720(param_5,param_6,2);
  *param_1 = param_4;
  return;
}



/* Entry: 103368408; end: 103368433;  */

void FUN_103368408(void)

{
  FUN_103368384();
  return;
}



/* Entry: 103368434; end: 1033684db;  */

void FUN_103368434(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110644428;
  func_0x000107c613fc(&UNK_110644428,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_103368510;
  func_0x0001000823a8(FUN_103368510,puVar1);
  func_0x000100082720("SCLensesModularCameraScopedServicesScopeInitializationPluginProvider",0x44,2)
  ;
  *param_1 = pcVar2;
  return;
}



/* Entry: 1033684dc; end: 1033684e3;  */

void FUN_1033684dc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_110644428;
  func_0x000107c613fc(&UNK_110644428,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_103368510;
  func_0x0001000823a8(FUN_103368510,puVar3);
  func_0x000100082720("SCLensesModularCameraScopedServicesScopeInitializationPluginProvider",0x44,2)
  ;
  *param_1 = pcVar4;
  return;
}



/* Entry: 1033684e4; end: 10336850f;  */

void FUN_1033684e4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 103368510; end: 103368567;  */

void FUN_103368510(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  long unaff_x20;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_110643e68;
  func_0x000107c613fc(&UNK_110643e68,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_103365138;
  func_0x00010058fa64(FUN_103365138,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 103368568; end: 1033686cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103368568(long *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uStack_58;
  long alStack_50 [4];
  
  func_0x000100083b20(alStack_50);
  lVar6 = alStack_50[0];
  lVar2 = alStack_50[0];
  func_0x000107c4ddec();
  func_0x000107c61180();
  func_0x000107c615e8(lVar6);
  lVar6 = *(long *)(lVar2 + _DAT_113082650);
  func_0x000107c61434(lVar6);
  func_0x000107c61170(lVar2);
  if (*(long *)(lVar6 + 0x10) != 0) {
    lVar2 = 0x112ed6ea8;
    uVar5 = 0;
    func_0x0001000285a8(0x112ed6ea8);
    func_0x0001000a7158();
    if ((uVar5 & 1) != 0) {
      func_0x0001000bb420(*(long *)(lVar6 + 0x38) + lVar2 * 0x20,alStack_50);
      goto LAB_10336860c;
    }
  }
  alStack_50[1] = 0;
  alStack_50[0] = 0;
  alStack_50[3] = 0;
  alStack_50[2] = 0;
LAB_10336860c:
  func_0x000107c6142c(lVar6);
  if (alStack_50[3] == 0) {
    func_0x00010006e7f4(alStack_50);
  }
  else {
    uVar4 = 0x112ed6ea8;
    func_0x0001000285a8(0x112ed6ea8,&UNK_10db01590);
    puVar3 = &uStack_58;
    func_0x000107c6147c(puVar3,alStack_50,PTR___sypN_11034f1a8 + 8,uVar4,6);
    if (((ulong)puVar3 & 1) != 0) {
      func_0x000100083b20(alStack_50);
      lVar6 = alStack_50[0];
      uVar4 = 0;
      func_0x0001005b6ec0(0);
      func_0x000107c610f8();
      func_0x00010349cbc4(lVar6,uVar4);
      func_0x000107c61574(uStack_58);
      *param_1 = lVar6;
      return;
    }
  }
  func_0x0001048d9980(0xd00000000000004e,0x800000010f142280);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1033686d0);
  (*pcVar1)();
}



/* Entry: 1033686d0; end: 1033686f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033686d0(long *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uStack_58;
  long alStack_50 [4];
  
  func_0x000100083b20(alStack_50);
  lVar6 = alStack_50[0];
  lVar2 = alStack_50[0];
  func_0x000107c4ddec();
  func_0x000107c61180();
  func_0x000107c615e8(lVar6);
  lVar6 = *(long *)(lVar2 + _DAT_113082650);
  func_0x000107c61434(lVar6);
  func_0x000107c61170(lVar2);
  if (*(long *)(lVar6 + 0x10) != 0) {
    lVar2 = 0x112ed6ea8;
    uVar5 = 0;
    func_0x0001000285a8(0x112ed6ea8);
    func_0x0001000a7158();
    if ((uVar5 & 1) != 0) {
      func_0x0001000bb420(*(long *)(lVar6 + 0x38) + lVar2 * 0x20,alStack_50);
      goto LAB_10336860c;
    }
  }
  alStack_50[1] = 0;
  alStack_50[0] = 0;
  alStack_50[3] = 0;
  alStack_50[2] = 0;
LAB_10336860c:
  func_0x000107c6142c(lVar6);
  if (alStack_50[3] == 0) {
    func_0x00010006e7f4(alStack_50);
  }
  else {
    uVar4 = 0x112ed6ea8;
    func_0x0001000285a8(0x112ed6ea8,&UNK_10db01590);
    puVar3 = &uStack_58;
    func_0x000107c6147c(puVar3,alStack_50,PTR___sypN_11034f1a8 + 8,uVar4,6);
    if (((ulong)puVar3 & 1) != 0) {
      func_0x000100083b20(alStack_50);
      lVar6 = alStack_50[0];
      uVar4 = 0;
      func_0x0001005b6ec0(0);
      func_0x000107c610f8();
      func_0x00010349cbc4(lVar6,uVar4);
      func_0x000107c61574(uStack_58);
      *param_1 = lVar6;
      return;
    }
  }
  func_0x0001048d9980(0xd00000000000004e,0x800000010f142280);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1033686d0);
  (*pcVar1)();
}



/* Entry: 1033686f4; end: 103368723;  */

void FUN_1033686f4(void)

{
  FUN_103368954();
  return;
}



/* Entry: 103368724; end: 10336873f;  */

void FUN_103368724(undefined8 param_1)

{
  func_0x0001000285a8(0x112f5cb78,&UNK_10dbb6020);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_103368740,param_1);
  return;
}



/* Entry: 103368740; end: 10336876f;  */

void FUN_103368740(void)

{
  FUN_103368b10();
  return;
}



/* Entry: 103368770; end: 10336878b;  */

void FUN_103368770(undefined8 param_1)

{
  func_0x0001000285a8(0x112f5cb80,&UNK_10dbb6028);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_10336878c,param_1);
  return;
}



/* Entry: 10336878c; end: 1033687bb;  */

void FUN_10336878c(void)

{
  FUN_103368ccc();
  return;
}



/* Entry: 1033687bc; end: 1033687d7;  */

void FUN_1033687bc(undefined8 param_1)

{
  func_0x0001000285a8(0x112f5cb88,&UNK_10dbb6030);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1033687d8,param_1);
  return;
}



/* Entry: 1033687d8; end: 103368807;  */

void FUN_1033687d8(void)

{
  FUN_103368e88();
  return;
}



/* Entry: 103368808; end: 103368823;  */

void FUN_103368808(undefined8 param_1)

{
  func_0x0001000285a8(0x112f5cb90,&UNK_10dbb6038);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_103368824,param_1);
  return;
}



/* Entry: 103368824; end: 103368853;  */

void FUN_103368824(void)

{
  FUN_103368954();
  return;
}



/* Entry: 103368854; end: 10336886f;  */

void FUN_103368854(undefined8 param_1)

{
  func_0x0001000285a8(0x112f5cb98,&UNK_10dbb6040);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_103368870,param_1);
  return;
}



/* Entry: 103368870; end: 10336889f;  */

void FUN_103368870(void)

{
  FUN_103368b10();
  return;
}



/* Entry: 1033688a0; end: 1033688bb;  */

void FUN_1033688a0(undefined8 param_1)

{
  func_0x0001000285a8(0x112f5cba0,&UNK_10dbb6048);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1033688bc,param_1);
  return;
}



/* Entry: 1033688bc; end: 1033688eb;  */

void FUN_1033688bc(void)

{
  FUN_103368e88();
  return;
}



/* Entry: 1033688ec; end: 103368907;  */

void FUN_1033688ec(undefined8 param_1)

{
  func_0x0001000285a8(0x112f5cba8,&UNK_10dbb6050);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_103368908,param_1);
  return;
}



/* Entry: 103368908; end: 103368937;  */

void FUN_103368908(void)

{
  FUN_103368ccc();
  return;
}



/* Entry: 103368938; end: 103368953;  */

void FUN_103368938(undefined8 param_1)

{
  func_0x0001000285a8(0x112f5cbb0,&UNK_10dbb6058);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_103368ac4,param_1);
  return;
}



/* Entry: 103368954; end: 103368ac3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103368954(undefined8 *param_1,long param_2,code *param_3,code *param_4,code *param_5)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  func_0x000100083b20(&uStack_60);
  uVar3 = uStack_60;
  (*param_3)();
  func_0x000107c61170(uVar3);
  lVar7 = *(long *)(param_2 + _DAT_113082650);
  func_0x000107c61434(lVar7);
  func_0x000107c61170(param_2);
  if (*(long *)(lVar7 + 0x10) != 0) {
    lVar2 = 0x112ed6da0;
    uVar6 = 0;
    func_0x0001000285a8(0x112ed6da0);
    func_0x0001000a7158();
    if ((uVar6 & 1) != 0) {
      func_0x0001000bb420(*(long *)(lVar7 + 0x38) + lVar2 * 0x20,&uStack_60);
      goto LAB_1033689fc;
    }
  }
  uStack_58 = 0;
  uStack_60 = 0;
  lStack_48 = 0;
  uStack_50 = 0;
LAB_1033689fc:
  func_0x000107c6142c(lVar7);
  if (lStack_48 == 0) {
    func_0x00010006e7f4(&uStack_60);
  }
  else {
    uVar3 = 0x112ed6da0;
    func_0x0001000285a8(0x112ed6da0,&UNK_10db01488);
    puVar4 = &uStack_68;
    func_0x000107c6147c(puVar4,&uStack_60,PTR___sypN_11034f1a8 + 8,uVar3,6);
    if (((ulong)puVar4 & 1) != 0) {
      func_0x000100083b20(&uStack_60);
      uVar3 = uStack_60;
      uVar5 = 0;
      (*param_4)(0);
      func_0x000107c610f8();
      (*param_5)(uVar3,uVar5);
      func_0x000107c61574(uStack_68);
      *param_1 = uVar3;
      return;
    }
  }
  func_0x0001048d9980(0xd000000000000039,0x800000010f141e00);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103368ac4);
  (*pcVar1)();
}



/* Entry: 103368ac4; end: 103368af3;  */

void FUN_103368ac4(void)

{
  FUN_103368954();
  return;
}



/* Entry: 103368af4; end: 103368b0f;  */

void FUN_103368af4(undefined8 param_1)

{
  func_0x0001000285a8(0x112f5cbb8,&UNK_10dbb6060);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_103368c80,param_1);
  return;
}



/* Entry: 103368b10; end: 103368c7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103368b10(undefined8 *param_1,long param_2,code *param_3,code *param_4,code *param_5)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  func_0x000100083b20(&uStack_60);
  uVar3 = uStack_60;
  (*param_3)();
  func_0x000107c61170(uVar3);
  lVar7 = *(long *)(param_2 + _DAT_113082650);
  func_0x000107c61434(lVar7);
  func_0x000107c61170(param_2);
  if (*(long *)(lVar7 + 0x10) != 0) {
    lVar2 = 0x112ed6cf8;
    uVar6 = 0;
    func_0x0001000285a8(0x112ed6cf8);
    func_0x0001000a7158();
    if ((uVar6 & 1) != 0) {
      func_0x0001000bb420(*(long *)(lVar7 + 0x38) + lVar2 * 0x20,&uStack_60);
      goto LAB_103368bb8;
    }
  }
  uStack_58 = 0;
  uStack_60 = 0;
  lStack_48 = 0;
  uStack_50 = 0;
LAB_103368bb8:
  func_0x000107c6142c(lVar7);
  if (lStack_48 == 0) {
    func_0x00010006e7f4(&uStack_60);
  }
  else {
    uVar3 = 0x112ed6cf8;
    func_0x0001000285a8(0x112ed6cf8,&UNK_10dbb6930);
    puVar4 = &uStack_68;
    func_0x000107c6147c(puVar4,&uStack_60,PTR___sypN_11034f1a8 + 8,uVar3,6);
    if (((ulong)puVar4 & 1) != 0) {
      func_0x000100083b20(&uStack_60);
      uVar3 = uStack_60;
      uVar5 = 0;
      (*param_4)(0);
      func_0x000107c610f8();
      (*param_5)(uVar3,uVar5);
      func_0x000107c61574(uStack_68);
      *param_1 = uVar3;
      return;
    }
  }
  func_0x0001048d9980(0xd00000000000004c,0x800000010f141db0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103368c80);
  (*pcVar1)();
}



/* Entry: 103368c80; end: 103368caf;  */

void FUN_103368c80(void)

{
  FUN_103368b10();
  return;
}



/* Entry: 103368cb0; end: 103368ccb;  */

void FUN_103368cb0(undefined8 param_1)

{
  func_0x0001000285a8(0x112f5cbc0,&UNK_10dbb6068);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_103368e3c,param_1);
  return;
}



/* Entry: 103368ccc; end: 103368e3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103368ccc(undefined8 *param_1,long param_2,code *param_3,code *param_4,code *param_5)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  func_0x000100083b20(&uStack_60);
  uVar3 = uStack_60;
  (*param_3)();
  func_0x000107c61170(uVar3);
  lVar7 = *(long *)(param_2 + _DAT_113082650);
  func_0x000107c61434(lVar7);
  func_0x000107c61170(param_2);
  if (*(long *)(lVar7 + 0x10) != 0) {
    lVar2 = 0x112e4c718;
    uVar6 = 0;
    func_0x0001000285a8(0x112e4c718);
    func_0x0001000a7158();
    if ((uVar6 & 1) != 0) {
      func_0x0001000bb420(*(long *)(lVar7 + 0x38) + lVar2 * 0x20,&uStack_60);
      goto LAB_103368d74;
    }
  }
  uStack_58 = 0;
  uStack_60 = 0;
  lStack_48 = 0;
  uStack_50 = 0;
LAB_103368d74:
  func_0x000107c6142c(lVar7);
  if (lStack_48 == 0) {
    func_0x00010006e7f4(&uStack_60);
  }
  else {
    uVar3 = 0x112e4c718;
    func_0x0001000285a8(0x112e4c718,&UNK_10da46050);
    puVar4 = &uStack_68;
    func_0x000107c6147c(puVar4,&uStack_60,PTR___sypN_11034f1a8 + 8,uVar3,6);
    if (((ulong)puVar4 & 1) != 0) {
      func_0x000100083b20(&uStack_60);
      uVar3 = uStack_60;
      uVar5 = 0;
      (*param_4)(0);
      func_0x000107c610f8();
      (*param_5)(uVar3,uVar5);
      func_0x000107c61574(uStack_68);
      *param_1 = uVar3;
      return;
    }
  }
  func_0x0001048d9980(0xd00000000000003e,0x800000010f051360);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103368e3c);
  (*pcVar1)();
}



/* Entry: 103368e3c; end: 103368e6b;  */

void FUN_103368e3c(void)

{
  FUN_103368ccc();
  return;
}



/* Entry: 103368e6c; end: 103368e87;  */

void FUN_103368e6c(undefined8 param_1)

{
  func_0x0001000285a8(0x112f5cbc8,&UNK_10dbb6070);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_103368ff8,param_1);
  return;
}



/* Entry: 103368e88; end: 103368ff7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103368e88(undefined8 *param_1,long param_2,code *param_3,code *param_4,code *param_5)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  func_0x000100083b20(&uStack_60);
  uVar3 = uStack_60;
  (*param_3)();
  func_0x000107c61170(uVar3);
  lVar7 = *(long *)(param_2 + _DAT_113082650);
  func_0x000107c61434(lVar7);
  func_0x000107c61170(param_2);
  if (*(long *)(lVar7 + 0x10) != 0) {
    lVar2 = 0x112ed6e10;
    uVar6 = 0;
    func_0x0001000285a8(0x112ed6e10);
    func_0x0001000a7158();
    if ((uVar6 & 1) != 0) {
      func_0x0001000bb420(*(long *)(lVar7 + 0x38) + lVar2 * 0x20,&uStack_60);
      goto LAB_103368f30;
    }
  }
  uStack_58 = 0;
  uStack_60 = 0;
  lStack_48 = 0;
  uStack_50 = 0;
LAB_103368f30:
  func_0x000107c6142c(lVar7);
  if (lStack_48 == 0) {
    func_0x00010006e7f4(&uStack_60);
  }
  else {
    uVar3 = 0x112ed6e10;
    func_0x0001000285a8(0x112ed6e10,&UNK_10db014f8);
    puVar4 = &uStack_68;
    func_0x000107c6147c(puVar4,&uStack_60,PTR___sypN_11034f1a8 + 8,uVar3,6);
    if (((ulong)puVar4 & 1) != 0) {
      func_0x000100083b20(&uStack_60);
      uVar3 = uStack_60;
      uVar5 = 0;
      (*param_4)(0);
      func_0x000107c610f8();
      (*param_5)(uVar3,uVar5);
      func_0x000107c61574(uStack_68);
      *param_1 = uVar3;
      return;
    }
  }
  func_0x0001048d9980(0xd00000000000004b,0x800000010f141d60);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103368ff8);
  (*pcVar1)();
}



/* Entry: 103368ff8; end: 103369027;  */

void FUN_103368ff8(void)

{
  FUN_103368e88();
  return;
}



/* Entry: 103369028; end: 103369217;  */

undefined1  [16] FUN_103369028(void)

{
  return ZEXT816(0x110644590);
}



/* Entry: 103369218; end: 10336937f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103369218(long *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uStack_58;
  long alStack_50 [4];
  
  func_0x000100083b20(alStack_50);
  lVar6 = alStack_50[0];
  lVar2 = alStack_50[0];
  func_0x000107c4ddf0();
  func_0x000107c61180();
  func_0x000107c615e8(lVar6);
  lVar6 = *(long *)(lVar2 + _DAT_113082680);
  func_0x000107c61434(lVar6);
  func_0x000107c61170(lVar2);
  if (*(long *)(lVar6 + 0x10) != 0) {
    lVar2 = 0x112ef6f20;
    uVar5 = 0;
    func_0x0001000285a8(0x112ef6f20);
    func_0x0001000a7158();
    if ((uVar5 & 1) != 0) {
      func_0x0001000bb420(*(long *)(lVar6 + 0x38) + lVar2 * 0x20,alStack_50);
      goto LAB_1033692bc;
    }
  }
  alStack_50[1] = 0;
  alStack_50[0] = 0;
  alStack_50[3] = 0;
  alStack_50[2] = 0;
LAB_1033692bc:
  func_0x000107c6142c(lVar6);
  if (alStack_50[3] == 0) {
    func_0x00010006e7f4(alStack_50);
  }
  else {
    uVar4 = 0x112ef6f20;
    func_0x0001000285a8(0x112ef6f20,&UNK_10db25bf0);
    puVar3 = &uStack_58;
    func_0x000107c6147c(puVar3,alStack_50,PTR___sypN_11034f1a8 + 8,uVar4,6);
    if (((ulong)puVar3 & 1) != 0) {
      func_0x000100083b20(alStack_50);
      lVar6 = alStack_50[0];
      uVar4 = 0;
      func_0x0001005c6de4(0);
      func_0x000107c610f8();
      func_0x00010341b3e8(lVar6,uVar4);
      func_0x000107c61574(uStack_58);
      *param_1 = lVar6;
      return;
    }
  }
  func_0x0001048d9980(0xd000000000000046,0x800000010f142320);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103369380);
  (*pcVar1)();
}



/* Entry: 103369380; end: 1033693e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103369380(long *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uStack_58;
  long alStack_50 [4];
  
  func_0x000100083b20(alStack_50);
  lVar6 = alStack_50[0];
  lVar2 = alStack_50[0];
  func_0x000107c4ddf0();
  func_0x000107c61180();
  func_0x000107c615e8(lVar6);
  lVar6 = *(long *)(lVar2 + _DAT_113082680);
  func_0x000107c61434(lVar6);
  func_0x000107c61170(lVar2);
  if (*(long *)(lVar6 + 0x10) != 0) {
    lVar2 = 0x112ef6f20;
    uVar5 = 0;
    func_0x0001000285a8(0x112ef6f20);
    func_0x0001000a7158();
    if ((uVar5 & 1) != 0) {
      func_0x0001000bb420(*(long *)(lVar6 + 0x38) + lVar2 * 0x20,alStack_50);
      goto LAB_1033692bc;
    }
  }
  alStack_50[1] = 0;
  alStack_50[0] = 0;
  alStack_50[3] = 0;
  alStack_50[2] = 0;
LAB_1033692bc:
  func_0x000107c6142c(lVar6);
  if (alStack_50[3] == 0) {
    func_0x00010006e7f4(alStack_50);
  }
  else {
    uVar4 = 0x112ef6f20;
    func_0x0001000285a8(0x112ef6f20,&UNK_10db25bf0);
    puVar3 = &uStack_58;
    func_0x000107c6147c(puVar3,alStack_50,PTR___sypN_11034f1a8 + 8,uVar4,6);
    if (((ulong)puVar3 & 1) != 0) {
      func_0x000100083b20(alStack_50);
      lVar6 = alStack_50[0];
      uVar4 = 0;
      func_0x0001005c6de4(0);
      func_0x000107c610f8();
      func_0x00010341b3e8(lVar6,uVar4);
      func_0x000107c61574(uStack_58);
      *param_1 = lVar6;
      return;
    }
  }
  func_0x0001048d9980(0xd000000000000046,0x800000010f142320);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103369380);
  (*pcVar1)();
}



/* Entry: 1033693e4; end: 10336940b;  */

void FUN_1033693e4(void)

{
  FUN_10336983c();
  return;
}



/* Entry: 10336940c; end: 103369427;  */

void FUN_10336940c(undefined8 param_1)

{
  func_0x0001000285a8(0x112f5cc90,&UNK_10dbb6b50);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_103369428,param_1);
  return;
}



/* Entry: 103369428; end: 103369457;  */

void FUN_103369428(void)

{
  FUN_1033699dc();
  return;
}



/* Entry: 103369458; end: 103369473;  */

void FUN_103369458(undefined8 param_1)

{
  func_0x0001000285a8(0x112f5cc98,&UNK_10dbb6b58);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_103369474,param_1);
  return;
}



/* Entry: 103369474; end: 1033694a3;  */

void FUN_103369474(void)

{
  FUN_103369b98();
  return;
}



/* Entry: 1033694a4; end: 1033694bf;  */

void FUN_1033694a4(undefined8 param_1)

{
  func_0x0001000285a8(0x112f5cca0,&UNK_10dbb6b60);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1033694c0,param_1);
  return;
}



/* Entry: 1033694c0; end: 1033694ef;  */

void FUN_1033694c0(void)

{
  FUN_103369d54();
  return;
}



/* Entry: 1033694f0; end: 10336950b;  */

void FUN_1033694f0(undefined8 param_1)

{
  func_0x0001000285a8(0x112f5cca8,&UNK_10dbb6b68);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_10336950c,param_1);
  return;
}



/* Entry: 10336950c; end: 10336953b;  */

void FUN_10336950c(void)

{
  FUN_103369f10();
  return;
}



/* Entry: 10336953c; end: 103369557;  */

void FUN_10336953c(undefined8 param_1)

{
  func_0x0001000285a8(0x112f5ccb0,&UNK_10dbb6b70);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_103369558,param_1);
  return;
}



/* Entry: 103369558; end: 10336957f;  */

void FUN_103369558(void)

{
  FUN_10336983c();
  return;
}



/* Entry: 103369580; end: 1033696e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103369580(long *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uStack_58;
  long alStack_50 [4];
  
  func_0x000100083b20(alStack_50);
  lVar6 = alStack_50[0];
  lVar2 = alStack_50[0];
  func_0x000107c4ddf4();
  func_0x000107c61180();
  func_0x000107c615e8(lVar6);
  lVar6 = *(long *)(lVar2 + _DAT_1130826b0);
  func_0x000107c61434(lVar6);
  func_0x000107c61170(lVar2);
  if (*(long *)(lVar6 + 0x10) != 0) {
    lVar2 = 0x112f5cd08;
    uVar5 = 0;
    func_0x0001000285a8(0x112f5cd08);
    func_0x0001000a7158();
    if ((uVar5 & 1) != 0) {
      func_0x0001000bb420(*(long *)(lVar6 + 0x38) + lVar2 * 0x20,alStack_50);
      goto LAB_103369624;
    }
  }
  alStack_50[1] = 0;
  alStack_50[0] = 0;
  alStack_50[3] = 0;
  alStack_50[2] = 0;
LAB_103369624:
  func_0x000107c6142c(lVar6);
  if (alStack_50[3] == 0) {
    func_0x00010006e7f4(alStack_50);
  }
  else {
    uVar4 = 0x112f5cd08;
    func_0x0001000285a8(0x112f5cd08,&UNK_10dbf89f0);
    puVar3 = &uStack_58;
    func_0x000107c6147c(puVar3,alStack_50,PTR___sypN_11034f1a8 + 8,uVar4,6);
    if (((ulong)puVar3 & 1) != 0) {
      func_0x000100083b20(alStack_50);
      lVar6 = alStack_50[0];
      uVar4 = 0;
      func_0x0001005b6c74(0);
      func_0x000107c610f8();
      func_0x000104475180(lVar6,uVar4);
      func_0x000107c61574(uStack_58);
      *param_1 = lVar6;
      return;
    }
  }
  func_0x0001048d9980(0xd00000000000004c,0x800000010f142410);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1033696e8);
  (*pcVar1)();
}



/* Entry: 1033696e8; end: 10336970b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033696e8(long *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uStack_58;
  long alStack_50 [4];
  
  func_0x000100083b20(alStack_50);
  lVar6 = alStack_50[0];
  lVar2 = alStack_50[0];
  func_0x000107c4ddf4();
  func_0x000107c61180();
  func_0x000107c615e8(lVar6);
  lVar6 = *(long *)(lVar2 + _DAT_1130826b0);
  func_0x000107c61434(lVar6);
  func_0x000107c61170(lVar2);
  if (*(long *)(lVar6 + 0x10) != 0) {
    lVar2 = 0x112f5cd08;
    uVar5 = 0;
    func_0x0001000285a8(0x112f5cd08);
    func_0x0001000a7158();
    if ((uVar5 & 1) != 0) {
      func_0x0001000bb420(*(long *)(lVar6 + 0x38) + lVar2 * 0x20,alStack_50);
      goto LAB_103369624;
    }
  }
  alStack_50[1] = 0;
  alStack_50[0] = 0;
  alStack_50[3] = 0;
  alStack_50[2] = 0;
LAB_103369624:
  func_0x000107c6142c(lVar6);
  if (alStack_50[3] == 0) {
    func_0x00010006e7f4(alStack_50);
  }
  else {
    uVar4 = 0x112f5cd08;
    func_0x0001000285a8(0x112f5cd08,&UNK_10dbf89f0);
    puVar3 = &uStack_58;
    func_0x000107c6147c(puVar3,alStack_50,PTR___sypN_11034f1a8 + 8,uVar4,6);
    if (((ulong)puVar3 & 1) != 0) {
      func_0x000100083b20(alStack_50);
      lVar6 = alStack_50[0];
      uVar4 = 0;
      func_0x0001005b6c74(0);
      func_0x000107c610f8();
      func_0x000104475180(lVar6,uVar4);
      func_0x000107c61574(uStack_58);
      *param_1 = lVar6;
      return;
    }
  }
  func_0x0001048d9980(0xd00000000000004c,0x800000010f142410);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1033696e8);
  (*pcVar1)();
}



/* Entry: 10336970c; end: 10336973b;  */

void FUN_10336970c(void)

{
  FUN_103369b98();
  return;
}



/* Entry: 10336973c; end: 103369757;  */

void FUN_10336973c(undefined8 param_1)

{
  func_0x0001000285a8(0x112f5ccc8,&UNK_10dbb6b88);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_103369758,param_1);
  return;
}



/* Entry: 103369758; end: 103369787;  */

void FUN_103369758(void)

{
  FUN_1033699dc();
  return;
}



/* Entry: 103369788; end: 1033697a3;  */

void FUN_103369788(undefined8 param_1)

{
  func_0x0001000285a8(0x112f5ccd0,&UNK_10dbb6b90);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1033697a4,param_1);
  return;
}



/* Entry: 1033697a4; end: 1033697d3;  */

void FUN_1033697a4(void)

{
  FUN_103369d54();
  return;
}



/* Entry: 1033697d4; end: 1033697ef;  */

void FUN_1033697d4(undefined8 param_1)

{
  func_0x0001000285a8(0x112f5ccd8,&UNK_10dbb6b98);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1033697f0,param_1);
  return;
}



/* Entry: 1033697f0; end: 10336981f;  */

void FUN_1033697f0(void)

{
  FUN_103369f10();
  return;
}



/* Entry: 103369820; end: 10336983b;  */

void FUN_103369820(undefined8 param_1)

{
  func_0x0001000285a8(0x112f5cce0,&UNK_10dbb6ba0);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_103369998,param_1);
  return;
}



/* Entry: 10336983c; end: 103369997;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10336983c(undefined8 *param_1,long param_2,code *param_3,undefined8 *param_4)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x000100083b20(&uStack_50);
  uVar3 = uStack_50;
  (*param_3)();
  func_0x000107c61170(uVar3);
  lVar7 = *(long *)(param_2 + _DAT_1130826b0);
  func_0x000107c61434(lVar7);
  func_0x000107c61170(param_2);
  if (*(long *)(lVar7 + 0x10) != 0) {
    lVar2 = 0x112ed6e90;
    uVar6 = 0;
    func_0x0001000285a8(0x112ed6e90);
    func_0x0001000a7158();
    if ((uVar6 & 1) != 0) {
      func_0x0001000bb420(*(long *)(lVar7 + 0x38) + lVar2 * 0x20,&uStack_50);
      goto LAB_1033698dc;
    }
  }
  uStack_48 = 0;
  uStack_50 = 0;
  lStack_38 = 0;
  uStack_40 = 0;
LAB_1033698dc:
  func_0x000107c6142c(lVar7);
  if (lStack_38 == 0) {
    func_0x00010006e7f4(&uStack_50);
  }
  else {
    uVar3 = 0x112ed6e90;
    func_0x0001000285a8(0x112ed6e90,&UNK_10db01578);
    puVar4 = &uStack_58;
    func_0x000107c6147c(puVar4,&uStack_50,PTR___sypN_11034f1a8 + 8,uVar3,6);
    if (((ulong)puVar4 & 1) != 0) {
      func_0x000100083b20(&uStack_50);
      uVar3 = uStack_50;
      uVar5 = *param_4;
      func_0x000107c610f8();
      func_0x000107c471c8();
      func_0x000107c61574(uStack_58);
      func_0x000107c61170(uVar3);
      *param_1 = uVar5;
      return;
    }
  }
  func_0x0001048d9980(0xd000000000000045,0x800000010f1424b0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103369998);
  (*pcVar1)();
}



/* Entry: 103369998; end: 1033699bf;  */

void FUN_103369998(void)

{
  FUN_10336983c();
  return;
}



/* Entry: 1033699c0; end: 1033699db;  */

void FUN_1033699c0(undefined8 param_1)

{
  func_0x0001000285a8(0x112f5cce8,&UNK_10dbb6ba8);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_103369b4c,param_1);
  return;
}



/* Entry: 1033699dc; end: 103369b4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033699dc(undefined8 *param_1,long param_2,code *param_3,code *param_4,code *param_5)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  func_0x000100083b20(&uStack_60);
  uVar3 = uStack_60;
  (*param_3)();
  func_0x000107c61170(uVar3);
  lVar7 = *(long *)(param_2 + _DAT_1130826b0);
  func_0x000107c61434(lVar7);
  func_0x000107c61170(param_2);
  if (*(long *)(lVar7 + 0x10) != 0) {
    lVar2 = 0x112ed6d48;
    uVar6 = 0;
    func_0x0001000285a8(0x112ed6d48);
    func_0x0001000a7158();
    if ((uVar6 & 1) != 0) {
      func_0x0001000bb420(*(long *)(lVar7 + 0x38) + lVar2 * 0x20,&uStack_60);
      goto LAB_103369a84;
    }
  }
  uStack_58 = 0;
  uStack_60 = 0;
  lStack_48 = 0;
  uStack_50 = 0;
LAB_103369a84:
  func_0x000107c6142c(lVar7);
  if (lStack_48 == 0) {
    func_0x00010006e7f4(&uStack_60);
  }
  else {
    uVar3 = 0x112ed6d48;
    func_0x0001000285a8(0x112ed6d48,&UNK_10db01430);
    puVar4 = &uStack_68;
    func_0x000107c6147c(puVar4,&uStack_60,PTR___sypN_11034f1a8 + 8,uVar3,6);
    if (((ulong)puVar4 & 1) != 0) {
      func_0x000100083b20(&uStack_60);
      uVar3 = uStack_60;
      uVar5 = 0;
      (*param_4)(0);
      func_0x000107c610f8();
      (*param_5)(uVar3,uVar5);
      func_0x000107c61574(uStack_68);
      *param_1 = uVar3;
      return;
    }
  }
  func_0x0001048d9980(0xd000000000000043,0x800000010f142460);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103369b4c);
  (*pcVar1)();
}



/* Entry: 103369b4c; end: 103369b7b;  */

void FUN_103369b4c(void)

{
  FUN_1033699dc();
  return;
}



/* Entry: 103369b7c; end: 103369b97;  */

void FUN_103369b7c(undefined8 param_1)

{
  func_0x0001000285a8(0x112f5ccf0,&UNK_10dbb6bb0);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_103369d08,param_1);
  return;
}



/* Entry: 103369b98; end: 103369d07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103369b98(undefined8 *param_1,long param_2,code *param_3,code *param_4,code *param_5)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  func_0x000100083b20(&uStack_60);
  uVar3 = uStack_60;
  (*param_3)();
  func_0x000107c61170(uVar3);
  lVar7 = *(long *)(param_2 + _DAT_1130826b0);
  func_0x000107c61434(lVar7);
  func_0x000107c61170(param_2);
  if (*(long *)(lVar7 + 0x10) != 0) {
    lVar2 = 0x112f5cd08;
    uVar6 = 0;
    func_0x0001000285a8(0x112f5cd08);
    func_0x0001000a7158();
    if ((uVar6 & 1) != 0) {
      func_0x0001000bb420(*(long *)(lVar7 + 0x38) + lVar2 * 0x20,&uStack_60);
      goto LAB_103369c40;
    }
  }
  uStack_58 = 0;
  uStack_60 = 0;
  lStack_48 = 0;
  uStack_50 = 0;
LAB_103369c40:
  func_0x000107c6142c(lVar7);
  if (lStack_48 == 0) {
    func_0x00010006e7f4(&uStack_60);
  }
  else {
    uVar3 = 0x112f5cd08;
    func_0x0001000285a8(0x112f5cd08,&UNK_10dbf89f0);
    puVar4 = &uStack_68;
    func_0x000107c6147c(puVar4,&uStack_60,PTR___sypN_11034f1a8 + 8,uVar3,6);
    if (((ulong)puVar4 & 1) != 0) {
      func_0x000100083b20(&uStack_60);
      uVar3 = uStack_60;
      uVar5 = 0;
      (*param_4)(0);
      func_0x000107c610f8();
      (*param_5)(uVar3,uVar5);
      func_0x000107c61574(uStack_68);
      *param_1 = uVar3;
      return;
    }
  }
  func_0x0001048d9980(0xd00000000000004c,0x800000010f142410);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103369d08);
  (*pcVar1)();
}



/* Entry: 103369d08; end: 103369d37;  */

void FUN_103369d08(void)

{
  FUN_103369b98();
  return;
}



/* Entry: 103369d38; end: 103369d53;  */

void FUN_103369d38(undefined8 param_1)

{
  func_0x0001000285a8(0x112f5ccf8,&UNK_10dbb6bb8);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_103369ec4,param_1);
  return;
}



/* Entry: 103369d54; end: 103369ec3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103369d54(undefined8 *param_1,long param_2,code *param_3,code *param_4,code *param_5)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  func_0x000100083b20(&uStack_60);
  uVar3 = uStack_60;
  (*param_3)();
  func_0x000107c61170(uVar3);
  lVar7 = *(long *)(param_2 + _DAT_1130826b0);
  func_0x000107c61434(lVar7);
  func_0x000107c61170(param_2);
  if (*(long *)(lVar7 + 0x10) != 0) {
    lVar2 = 0x112ed6d58;
    uVar6 = 0;
    func_0x0001000285a8(0x112ed6d58);
    func_0x0001000a7158();
    if ((uVar6 & 1) != 0) {
      func_0x0001000bb420(*(long *)(lVar7 + 0x38) + lVar2 * 0x20,&uStack_60);
      goto LAB_103369dfc;
    }
  }
  uStack_58 = 0;
  uStack_60 = 0;
  lStack_48 = 0;
  uStack_50 = 0;
LAB_103369dfc:
  func_0x000107c6142c(lVar7);
  if (lStack_48 == 0) {
    func_0x00010006e7f4(&uStack_60);
  }
  else {
    uVar3 = 0x112ed6d58;
    func_0x0001000285a8(0x112ed6d58,&UNK_10db01440);
    puVar4 = &uStack_68;
    func_0x000107c6147c(puVar4,&uStack_60,PTR___sypN_11034f1a8 + 8,uVar3,6);
    if (((ulong)puVar4 & 1) != 0) {
      func_0x000100083b20(&uStack_60);
      uVar3 = uStack_60;
      uVar5 = 0;
      (*param_4)(0);
      func_0x000107c610f8();
      (*param_5)(uVar3,uVar5);
      func_0x000107c61574(uStack_68);
      *param_1 = uVar3;
      return;
    }
  }
  func_0x0001048d9980(0xd000000000000045,0x800000010f1423c0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103369ec4);
  (*pcVar1)();
}



/* Entry: 103369ec4; end: 103369ef3;  */

void FUN_103369ec4(void)

{
  FUN_103369d54();
  return;
}



/* Entry: 103369ef4; end: 103369f0f;  */

void FUN_103369ef4(undefined8 param_1)

{
  func_0x0001000285a8(0x112f5cd00,&UNK_10dbb6bc0);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_10336a080,param_1);
  return;
}



/* Entry: 103369f10; end: 10336a07f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103369f10(undefined8 *param_1,long param_2,code *param_3,code *param_4,code *param_5)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  func_0x000100083b20(&uStack_60);
  uVar3 = uStack_60;
  (*param_3)();
  func_0x000107c61170(uVar3);
  lVar7 = *(long *)(param_2 + _DAT_1130826b0);
  func_0x000107c61434(lVar7);
  func_0x000107c61170(param_2);
  if (*(long *)(lVar7 + 0x10) != 0) {
    lVar2 = 0x112ed6bb8;
    uVar6 = 0;
    func_0x0001000285a8(0x112ed6bb8);
    func_0x0001000a7158();
    if ((uVar6 & 1) != 0) {
      func_0x0001000bb420(*(long *)(lVar7 + 0x38) + lVar2 * 0x20,&uStack_60);
      goto LAB_103369fb8;
    }
  }
  uStack_58 = 0;
  uStack_60 = 0;
  lStack_48 = 0;
  uStack_50 = 0;
LAB_103369fb8:
  func_0x000107c6142c(lVar7);
  if (lStack_48 == 0) {
    func_0x00010006e7f4(&uStack_60);
  }
  else {
    uVar3 = 0x112ed6bb8;
    func_0x0001000285a8(0x112ed6bb8,&UNK_10dbb7540);
    puVar4 = &uStack_68;
    func_0x000107c6147c(puVar4,&uStack_60,PTR___sypN_11034f1a8 + 8,uVar3,6);
    if (((ulong)puVar4 & 1) != 0) {
      func_0x000100083b20(&uStack_60);
      uVar3 = uStack_60;
      uVar5 = 0;
      (*param_4)(0);
      func_0x000107c610f8();
      (*param_5)(uVar3,uVar5);
      func_0x000107c61574(uStack_68);
      *param_1 = uVar3;
      return;
    }
  }
  func_0x0001048d9980(0xd000000000000049,0x800000010f142370);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10336a080);
  (*pcVar1)();
}



/* Entry: 10336a080; end: 10336a0af;  */

void FUN_10336a080(void)

{
  FUN_103369f10();
  return;
}



/* Entry: 10336a0b0; end: 10336a2df;  */

undefined1  [16] FUN_10336a0b0(void)

{
  return ZEXT816(0x110644b20);
}



/* Entry: 10336a2e0; end: 10336a2ff;  */

void FUN_10336a2e0(void)

{
  func_0x0001007a7e7c();
  return;
}



/* Entry: 10336a300; end: 10336a463;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10336a300(undefined8 *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uStack_58;
  long alStack_50 [4];
  
  func_0x000100083b20(alStack_50);
  lVar7 = alStack_50[0];
  lVar2 = alStack_50[0];
  func_0x000107c4ddf8();
  func_0x000107c61180();
  func_0x000107c615e8(lVar7);
  lVar7 = *(long *)(lVar2 + _DAT_1130826e0);
  func_0x000107c61434(lVar7);
  func_0x000107c61170(lVar2);
  if (*(long *)(lVar7 + 0x10) != 0) {
    lVar2 = 0x112ef6f38;
    uVar6 = 0;
    func_0x0001000285a8(0x112ef6f38);
    func_0x0001000a7158();
    if ((uVar6 & 1) != 0) {
      func_0x0001000bb420(*(long *)(lVar7 + 0x38) + lVar2 * 0x20,alStack_50);
      goto LAB_10336a3a4;
    }
  }
  alStack_50[1] = 0;
  alStack_50[0] = 0;
  alStack_50[3] = 0;
  alStack_50[2] = 0;
LAB_10336a3a4:
  func_0x000107c6142c(lVar7);
  if (alStack_50[3] == 0) {
    func_0x00010006e7f4(alStack_50);
  }
  else {
    uVar3 = 0x112ef6f38;
    func_0x0001000285a8(0x112ef6f38,&UNK_10dbb7710);
    puVar4 = &uStack_58;
    func_0x000107c6147c(puVar4,alStack_50,PTR___sypN_11034f1a8 + 8,uVar3,6);
    if (((ulong)puVar4 & 1) != 0) {
      func_0x000100083b20(alStack_50);
      lVar7 = alStack_50[0];
      puVar5 = PTR_PTR_1126ad178;
      func_0x000107c610f8();
      func_0x000107c473c0();
      func_0x000107c61574(uStack_58);
      func_0x000107c61170(lVar7);
      *param_1 = puVar5;
      return;
    }
  }
  func_0x0001048d9980(0xd000000000000046,0x800000010f142940);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10336a464);
  (*pcVar1)();
}



/* Entry: 10336a464; end: 10336a4cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10336a464(undefined8 *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uStack_58;
  long alStack_50 [4];
  
  func_0x000100083b20(alStack_50);
  lVar7 = alStack_50[0];
  lVar2 = alStack_50[0];
  func_0x000107c4ddf8();
  func_0x000107c61180();
  func_0x000107c615e8(lVar7);
  lVar7 = *(long *)(lVar2 + _DAT_1130826e0);
  func_0x000107c61434(lVar7);
  func_0x000107c61170(lVar2);
  if (*(long *)(lVar7 + 0x10) != 0) {
    lVar2 = 0x112ef6f38;
    uVar6 = 0;
    func_0x0001000285a8(0x112ef6f38);
    func_0x0001000a7158();
    if ((uVar6 & 1) != 0) {
      func_0x0001000bb420(*(long *)(lVar7 + 0x38) + lVar2 * 0x20,alStack_50);
      goto LAB_10336a3a4;
    }
  }
  alStack_50[1] = 0;
  alStack_50[0] = 0;
  alStack_50[3] = 0;
  alStack_50[2] = 0;
LAB_10336a3a4:
  func_0x000107c6142c(lVar7);
  if (alStack_50[3] == 0) {
    func_0x00010006e7f4(alStack_50);
  }
  else {
    uVar3 = 0x112ef6f38;
    func_0x0001000285a8(0x112ef6f38,&UNK_10dbb7710);
    puVar4 = &uStack_58;
    func_0x000107c6147c(puVar4,alStack_50,PTR___sypN_11034f1a8 + 8,uVar3,6);
    if (((ulong)puVar4 & 1) != 0) {
      func_0x000100083b20(alStack_50);
      lVar7 = alStack_50[0];
      puVar5 = PTR_PTR_1126ad178;
      func_0x000107c610f8();
      func_0x000107c473c0();
      func_0x000107c61574(uStack_58);
      func_0x000107c61170(lVar7);
      *param_1 = puVar5;
      return;
    }
  }
  func_0x0001048d9980(0xd000000000000046,0x800000010f142940);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10336a464);
  (*pcVar1)();
}



/* Entry: 10336a4cc; end: 10336a53b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10336a4cc(undefined8 param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar1 = auStack_40;
  func_0x000107c610f8();
  func_0x0001007dc708(param_1,unaff_x20 + _DAT_112f5cd48);
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  func_0x0001000834e4(param_1);
  return puVar1;
}



/* Entry: 10336a53c; end: 10336a59b; -[_TtC37CarouselFeaturesARBarResolvingService37CarouselFeaturesARBarResolvingService init] */

void FUN_10336a53c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CarouselFeaturesARBarResolvingService.CarouselFeaturesARBarResolvingService",
                      0x4b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10336a568);
  (*pcVar1)();
}



/* Entry: 10336a59c; end: 10336a5ab; -[_TtC37CarouselFeaturesARBarResolvingService37CarouselFeaturesARBarResolvingService .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10336a59c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(((undefined8 *)(param_1 + _DAT_112f5cd48))[3] + -8);
  if ((*(byte *)(lVar1 + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001000834f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f5cd48));
  return;
}



/* Entry: 10336a5ac; end: 10336a5f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10336a5ac(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f5cd78) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10336a5f8; end: 10336a657; -[_TtC37CarouselFeaturesARBarResolvingService55SCMainCameraScopedCarouselFeaturesARBarResolvingService init] */

void FUN_10336a5f8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CarouselFeaturesARBarResolvingService.SCMainCameraScopedCarouselFeaturesARBarResolvingService"
                      ,0x5d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10336a624);
  (*pcVar1)();
}



/* Entry: 10336a658; end: 10336a667; -[_TtC37CarouselFeaturesARBarResolvingService55SCMainCameraScopedCarouselFeaturesARBarResolvingService .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10336a658(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f5cd78));
  return;
}



/* Entry: 10336a668; end: 10336a677; -[SCLensPlusSnapDocServices recordProviderObjc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10336a668(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f5cdb0));
  return;
}



/* Entry: 10336a678; end: 10336a6fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10336a678(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f5cda8) = param_1;
  uVar1 = param_1;
  func_0x000107c6157c();
  func_0x0001003a5b88();
  *(undefined8 *)(unaff_x20 + _DAT_112f5cdb0) = uVar1;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  func_0x000107c61574(param_1);
  return puVar2;
}



/* Entry: 10336a6fc; end: 10336a75b; -[SCLensPlusSnapDocServices init] */

void FUN_10336a6fc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensPlusSnapDocServices.LensPlusSnapDocServices",0x2f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10336a728);
  (*pcVar1)();
}



/* Entry: 10336a75c; end: 10336a7df; -[SCLensPlusSnapDocServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10336a75c(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f5cda8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f5cdb0));
  return;
}



/* Entry: 10336a7e0; end: 10336a83f; -[_TtC23LensPlusSnapDocServices39MainCameraScopedLensPlusSnapDocServices init] */

void FUN_10336a7e0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensPlusSnapDocServices.MainCameraScopedLensPlusSnapDocServices",0x3f,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10336a80c);
  (*pcVar1)();
}



/* Entry: 10336a840; end: 10336a84f; -[_TtC23LensPlusSnapDocServices39MainCameraScopedLensPlusSnapDocServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10336a840(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f5cde0));
  return;
}



/* Entry: 10336a850; end: 10336a907;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10336a850(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uStack_28;
  
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112f5ce10);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112f5ce10))[1];
  func_0x000107c614f0(uVar2);
  (**(code **)(lVar1 + 0x10))();
  func_0x000100083b20(&uStack_28);
  func_0x000107c61574(uVar2);
  return uStack_28;
}



/* Entry: 10336a908; end: 10336a963;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10336a908(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f5ce10);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10336a964; end: 10336a9c3; -[_TtC35SCCaaSCameraLaunchingImplementation25CaaSCameraCameraUIService init] */

void FUN_10336a964(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCCaaSCameraLaunchingImplementation.CaaSCameraCameraUIService",0x3d,"init()",
                      6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10336a990);
  (*pcVar1)();
}



/* Entry: 10336a9c4; end: 10336a9d3; -[_TtC35SCCaaSCameraLaunchingImplementation25CaaSCameraCameraUIService .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10336a9c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112f5ce10));
  return;
}



/* Entry: 10336a9d4; end: 10336a9f3;  */

void FUN_10336a9d4(void)

{
  func_0x000107c61168(&PTR_PTR_1128d0ee0);
  return;
}



/* Entry: 10336a9f4; end: 10336aab3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10336a9f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  func_0x000107c610f8();
  lVar1 = _DAT_112f5ce40;
  puVar2 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  *(undefined8 *)(unaff_x20 + _DAT_112f5ce48) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f5ce50) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f5ce58) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112f5ce60) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112f5ce68) = param_4;
  func_0x000107c61154(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10336aab4; end: 10336aee7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10336aab4(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar4 = &puStack_90;
  ppuVar7 = &puStack_90;
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112f5ce50);
  uVar2 = uVar8;
  func_0x000107c5de10(uVar8);
  func_0x000107c61180();
  puVar6 = &UNK_1106452e8;
  puVar3 = puVar6;
  func_0x000107c613fc(&UNK_1106452e8,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_70 = FUN_10336b85c;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  uStack_80 = 0x10336b964;
  puStack_78 = &UNK_110645300;
  puStack_68 = puVar3;
  func_0x000107c60bc4(&puStack_90);
  func_0x000107c61574(puStack_68);
  uVar5 = uVar2;
  func_0x000107c5c320(uVar2);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61170(uVar2);
  func_0x000107c3e924(uVar5);
  func_0x000107c61170(uVar5);
  func_0x000107c45108(uVar8);
  func_0x000107c61180();
  func_0x000107c613fc(&UNK_1106452e8,0x18,7);
  func_0x000107c61614(puVar6 + 0x10);
  pcStack_70 = (code *)0x10336b880;
  puStack_90 = puVar1;
  uStack_88 = 0x42000000;
  uStack_80 = 0x10336b968;
  puStack_78 = &UNK_110645328;
  puStack_68 = puVar6;
  func_0x000107c60bc4(&puStack_90);
  func_0x000107c61574(puStack_68);
  uVar2 = uVar8;
  func_0x000107c5c320(uVar8);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c3e924(uVar2);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 10336aee8; end: 10336af3b;  */

void FUN_10336aee8(void)

{
  long in_x5;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(in_x5 + 0x10,auStack_38,0,0);
  in_x5 = in_x5 + 0x10;
  func_0x000107c61618();
  if (in_x5 != 0) {
    FUN_10336af3c();
    func_0x000107c61170(in_x5);
  }
  return;
}



/* Entry: 10336af3c; end: 10336b08f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10336af3c(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar5 = &puStack_70;
  lVar1 = *(long *)(unaff_x20 + _DAT_112f5ce68);
  func_0x000107c4d07c();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 != 0) {
    lVar1 = lVar2;
    func_0x000107c5b1b8();
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112f5ce60);
    func_0x000107c4168c(uVar3);
    func_0x000107c61180();
    puVar4 = &UNK_110645428;
    func_0x000107c613fc(&UNK_110645428,0x18,7);
    func_0x000107c61614(puVar4 + 0x10,uVar3);
    uStack_50 = 0x10336b8b8;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_101349054;
    puStack_58 = &UNK_110645440;
    puStack_48 = puVar4;
    func_0x000107c60bc4(&puStack_70);
    func_0x000107c61574(puStack_48);
    lVar2 = lVar1;
    func_0x000107c5e068();
    func_0x000107c61180();
    func_0x000107c615e8(lVar1);
    func_0x000107c615e8(uVar3);
    func_0x000107c60bd0(ppuVar5);
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112f5ce48);
    *(long *)(unaff_x20 + _DAT_112f5ce48) = lVar2;
    func_0x000107c61170(uVar3);
  }
  return;
}



/* Entry: 10336b090; end: 10336b163;  */

/* WARNING: Possible PIC construction at 0x00010336b128: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010336b138: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010336b12c) */
/* WARNING: Removing unreachable block (ram,0x00010336b13c) */

void FUN_10336b090(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_3 + 0x20);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  (*pcVar1)(param_1,param_2,param_4,param_5,param_6,param_7,param_8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}


