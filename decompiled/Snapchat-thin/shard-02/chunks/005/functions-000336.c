/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101ddb05c; end: 101ddb0bb;  */

void FUN_101ddb05c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_60 [16];
  long lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_40 = *(undefined8 *)(unaff_x20 + 0x20);
  lStack_50 = *(long *)(unaff_x20 + 0x18) + 0x10;
  uStack_48 = param_1;
  func_0x000100087bd4(*(undefined8 *)(unaff_x20 + 0x10),FUN_101ddbe3c,auStack_60,
                      PTR___sytN_11034f1b0 + 8);
  return;
}



/* Entry: 101ddb0bc; end: 101ddb157;  */

void FUN_101ddb0bc(byte *param_1,long param_2)

{
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1,auStack_58,0,0);
  if ((*param_1 & 1) == 0) {
    func_0x000107c61428(param_1,auStack_70,1,0);
    *param_1 = 1;
    if (param_2 == 0) {
      func_0x000100b60084();
    }
    else {
      func_0x000107c614b0(param_2);
      func_0x00010488ade0(param_2);
      func_0x000107c614ac(param_2);
    }
  }
  return;
}



/* Entry: 101ddb158; end: 101ddb293;  */

/* WARNING: Possible PIC construction at 0x000101ddb21c: Changing call to branch */

void FUN_101ddb158(ulong param_1,code *param_2,undefined8 param_3,ulong *param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  code *pcVar5;
  
  if (param_1 == 0) {
    (*param_2)();
    return;
  }
  pcVar5 = param_2;
  func_0x000107c614b0();
  uVar1 = param_1;
  func_0x000107c5ed2c();
  uVar2 = uVar1;
  func_0x000107c3fcb0();
  uVar3 = uVar1;
  func_0x000107c42210();
  func_0x000107c61180();
  uVar4 = uVar3;
  func_0x000107c5faec();
  func_0x000107c61170(uVar3);
  if ((uVar2 == 0) && (func_0x000107c42b5c(), (int)param_4 == 1)) {
    func_0x000104494324();
    if ((uVar4 == *param_4) && (pcVar5 == (code *)param_4[1])) {
      func_0x000107c6142c(pcVar5);
    }
    else {
      func_0x000107c605b8(uVar4,pcVar5,*param_4,(code *)param_4[1],0);
      func_0x000107c6142c(pcVar5);
      if ((uVar4 & 1) == 0) goto LAB_101ddb208;
    }
    (*param_2)(0);
    func_0x000107c61170(uVar1);
  }
  else {
    func_0x000107c6142c(pcVar5);
LAB_101ddb208:
    func_0x000107c614b0(param_1);
    (*param_2)(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)(param_1);
  return;
}



/* Entry: 101ddb294; end: 101ddb2bb;  */

/* WARNING: Possible PIC construction at 0x000101ddb21c: Changing call to branch */

void FUN_101ddb294(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  code *pcVar6;
  ulong *puVar7;
  long unaff_x20;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  puVar7 = *(ulong **)(unaff_x20 + 0x20);
  if (param_1 == 0) {
    (*pcVar1)(0,pcVar1,*(undefined8 *)(unaff_x20 + 0x18));
    return;
  }
  pcVar6 = pcVar1;
  func_0x000107c614b0();
  uVar2 = param_1;
  func_0x000107c5ed2c();
  uVar3 = uVar2;
  func_0x000107c3fcb0();
  uVar4 = uVar2;
  func_0x000107c42210();
  func_0x000107c61180();
  uVar5 = uVar4;
  func_0x000107c5faec();
  func_0x000107c61170(uVar4);
  if ((uVar3 == 0) && (func_0x000107c42b5c(), (int)puVar7 == 1)) {
    func_0x000104494324();
    if ((uVar5 == *puVar7) && (pcVar6 == (code *)puVar7[1])) {
      func_0x000107c6142c(pcVar6);
    }
    else {
      func_0x000107c605b8(uVar5,pcVar6,*puVar7,(code *)puVar7[1],0);
      func_0x000107c6142c(pcVar6);
      if ((uVar5 & 1) == 0) goto LAB_101ddb208;
    }
    (*pcVar1)(0);
    func_0x000107c61170(uVar2);
  }
  else {
    func_0x000107c6142c(pcVar6);
LAB_101ddb208:
    func_0x000107c614b0(param_1);
    (*pcVar1)(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)(param_1);
  return;
}



/* Entry: 101ddb2bc; end: 101ddb2fb;  */

void FUN_101ddb2bc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e2e938 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc43860;
  func_0x000107c61520(&UNK_10dc43860,&UNK_1106c4088);
  puRam0000000112e2e938 = puVar1;
  return;
}



/* Entry: 101ddb2fc; end: 101ddb3b7;  */

undefined8 FUN_101ddb2fc(void)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x0001000d224c(&uStack_40);
  uVar1 = uStack_40;
  func_0x000107c614f0(uStack_40);
  pcVar2 = FUN_101ddb3b8;
  (**(code **)(lStack_38 + 0x28))(FUN_101ddb3b8,0,uVar1,lStack_38);
  func_0x000107c615e8(uStack_40);
  func_0x0001000d224c(&uStack_48);
  uVar3 = 0;
  func_0x000101dd9a00(0);
  uVar1 = uStack_48;
  func_0x000100775264(uStack_48,1,FUN_101ddb3fc,0,uVar3);
  func_0x000107c61574(pcVar2);
  func_0x000107c61170(uStack_48);
  return uVar1;
}



/* Entry: 101ddb3b8; end: 101ddb3fb;  */

uint FUN_101ddb3b8(uint param_1,long param_2)

{
  func_0x000107c614f0();
  (**(code **)(*(long *)(param_2 + 0x18) + 0x70))();
  return param_1 & 1;
}



/* Entry: 101ddb3fc; end: 101ddb413;  */

void FUN_101ddb3fc(undefined4 *param_1,char *param_2)

{
  undefined4 uVar1;
  
  uVar1 = 2;
  if (*param_2 == '\0') {
    uVar1 = 0;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 101ddb414; end: 101ddb4fb;  */

undefined8 FUN_101ddb414(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uStack_48;
  
  func_0x0001000285a8(0x112e2e9c8,&UNK_10da17650);
  func_0x0001000d224c(&uStack_48);
  uVar2 = uStack_48;
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c6157c(uVar3);
  uVar1 = uVar2;
  func_0x000104889654(uVar2,1,0x101ddc3c0,uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61574(uVar3);
  func_0x0001000d224c(&uStack_48);
  uVar2 = uStack_48;
  func_0x000100775264(uStack_48,1,FUN_101ddb91c,0,PTR___ss6UInt32VN_11034f020);
  func_0x000107c61574(uVar1);
  func_0x000107c61170(uStack_48);
  return uVar2;
}



/* Entry: 101ddb4fc; end: 101ddb7ab;  */

undefined8 FUN_101ddb4fc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined8 uStack_68;
  
  func_0x0001000285a8(0x112e2e948,&UNK_10da17630);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000d224c(&uStack_68);
  uVar7 = uStack_68;
  uVar6 = uStack_68;
  func_0x000104889654(uStack_68,1,FUN_101ddbca8,0);
  func_0x000107c61170(uVar7);
  func_0x0001000d224c(&uStack_68);
  uVar7 = uStack_68;
  puVar5 = &UNK_110487798;
  puVar1 = puVar5;
  func_0x000107c613fc(&UNK_110487798,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  puVar2 = &UNK_1104878d8;
  func_0x000107c613fc(&UNK_1104878d8,0x20,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = uVar8;
  uVar3 = 0;
  func_0x000102fb8764(0);
  func_0x000107c61580(uVar8,3);
  uVar4 = uVar7;
  func_0x0001048898b8(uVar7,1,FUN_101ddc234,puVar2,uVar3);
  func_0x000107c61574(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61574(puVar2);
  func_0x0001000d224c(&uStack_68);
  uVar7 = uStack_68;
  puVar1 = puVar5;
  func_0x000107c613fc(&UNK_110487798,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  puVar2 = &UNK_110487900;
  func_0x000107c613fc(&UNK_110487900,0x20,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = uVar8;
  uVar6 = uVar7;
  func_0x0001048898b8(uVar7,1,0x101ddc25c,puVar2,uVar3);
  func_0x000107c61574(uVar4);
  func_0x000107c61170(uVar7);
  func_0x000107c61574(puVar2);
  func_0x0001000d224c(&uStack_68);
  uVar7 = uStack_68;
  func_0x000107c613fc(&UNK_110487798,0x18,7);
  func_0x000107c61644(puVar5 + 0x10);
  puVar2 = &UNK_110487928;
  func_0x000107c613fc(&UNK_110487928,0x20,7);
  *(undefined **)(puVar2 + 0x10) = puVar5;
  *(undefined8 *)(puVar2 + 0x18) = uVar8;
  uVar4 = uVar7;
  func_0x0001048898b8(uVar7,1,0x101ddc2b0,puVar2,uVar3);
  func_0x000107c61574(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61574(puVar2);
  func_0x0001000d224c(&uStack_68);
  uVar6 = 0;
  FUN_101ddc2d8(0,0x112e2e950,&PTR_PTR_1126b7240);
  uVar7 = uStack_68;
  func_0x000100775264(uStack_68,1,FUN_101ddbe04,0,uVar6);
  func_0x000107c61574(uVar4);
  func_0x000107c61170(uStack_68);
  return uVar7;
}



/* Entry: 101ddb7ac; end: 101ddb8ab;  */

undefined8 *
FUN_101ddb7ac(undefined4 *param_1,undefined8 *param_2,long param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [24];
  undefined8 uStack_48;
  
  uVar1 = *param_1;
  uVar3 = *param_2;
  func_0x000107c61428(param_3 + 0x10,auStack_68,0,0);
  puVar2 = (undefined1 *)(param_3 + 0x10);
  func_0x000107c61648();
  if (puVar2 == (undefined1 *)0x0) {
    FUN_101ddafd8();
    func_0x000107c613f8(&UNK_1106c4438,puVar2,0,0);
    *puVar2 = 0;
    func_0x000107c61654();
  }
  else {
    func_0x0001000285a8(0x112e2e940,&UNK_10da17628);
    FUN_101ddc064(param_4,param_5,uVar1,uVar3);
    param_5 = &uStack_48;
    uStack_48 = param_4;
    func_0x000104888f7c(param_5);
    func_0x000107c61170(param_4);
    func_0x000107c61574(puVar2);
  }
  return param_5;
}



/* Entry: 101ddb8ac; end: 101ddb91b;  */

void FUN_101ddb8ac(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x0001000d224c(&uStack_40);
  uVar1 = uStack_40;
  func_0x000107c614f0();
  (**(code **)(*(long *)(lStack_38 + 0x18) + 0x30))();
  func_0x000107c615e8(uStack_40);
  *param_1 = uVar1;
  return;
}



/* Entry: 101ddb91c; end: 101ddb97b;  */

void FUN_101ddb91c(undefined4 *param_1,ulong *param_2)

{
  if (*param_2 >> 0x20 == 0) {
    *param_1 = (int)*param_2;
    return;
  }
  FUN_101ddafd8();
  func_0x000107c613f8(&UNK_1106c4438,param_2,0,0);
  *(undefined1 *)param_2 = 2;
  func_0x000107c61654();
  return;
}



/* Entry: 101ddb97c; end: 101ddba67;  */

undefined8 FUN_101ddb97c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uStack_48;
  
  func_0x0001000285a8(0x112e2e9c0,&UNK_10da17648);
  func_0x0001000d224c(&uStack_48);
  uVar2 = uStack_48;
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c6157c(uVar3);
  uVar1 = uVar2;
  func_0x000104889654(uVar2,1,FUN_101ddc3a8,uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61574(uVar3);
  func_0x0001000d224c(&uStack_48);
  uVar3 = 0;
  FUN_101dd99ec(0);
  uVar2 = uStack_48;
  func_0x000100775264(uStack_48,1,FUN_101ddbad8,0,uVar3);
  func_0x000107c61574(uVar1);
  func_0x000107c61170(uStack_48);
  return uVar2;
}



/* Entry: 101ddba68; end: 101ddbad7;  */

void FUN_101ddba68(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x0001000d224c(&uStack_40);
  uVar1 = uStack_40;
  func_0x000107c614f0();
  (**(code **)(*(long *)(lStack_38 + 0x18) + 0xa8))();
  func_0x000107c615e8(uStack_40);
  *param_1 = uVar1;
  return;
}



/* Entry: 101ddbad8; end: 101ddbb27;  */

void FUN_101ddbad8(undefined4 *param_1,ulong *param_2)

{
  code *pcVar1;
  ulong uStack_18;
  
  uStack_18 = *param_2;
  if (uStack_18 < 6) {
    *param_1 = *(undefined4 *)(&UNK_10da1765c + uStack_18 * 4);
    return;
  }
  func_0x000107c60614(&UNK_11077c488,&uStack_18,&UNK_11077c488,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101ddbb28);
  (*pcVar1)();
}



/* Entry: 101ddbb28; end: 101ddbbef;  */

undefined8 FUN_101ddbb28(void)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x0001000d224c(&uStack_40);
  uVar1 = uStack_40;
  func_0x000107c614f0(uStack_40);
  pcVar2 = FUN_101ddbbf0;
  (**(code **)(lStack_38 + 0x28))(FUN_101ddbbf0,0,uVar1,lStack_38);
  func_0x000107c615e8(uStack_40);
  func_0x0001000d224c(&uStack_48);
  uVar1 = 0x112e2e958;
  func_0x0001000285a8(0x112e2e958,&UNK_10da176e0);
  uVar3 = uStack_48;
  func_0x000100775264(uStack_48,1,FUN_101ddbc34,0,uVar1);
  func_0x000107c61574(pcVar2);
  func_0x000107c61170(uStack_48);
  return uVar3;
}



/* Entry: 101ddbbf0; end: 101ddbc33;  */

uint FUN_101ddbbf0(uint param_1,long param_2)

{
  func_0x000107c614f0();
  (**(code **)(*(long *)(param_2 + 0x18) + 0x50))();
  return param_1 & 1;
}



/* Entry: 101ddbc34; end: 101ddbca7;  */

void FUN_101ddbc34(undefined8 *param_1,char *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  cVar1 = *param_2;
  uVar2 = 0x112e28318;
  func_0x0001000285a8(0x112e28318,&UNK_10da17640);
  uVar3 = uVar2;
  func_0x000107c61538();
  *param_1 = uVar3;
  if (cVar1 == '\x01') {
    func_0x000107c61538(uVar2,0x112e2e998);
    FUN_101ddbe74();
  }
  return;
}



/* Entry: 101ddbca8; end: 101ddbd23;  */

void FUN_101ddbca8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0;
  func_0x000102fb8764(0);
  func_0x000107c613fc();
  func_0x000102fb862c();
  uVar2 = 0;
  func_0x000102fb8730(0);
  func_0x000107c61574(uVar1);
  uVar1 = 1;
  func_0x000102fb86ec();
  func_0x000107c61574(uVar2);
  *param_1 = uVar1;
  return;
}



/* Entry: 101ddbd24; end: 101ddbe03;  */

undefined8
FUN_101ddbd24(undefined8 *param_1,long param_2,undefined8 param_3,code *param_4,undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  uVar4 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  uVar3 = 0;
  if (param_2 != 0) {
    lVar1 = param_2;
    (*param_4)();
    func_0x000107c61574(param_2);
    func_0x0001000d224c(&uStack_60);
    uVar2 = 0;
    func_0x000102fb8764(0);
    func_0x000107c6157c(uVar4);
    uVar3 = uStack_60;
    func_0x000100775264(uStack_60,1,param_5,uVar4,uVar2);
    func_0x000107c61574(lVar1);
    func_0x000107c61170(uStack_60);
    func_0x000107c61574(uVar4);
  }
  return uVar3;
}



/* Entry: 101ddbe04; end: 101ddbe3b;  */

void FUN_101ddbe04(undefined8 *param_1,undefined8 param_2)

{
  func_0x000102fb84bc();
  *param_1 = param_2;
  return;
}



/* Entry: 101ddbe3c; end: 101ddbe73;  */

void FUN_101ddbe3c(void)

{
  long unaff_x20;
  
  FUN_101ddb0bc(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 101ddbe74; end: 101ddbf63;  */

void FUN_101ddbe74(long param_1)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *unaff_x20;
  ulong uVar5;
  long lVar6;
  
  uVar5 = *(ulong *)(param_1 + 0x10);
  lVar4 = *unaff_x20;
  lVar6 = *(long *)(lVar4 + 0x10);
  if (SCARRY8(lVar6,uVar5)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101ddbf58);
    (*pcVar1)();
  }
  lVar2 = lVar4;
  func_0x000107c61558();
  if (((int)lVar2 == 0) ||
     (uVar3 = *(ulong *)(lVar4 + 0x18) >> 1, (long)uVar3 < (long)(lVar6 + uVar5))) {
    FUN_101ddbf64();
    uVar3 = *(ulong *)(lVar2 + 0x18) >> 1;
    lVar6 = *(long *)(param_1 + 0x10);
    lVar4 = lVar2;
  }
  else {
    lVar6 = *(long *)(param_1 + 0x10);
  }
  if (lVar6 == 0) {
    func_0x000107c6142c(param_1);
    if (uVar5 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101ddbf5c);
      (*pcVar1)();
    }
  }
  else {
    if (uVar3 - *(long *)(lVar4 + 0x10) < uVar5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101ddbf60);
      (*pcVar1)();
    }
    func_0x000107c610b4(lVar4 + *(long *)(lVar4 + 0x10) * 4 + 0x20,param_1 + 0x20,uVar5 << 2);
    func_0x000107c6142c(param_1);
    if (uVar5 != 0) {
      if (SCARRY8(*(long *)(lVar4 + 0x10),uVar5)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101ddbf64);
        (*pcVar1)();
      }
      *(ulong *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + uVar5;
    }
  }
  *unaff_x20 = lVar4;
  return;
}



/* Entry: 101ddbf64; end: 101ddc063;  */

undefined * FUN_101ddbf64(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101ddc064);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x112e28318;
    func_0x0001000285a8(0x112e28318,&UNK_10da17640);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x1d;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 2) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c610b4(puVar1,puVar4,uVar6 << 2);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 4 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar6 << 2);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 101ddc064; end: 101ddc233;  */

undefined8 * FUN_101ddc064(undefined8 *param_1,long param_2,ulong param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  puVar1 = param_1;
  func_0x000103a70bb4();
  uVar3 = *puVar1;
  uVar4 = puVar1[1];
  uVar2 = 0;
  func_0x000102fb83b8(0);
  func_0x000107c61534();
  func_0x000102fb7fdc(uVar3,uVar4,uVar2);
  uVar2 = 3;
  func_0x000102fb8218(3);
  func_0x000107c61434(uVar4);
  func_0x000107c61574(uVar3);
  func_0x000102fb8228(param_4);
  func_0x000107c61574(uVar2);
  uVar3 = 0xffffffff;
  func_0x000102fb831c(0xffffffff);
  func_0x000107c61574(param_4);
  uVar4 = 0x1e;
  func_0x000102fb832c(0x1e);
  func_0x000107c61574(uVar3);
  uVar3 = 0;
  func_0x000102fb81f8(0);
  func_0x000107c61574(uVar4);
  uVar4 = 0;
  func_0x000102fb8208(0);
  func_0x000107c61574(uVar3);
  uVar3 = 0;
  func_0x000102fb8cc8(0);
  func_0x000107c61534();
  func_0x000102fb89e4();
  puVar5 = (undefined8 *)(param_3 & 0xffffffff);
  func_0x000102fb89f8(puVar5,2);
  func_0x000107c61574(uVar3);
  puVar1 = puVar5;
  func_0x000102fb8294(puVar5);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(uVar4);
  uVar3 = 0;
  func_0x000102fb8920(0);
  func_0x000107c61534();
  func_0x000102fb8858();
  uVar4 = 0;
  func_0x000102fb88e0(0);
  func_0x000107c61574(uVar3);
  uVar3 = uVar4;
  func_0x000102fb833c(uVar4);
  func_0x000107c61574(uVar4);
  func_0x000107c61574(puVar1);
  if (param_2 != 0) {
    func_0x000102fb81c0(param_1,param_2);
    func_0x000107c61574();
    puVar1 = param_1;
  }
  func_0x000102fb804c();
  func_0x000107c61574(uVar3);
  return puVar1;
}



/* Entry: 101ddc234; end: 101ddc2d7;  */

void FUN_101ddc234(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101ddbd24(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                FUN_101ddb97c,FUN_101ddc378);
  return;
}



/* Entry: 101ddc2d8; end: 101ddc317;  */

void FUN_101ddc2d8(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 101ddc318; end: 101ddc347;  */

void FUN_101ddc318(ulong *param_1,uint *param_2)

{
  ulong uVar1;
  
  uVar1 = (ulong)*param_2;
  func_0x000102fb86cc();
  *param_1 = uVar1;
  return;
}



/* Entry: 101ddc348; end: 101ddc377;  */

void FUN_101ddc348(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x000102fb86fc();
  *param_1 = uVar1;
  return;
}



/* Entry: 101ddc378; end: 101ddc3a7;  */

void FUN_101ddc378(ulong *param_1,uint *param_2)

{
  ulong uVar1;
  
  uVar1 = (ulong)*param_2;
  func_0x000102fb86dc();
  *param_1 = uVar1;
  return;
}



/* Entry: 101ddc3a8; end: 101ddc3f7;  */

void FUN_101ddc3a8(void)

{
  FUN_101ddba68();
  return;
}



/* Entry: 101ddc3f8; end: 101ddc407;  */

undefined8 FUN_101ddc3f8(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar1 + 0x10,auStack_48,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61648();
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    FUN_101dda4bc(uVar3,uVar2);
    func_0x000107c61574(lVar1);
  }
  return uVar3;
}



/* Entry: 101ddc408; end: 101ddc49f;  */

void FUN_101ddc408(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  FUN_101ddafcc(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined1 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101ddc4a0; end: 101ddc4b3;  */

/* WARNING: Removing unreachable block (ram,0x000101ddad90) */

void FUN_101ddc4a0(undefined1 *param_1)

{
  undefined8 uVar1;
  char cVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  long unaff_x20;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined *puVar14;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  puVar14 = *(undefined **)(unaff_x20 + 0x18);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  cVar2 = *(char *)(unaff_x20 + 0x28);
  puVar4 = param_1;
  func_0x0001000d224c(&puStack_98,param_1,*(undefined8 *)(unaff_x20 + 0x10));
  puVar3 = puStack_98;
  if (puStack_98 == (undefined *)0x0) {
    FUN_101ddafd8();
    puVar14 = &UNK_1106c4438;
    func_0x000107c613f8(&UNK_1106c4438,puVar4,0,0);
    *puVar4 = 0;
    func_0x00010488ade0();
    func_0x000107c614ac(puVar14);
  }
  else {
    if (cVar2 == -1) {
      ppuVar12 = (undefined **)0x0;
      puVar14 = (undefined *)0xf000000000000000;
    }
    else {
      uVar5 = 0;
      func_0x000107c5eb54();
      func_0x000107c613fc();
      func_0x000107c5eb50();
      puStack_88 = (undefined *)CONCAT71(puStack_88._1_7_,cVar2);
      uVar8 = uVar5;
      puStack_98 = puVar14;
      uStack_90 = uVar11;
      FUN_101ddb2bc();
      puVar14 = &UNK_1106c4088;
      ppuVar12 = &puStack_98;
      func_0x000107c5eb4c(ppuVar12,&UNK_1106c4088,uVar8);
      func_0x000107c61574(uVar5);
    }
    uVar11 = 0;
    func_0x00010006a340();
    func_0x000107c613fc();
    func_0x00010006a360();
    puVar6 = &UNK_110487810;
    func_0x000107c613fc(&UNK_110487810,0x11,7);
    puVar6[0x10] = 0;
    puVar7 = &UNK_110487838;
    func_0x000107c613fc(&UNK_110487838,0x28,7);
    *(undefined8 *)(puVar7 + 0x10) = uVar11;
    *(undefined **)(puVar7 + 0x18) = puVar6;
    *(undefined1 **)(puVar7 + 0x20) = param_1;
    func_0x000107c6157c(uVar11);
    func_0x000107c6157c(puVar6);
    func_0x000107c6157c(param_1);
    ppuVar13 = (undefined **)0x0;
    if ((ulong)puVar14 >> 0x3c < 0xf) {
      ppuVar13 = ppuVar12;
      func_0x000107c5ee20(ppuVar12,puVar14);
    }
    func_0x0001000d224c(&uStack_68);
    uVar8 = 0;
    FUN_101ddc2d8(0,0x112d69830,&PTR_PTR_1126a6700);
    func_0x000100bcb214();
    func_0x000107c61170(uStack_68);
    puVar9 = &UNK_110487860;
    func_0x000107c613fc(&UNK_110487860,0x28,7);
    *(code **)(puVar9 + 0x10) = FUN_101ddb05c;
    *(undefined **)(puVar9 + 0x18) = puVar7;
    *(undefined8 *)(puVar9 + 0x20) = uVar1;
    pcStack_78 = FUN_101ddb294;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0x42000000;
    puStack_88 = &UNK_100ff4e14;
    puStack_80 = &UNK_110487878;
    ppuVar10 = &puStack_98;
    puStack_70 = puVar9;
    func_0x000107c60bc4(ppuVar10);
    puVar9 = puStack_70;
    func_0x000107c6157c(puVar7);
    func_0x000107c61174(uVar1);
    func_0x000107c61574(puVar9);
    func_0x000107c5c2c0(puVar3);
    func_0x000107c615e8(puVar3);
    func_0x000107c61574(puVar7);
    func_0x000107c61574(uVar11);
    func_0x000107c60bd0(ppuVar10);
    func_0x000107c61170(ppuVar13);
    func_0x000107c61170(uVar8);
    func_0x0001000b44c0(ppuVar12,puVar14);
    func_0x000107c61574(puVar6);
  }
  return;
}



/* Entry: 101ddc4b4; end: 101ddc4c7;  */

void FUN_101ddc4b4(void)

{
  FUN_101ddac98();
  return;
}



/* Entry: 101ddc4c8; end: 101ddc4df;  */

/* WARNING: Removing unreachable block (ram,0x000101ddad90) */

void FUN_101ddc4c8(undefined1 *param_1)

{
  undefined8 uVar1;
  char cVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  long unaff_x20;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined *puVar14;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  puVar14 = *(undefined **)(unaff_x20 + 0x18);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  cVar2 = *(char *)(unaff_x20 + 0x28);
  puVar4 = param_1;
  func_0x0001000d224c(&puStack_98,param_1,*(undefined8 *)(unaff_x20 + 0x10));
  puVar3 = puStack_98;
  if (puStack_98 == (undefined *)0x0) {
    FUN_101ddafd8();
    puVar14 = &UNK_1106c4438;
    func_0x000107c613f8(&UNK_1106c4438,puVar4,0,0);
    *puVar4 = 0;
    func_0x00010488ade0();
    func_0x000107c614ac(puVar14);
  }
  else {
    if (cVar2 == -1) {
      ppuVar12 = (undefined **)0x0;
      puVar14 = (undefined *)0xf000000000000000;
    }
    else {
      uVar5 = 0;
      func_0x000107c5eb54();
      func_0x000107c613fc();
      func_0x000107c5eb50();
      puStack_88 = (undefined *)CONCAT71(puStack_88._1_7_,cVar2);
      uVar8 = uVar5;
      puStack_98 = puVar14;
      uStack_90 = uVar11;
      FUN_101ddb2bc();
      puVar14 = &UNK_1106c4088;
      ppuVar12 = &puStack_98;
      func_0x000107c5eb4c(ppuVar12,&UNK_1106c4088,uVar8);
      func_0x000107c61574(uVar5);
    }
    uVar11 = 0;
    func_0x00010006a340();
    func_0x000107c613fc();
    func_0x00010006a360();
    puVar6 = &UNK_110487810;
    func_0x000107c613fc(&UNK_110487810,0x11,7);
    puVar6[0x10] = 0;
    puVar7 = &UNK_110487838;
    func_0x000107c613fc(&UNK_110487838,0x28,7);
    *(undefined8 *)(puVar7 + 0x10) = uVar11;
    *(undefined **)(puVar7 + 0x18) = puVar6;
    *(undefined1 **)(puVar7 + 0x20) = param_1;
    func_0x000107c6157c(uVar11);
    func_0x000107c6157c(puVar6);
    func_0x000107c6157c(param_1);
    ppuVar13 = (undefined **)0x0;
    if ((ulong)puVar14 >> 0x3c < 0xf) {
      ppuVar13 = ppuVar12;
      func_0x000107c5ee20(ppuVar12,puVar14);
    }
    func_0x0001000d224c(&uStack_68);
    uVar8 = 0;
    FUN_101ddc2d8(0,0x112d69830,&PTR_PTR_1126a6700);
    func_0x000100bcb214();
    func_0x000107c61170(uStack_68);
    puVar9 = &UNK_110487860;
    func_0x000107c613fc(&UNK_110487860,0x28,7);
    *(code **)(puVar9 + 0x10) = FUN_101ddb05c;
    *(undefined **)(puVar9 + 0x18) = puVar7;
    *(undefined8 *)(puVar9 + 0x20) = uVar1;
    pcStack_78 = FUN_101ddb294;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0x42000000;
    puStack_88 = &UNK_100ff4e14;
    puStack_80 = &UNK_110487878;
    ppuVar10 = &puStack_98;
    puStack_70 = puVar9;
    func_0x000107c60bc4(ppuVar10);
    puVar9 = puStack_70;
    func_0x000107c6157c(puVar7);
    func_0x000107c61174(uVar1);
    func_0x000107c61574(puVar9);
    func_0x000107c5c2c0(puVar3);
    func_0x000107c615e8(puVar3);
    func_0x000107c61574(puVar7);
    func_0x000107c61574(uVar11);
    func_0x000107c60bd0(ppuVar10);
    func_0x000107c61170(ppuVar13);
    func_0x000107c61170(uVar8);
    func_0x0001000b44c0(ppuVar12,puVar14);
    func_0x000107c61574(puVar6);
  }
  return;
}



/* Entry: 101ddc4e0; end: 101ddc4ff;  */

void FUN_101ddc4e0(void)

{
  func_0x000107c61168(&PTR_PTR_112e2ea10);
  return;
}



/* Entry: 101ddc500; end: 101ddc723;  */

void FUN_101ddc500(undefined8 param_1,char param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_68;
  
  if (param_2 == '\x01') {
    uVar6 = *unaff_x20;
    func_0x0001000285a8(0x112e1cb88,&UNK_10d9fe2d0);
    func_0x0001000d224c(&uStack_68);
    uVar4 = uStack_68;
    uVar5 = unaff_x20[4];
    func_0x000107c6157c(uVar5);
    uVar2 = uVar4;
    func_0x000104889654(uVar4,1,FUN_101ddcb84,uVar5);
    func_0x000107c61170(uVar4);
    func_0x000107c61574(uVar5);
    func_0x0001000d224c(&uStack_68);
    puVar3 = &UNK_110487a38;
    func_0x000107c613fc(&UNK_110487a38,0x18,7);
    func_0x000107c61644(puVar3 + 0x10);
    puVar1 = &UNK_110487a60;
    func_0x000107c613fc(&UNK_110487a60,0x20,7);
    *(undefined **)(puVar1 + 0x10) = puVar3;
    *(undefined8 *)(puVar1 + 0x18) = uVar6;
    uVar4 = uStack_68;
    func_0x0001048898b8(uStack_68,1,0x101ddcb9c,puVar1,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(uVar2);
    func_0x000107c61170(uStack_68);
    func_0x000107c61574(puVar1);
    uVar2 = 0;
    func_0x00010488a220(0,1,FUN_101ddcb0c,0);
    func_0x000107c61574(uVar4);
    func_0x000104888fc0(0,1,FUN_101ddde34,0);
    func_0x000107c61574(uVar2);
  }
  else {
    func_0x0001000d224c(&uStack_68);
    puVar3 = &UNK_110487a38;
    func_0x000107c613fc(&UNK_110487a38,0x18,7);
    func_0x000107c61644(puVar3 + 0x10);
    uVar4 = 0;
    FUN_101dddee8(0,0x112d69830,&PTR_PTR_1126a6700);
    func_0x000107c6157c(puVar3);
    func_0x00010488b6c8(param_1,0x101dde074,puVar3,uVar4);
    func_0x000107c61170(uStack_68);
    func_0x000107c61578(puVar3,2);
  }
  return;
}



/* Entry: 101ddc724; end: 101ddc74b;  */

void FUN_101ddc724(void)

{
  FUN_101ddc500(0,1);
  return;
}



/* Entry: 101ddc74c; end: 101ddc807;  */

void FUN_101ddc74c(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined8 uStack_48;
  
  uVar2 = *unaff_x20;
  func_0x0001000d224c(&uStack_48);
  puVar1 = &UNK_110487a38;
  func_0x000107c613fc(&UNK_110487a38,0x18,7);
  func_0x000107c61644(puVar1 + 0x10,uVar2);
  uVar2 = 0;
  FUN_101dddee8(0,0x112d69830,&PTR_PTR_1126a6700);
  func_0x000107c6157c(puVar1);
  func_0x00010488b6c8(param_1,FUN_101ddc864,puVar1,uVar2);
  func_0x000107c61170(uStack_48);
  func_0x000107c61578(puVar1,2);
  return;
}



/* Entry: 101ddc808; end: 101ddc863;  */

void FUN_101ddc808(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    FUN_101ddc500(0,1);
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 101ddc864; end: 101ddc86b;  */

void FUN_101ddc864(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    FUN_101ddc500(0,1);
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 101ddc86c; end: 101ddc99b;  */

long FUN_101ddc86c(char *param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  if (*param_1 == '\x01') {
    func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61648();
    if (param_2 == 0) {
      return 0;
    }
    lVar1 = param_2;
    func_0x000101ddccd8();
    func_0x0001000d224c(&lStack_60);
    puVar2 = &UNK_110487a38;
    func_0x000107c613fc(&UNK_110487a38,0x18,7);
    func_0x000107c61644(puVar2 + 0x10,param_2);
    lVar3 = lStack_60;
    func_0x0001048898b8(lStack_60,1,FUN_101ddde38,puVar2,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(lVar1);
    func_0x000107c61170(lStack_60);
    func_0x000107c61574(puVar2);
  }
  else {
    func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61648();
    if (param_2 == 0) {
      return 0;
    }
    lVar3 = param_2;
    FUN_101ddc99c();
  }
  func_0x000107c61574(param_2);
  return lVar3;
}



/* Entry: 101ddc99c; end: 101ddcb0b;  */

undefined * FUN_101ddc99c(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined8 uVar6;
  long lStack_48;
  
  func_0x0001000d224c(&lStack_48);
  lVar1 = lStack_48;
  if (lStack_48 == 0) {
    uVar3 = 0x112d51a30;
    func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
    func_0x000101ddde68();
    puVar4 = &UNK_1106c4638;
    func_0x000107c613f8(&UNK_1106c4638,uVar3,0,0);
    puVar5 = puVar4;
    func_0x00010488904c();
    func_0x000107c614ac(puVar4);
  }
  else {
    func_0x0001000285a8(0x112d69a88,&UNK_10d97b880);
    func_0x000107c613fc();
    lVar2 = 0;
    func_0x00010095c380();
    uVar6 = *(undefined8 *)(unaff_x20 + 0x18);
    func_0x0001000d224c(&lStack_48);
    puVar4 = &UNK_110487b78;
    func_0x000107c613fc(&UNK_110487b78,0x28,7);
    *(long *)(puVar4 + 0x10) = lVar1;
    *(undefined8 *)(puVar4 + 0x18) = uVar6;
    *(long *)(puVar4 + 0x20) = lVar2;
    uVar3 = 0;
    FUN_101dddee8(0,0x112d69830,&PTR_PTR_1126a6700);
    func_0x000107c615f0(lVar1);
    func_0x000107c6157c(uVar6);
    func_0x000107c6157c(lVar2);
    func_0x00010090569c(FUN_101dde054,puVar4,uVar3);
    func_0x000107c61170(lStack_48);
    func_0x000107c61574(puVar4);
    func_0x000107c615e8(lVar1);
    puVar5 = *(undefined **)(lVar2 + 0x10);
    func_0x000107c6157c(puVar5);
    func_0x000107c61574(lVar2);
  }
  return puVar5;
}



/* Entry: 101ddcb0c; end: 101ddcb0f;  */

void FUN_101ddcb0c(void)

{
  return;
}



/* Entry: 101ddcb10; end: 101ddcb83;  */

void FUN_101ddcb10(byte *param_1)

{
  byte bVar1;
  undefined8 uStack_40;
  long lStack_38;
  undefined8 uVar2;
  
  func_0x0001000d224c(&uStack_40);
  uVar2 = uStack_40;
  func_0x000107c614f0();
  bVar1 = (byte)uVar2;
  (**(code **)(*(long *)(lStack_38 + 0x18) + 8))();
  func_0x000107c615e8(uStack_40);
  *param_1 = bVar1 & 1;
  return;
}



/* Entry: 101ddcb84; end: 101ddcbb3;  */

void FUN_101ddcb84(void)

{
  FUN_101ddcb10();
  return;
}



/* Entry: 101ddcbb4; end: 101ddce47;  */

void FUN_101ddcbb4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar2 = param_1;
  func_0x000103a70ba8();
  uVar3 = *puVar2;
  uVar1 = puVar2[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar3,uVar1);
  func_0x000107c6142c(uVar1);
  func_0x0001000d224c(&uStack_48);
  uVar4 = 0;
  FUN_101dddee8(0,0x112d69830,&PTR_PTR_1126a6700);
  func_0x000100bcb214();
  func_0x000107c61170(uStack_48);
  uStack_58 = 0x101dde070;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0x42000000;
  puStack_68 = &UNK_100ff4e14;
  puStack_60 = &UNK_110487b90;
  ppuVar5 = &puStack_78;
  uStack_50 = param_3;
  func_0x000107c60bc4(ppuVar5);
  uVar1 = uStack_50;
  func_0x000107c6157c(param_3);
  func_0x000107c61574(uVar1);
  func_0x000107c3f4ac(param_1);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  return;
}



/* Entry: 101ddce48; end: 101ddcf73;  */

void FUN_101ddce48(byte *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined1 auStack_68 [24];
  undefined8 uStack_48;
  
  if ((*param_1 & 1) == 0) {
    func_0x000107c61428(param_2 + 0x10,auStack_68,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61648();
    if (param_2 != 0) {
      lVar3 = param_2;
      func_0x000101ddd098();
      func_0x0001000d224c(&uStack_48);
      uVar1 = *(undefined8 *)(param_2 + 0x10);
      uVar2 = *(undefined8 *)(param_2 + 0x18);
      puVar4 = &UNK_110487a88;
      func_0x000107c613fc(&UNK_110487a88,0x20,7);
      *(undefined8 *)(puVar4 + 0x10) = uVar1;
      *(undefined8 *)(puVar4 + 0x18) = uVar2;
      func_0x000107c6157c(uVar2);
      func_0x000107c6157c(uVar1);
      func_0x0001048898b8(uStack_48,1,0x101ddde50,puVar4,PTR___sytN_11034f1b0 + 8);
      func_0x000107c61574(lVar3);
      func_0x000107c61170(uStack_48);
      func_0x000107c61574(puVar4);
      func_0x000107c61574(param_2);
    }
  }
  else {
    func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
    func_0x000104888f7c();
  }
  return;
}



/* Entry: 101ddcf74; end: 101ddd1ab;  */

void FUN_101ddcf74(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar2 = param_1;
  func_0x000103a70ba8();
  uVar3 = *puVar2;
  uVar1 = puVar2[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar3,uVar1);
  func_0x000107c6142c(uVar1);
  func_0x0001000d224c(&uStack_48);
  uVar4 = 0;
  FUN_101dddee8(0,0x112d69830,&PTR_PTR_1126a6700);
  func_0x000100bcb214();
  func_0x000107c61170(uStack_48);
  pcStack_58 = FUN_101dddfe8;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0x42000000;
  puStack_68 = &UNK_1000f3aa0;
  puStack_60 = &UNK_110487b40;
  ppuVar5 = &puStack_78;
  uStack_50 = param_3;
  func_0x000107c60bc4(ppuVar5);
  uVar1 = uStack_50;
  func_0x000107c6157c(param_3);
  func_0x000107c61574(uVar1);
  func_0x000107c4a818(param_1);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  return;
}



/* Entry: 101ddd1ac; end: 101ddd2f3;  */

undefined * FUN_101ddd1ac(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_58;
  
  uVar4 = *param_1;
  func_0x0001000d224c(&puStack_58);
  puVar2 = puStack_58;
  if (puStack_58 == (undefined *)0x0) {
    uVar4 = 0x112d51a30;
    func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
    func_0x000101ddde68();
    puVar2 = &UNK_1106c4638;
    func_0x000107c613f8(&UNK_1106c4638,uVar4,0,0);
    puVar3 = puVar2;
    func_0x00010488904c();
    func_0x000107c614ac(puVar2);
  }
  else {
    func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
    func_0x0001000d224c(&puStack_58);
    puVar1 = &UNK_110487ab0;
    func_0x000107c613fc(&UNK_110487ab0,0x28,7);
    *(undefined **)(puVar1 + 0x10) = puVar2;
    *(undefined8 *)(puVar1 + 0x18) = uVar4;
    *(undefined8 *)(puVar1 + 0x20) = param_3;
    func_0x000107c615f0(puVar2);
    func_0x000107c61174(uVar4);
    func_0x000107c6157c(param_3);
    puVar3 = puStack_58;
    func_0x0001048897a0(puStack_58,1,0,FUN_101dddea8,puVar1);
    func_0x000107c61170(puStack_58);
    func_0x000107c61574(puVar1);
    func_0x000107c615e8(puVar2);
  }
  return puVar3;
}



/* Entry: 101ddd2f4; end: 101ddd3e7;  */

void FUN_101ddd2f4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x0001000d224c(&uStack_48);
  uVar2 = 0;
  FUN_101dddee8(0,0x112d69830,&PTR_PTR_1126a6700);
  func_0x000100bcb214();
  func_0x000107c61170(uStack_48);
  pcStack_58 = FUN_101dddeb4;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0x42000000;
  puStack_68 = &UNK_100ff4e14;
  puStack_60 = &UNK_110487ac8;
  ppuVar3 = &puStack_78;
  uStack_50 = param_1;
  func_0x000107c60bc4(ppuVar3);
  uVar1 = uStack_50;
  func_0x000107c6157c(param_1);
  func_0x000107c61574(uVar1);
  func_0x000107c5c2c0(param_2);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 101ddd3e8; end: 101ddd42b;  */

void FUN_101ddd3e8(long param_1)

{
  if (param_1 != 0) {
    func_0x000107c614b0();
    func_0x00010488ade0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)(param_1);
    return;
  }
  func_0x000100b60084();
  return;
}



/* Entry: 101ddd42c; end: 101ddd517;  */

undefined8 FUN_101ddd42c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uStack_48;
  
  func_0x0001000285a8(0x112e2e9c0,&UNK_10da17648);
  func_0x0001000d224c(&uStack_48);
  uVar2 = uStack_48;
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c6157c(uVar3);
  uVar1 = uVar2;
  func_0x000104889654(uVar2,1,FUN_101dddf28,uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61574(uVar3);
  func_0x0001000d224c(&uStack_48);
  uVar3 = 0;
  FUN_101dd99ec(0);
  uVar2 = uStack_48;
  func_0x000100775264(uStack_48,1,FUN_101ddd588,0,uVar3);
  func_0x000107c61574(uVar1);
  func_0x000107c61170(uStack_48);
  return uVar2;
}



/* Entry: 101ddd518; end: 101ddd587;  */

void FUN_101ddd518(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x0001000d224c(&uStack_40);
  uVar1 = uStack_40;
  func_0x000107c614f0();
  (**(code **)(*(long *)(lStack_38 + 0x18) + 0xa0))();
  func_0x000107c615e8(uStack_40);
  *param_1 = uVar1;
  return;
}



/* Entry: 101ddd588; end: 101ddd5d7;  */

void FUN_101ddd588(undefined4 *param_1,ulong *param_2)

{
  code *pcVar1;
  ulong uStack_18;
  
  uStack_18 = *param_2;
  if (uStack_18 < 6) {
    *param_1 = *(undefined4 *)(&UNK_10da176ec + uStack_18 * 4);
    return;
  }
  func_0x000107c60614(&UNK_11077c488,&uStack_18,&UNK_11077c488,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101ddd5d8);
  (*pcVar1)();
}



/* Entry: 101ddd5d8; end: 101ddd7e3;  */

undefined8 FUN_101ddd5d8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_48;
  
  uVar1 = 0x112e2ea90;
  func_0x0001000285a8(0x112e2ea90,&UNK_10da176d0);
  func_0x0001000d224c(&uStack_48);
  uVar4 = uStack_48;
  func_0x000101ddd6ec();
  uVar2 = uVar1;
  FUN_101ddd42c();
  uVar3 = uVar4;
  func_0x000104889a8c(uVar4,1,uVar1,uVar2,FUN_101ddd7e4,0);
  func_0x000107c61170(uVar4);
  func_0x000107c61574(uVar1);
  func_0x000107c61574(uVar2);
  func_0x0001000d224c(&uStack_48);
  uVar4 = 0;
  FUN_101dddee8(0,0x112e2e950,&PTR_PTR_1126b7240);
  uVar1 = uStack_48;
  func_0x000100775264(uStack_48,1,FUN_101ddd844,0,uVar4);
  func_0x000107c61574(uVar3);
  func_0x000107c61170(uStack_48);
  return uVar1;
}



/* Entry: 101ddd7e4; end: 101ddd843;  */

void FUN_101ddd7e4(undefined8 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  uVar2 = *param_1;
  uVar1 = *param_2;
  func_0x0001000285a8(0x112e2ea90,&UNK_10da176d0);
  uStack_40 = uVar2;
  uStack_38 = uVar1;
  func_0x000104888f7c(&uStack_40);
  return;
}



/* Entry: 101ddd844; end: 101ddd90f;  */

void FUN_101ddd844(ulong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  uVar3 = *param_2;
  uVar4 = (ulong)*(uint *)(param_2 + 1);
  uVar1 = 0;
  func_0x000102fb8764(0);
  func_0x000107c61534();
  func_0x000102fb862c();
  uVar2 = 0;
  func_0x000102fb8730(0);
  func_0x000107c61574(uVar1);
  func_0x000102fb86fc(uVar3);
  func_0x000107c61574(uVar2);
  func_0x000102fb86dc();
  func_0x000107c61574(uVar3);
  uVar1 = 1;
  func_0x000102fb86ec(1);
  func_0x000107c61574();
  func_0x000102fb84bc();
  func_0x000107c61574(uVar1);
  *param_1 = uVar4;
  return;
}



/* Entry: 101ddd910; end: 101ddda67;  */

undefined8 FUN_101ddd910(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_48;
  
  uVar5 = *unaff_x20;
  func_0x0001000285a8(0x112e2e9c8,&UNK_10da17650);
  func_0x0001000d224c(&uStack_48);
  uVar3 = uStack_48;
  uVar4 = unaff_x20[4];
  func_0x000107c6157c(uVar4);
  uVar1 = uVar3;
  func_0x000104889654(uVar3,1,0x101dddf58,uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61574(uVar4);
  func_0x0001000d224c(&uStack_48);
  uVar3 = uStack_48;
  puVar2 = &UNK_110487b00;
  func_0x000107c613fc(&UNK_110487b00,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar5;
  uVar4 = uVar3;
  func_0x000100775264(uVar3,1,FUN_101dddf70,puVar2,PTR___sSiN_11034deb0);
  func_0x000107c61574(uVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61574(puVar2);
  func_0x0001000d224c(&uStack_48);
  uVar3 = uStack_48;
  func_0x000100775264(uStack_48,1,FUN_101dddd04,0,PTR___ss6UInt32VN_11034f020);
  func_0x000107c61574(uVar4);
  func_0x000107c61170(uStack_48);
  return uVar3;
}



/* Entry: 101ddda68; end: 101dddac7;  */

void FUN_101ddda68(undefined4 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 auStack_40 [2];
  undefined8 uStack_38;
  
  uVar1 = *param_1;
  uVar2 = *param_2;
  func_0x0001000285a8(0x112e2ea88,&UNK_10da176c8);
  auStack_40[0] = uVar1;
  uStack_38 = uVar2;
  func_0x000104888f7c(auStack_40);
  return;
}



/* Entry: 101dddac8; end: 101dddc5b;  */

undefined8 FUN_101dddac8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  
  puVar1 = param_1;
  func_0x000103a70ba8();
  uVar3 = *puVar1;
  uVar4 = puVar1[1];
  uVar2 = 0;
  func_0x000102fb83b8(0);
  func_0x000107c61534();
  func_0x000102fb7fdc(uVar3,uVar4,uVar2);
  uVar2 = 0xffffffff;
  func_0x000102fb831c(0xffffffff);
  func_0x000107c61434(uVar4);
  func_0x000107c61574(uVar3);
  func_0x000102fb8228(param_2);
  func_0x000107c61574(uVar2);
  uVar3 = 0;
  func_0x000102fb8208(0);
  func_0x000107c61574(param_2);
  uVar4 = 0;
  func_0x000102fb8218(0);
  func_0x000107c61574(uVar3);
  uVar2 = 0;
  func_0x000102fb81f8(0);
  func_0x000107c61574(uVar4);
  uVar3 = 0;
  func_0x000102fb8920(0);
  func_0x000107c61534();
  func_0x000102fb8858();
  uVar4 = 0;
  func_0x000102fb88e0(0);
  func_0x000107c61574(uVar3);
  uVar3 = uVar4;
  func_0x000102fb833c(uVar4);
  func_0x000107c61574(uVar4);
  func_0x000107c61574(uVar2);
  uVar4 = 0;
  func_0x000102fb8cc8(0);
  func_0x000107c61534();
  func_0x000102fb89e4();
  uVar5 = (ulong)param_1 & 0xffffffff;
  func_0x000102fb89f8(uVar5,2);
  func_0x000107c61574(uVar4);
  uVar6 = uVar5;
  func_0x000102fb8294(uVar5);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(uVar3);
  func_0x000102fb804c();
  func_0x000107c61574(uVar6);
  return uVar3;
}



/* Entry: 101dddc5c; end: 101dddc93;  */

void FUN_101dddc5c(ulong *param_1,uint *param_2)

{
  ulong uVar1;
  
  uVar1 = (ulong)*param_2;
  FUN_101dddac8(uVar1,*(undefined8 *)(param_2 + 2));
  *param_1 = uVar1;
  return;
}



/* Entry: 101dddc94; end: 101dddd03;  */

void FUN_101dddc94(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x0001000d224c(&uStack_40);
  uVar1 = uStack_40;
  func_0x000107c614f0();
  (**(code **)(*(long *)(lStack_38 + 0x18) + 0x10))();
  func_0x000107c615e8(uStack_40);
  *param_1 = uVar1;
  return;
}



/* Entry: 101dddd04; end: 101dddd5b;  */

void FUN_101dddd04(undefined4 *param_1,ulong *param_2)

{
  if (*param_2 >> 0x20 == 0) {
    *param_1 = (int)*param_2;
    return;
  }
  FUN_101dddf9c();
  func_0x000107c613f8(&UNK_1106c4528,param_2,0,0);
  func_0x000107c61654();
  return;
}



/* Entry: 101dddd5c; end: 101ddddcf;  */

void FUN_101dddd5c(byte *param_1)

{
  byte bVar1;
  undefined8 uStack_40;
  long lStack_38;
  undefined8 uVar2;
  
  func_0x0001000d224c(&uStack_40);
  uVar2 = uStack_40;
  func_0x000107c614f0();
  bVar1 = (byte)uVar2;
  (**(code **)(*(long *)(lStack_38 + 0x18) + 0x48))();
  func_0x000107c615e8(uStack_40);
  *param_1 = bVar1 & 1;
  return;
}



/* Entry: 101ddddd0; end: 101ddde33;  */

void FUN_101ddddd0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112e28318;
  func_0x0001000285a8(0x112e28318,&UNK_10da17640);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 101ddde34; end: 101ddde37;  */

void FUN_101ddde34(void)

{
  return;
}



/* Entry: 101ddde38; end: 101dddea7;  */

void FUN_101ddde38(void)

{
  FUN_101ddce48();
  return;
}



/* Entry: 101dddea8; end: 101dddeb3;  */

void FUN_101dddea8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x0001000d224c(&uStack_48);
  uVar3 = 0;
  FUN_101dddee8(0,0x112d69830,&PTR_PTR_1126a6700);
  func_0x000100bcb214();
  func_0x000107c61170(uStack_48);
  pcStack_58 = FUN_101dddeb4;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0x42000000;
  puStack_68 = &UNK_100ff4e14;
  puStack_60 = &UNK_110487ac8;
  ppuVar4 = &puStack_78;
  uStack_50 = param_1;
  func_0x000107c60bc4(ppuVar4);
  uVar2 = uStack_50;
  func_0x000107c6157c(param_1);
  func_0x000107c61574(uVar2);
  func_0x000107c5c2c0(uVar1);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61170(uVar3);
  return;
}



/* Entry: 101dddeb4; end: 101dddecb;  */

void FUN_101dddeb4(void)

{
  FUN_101ddd3e8();
  return;
}



/* Entry: 101dddecc; end: 101dddee7;  */

void FUN_101dddecc(long param_1,long param_2)

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



/* Entry: 101dddee8; end: 101dddf27;  */

void FUN_101dddee8(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 101dddf28; end: 101dddf6f;  */

void FUN_101dddf28(void)

{
  FUN_101ddd518();
  return;
}



/* Entry: 101dddf70; end: 101dddf9b;  */

void FUN_101dddf70(long *param_1,long *param_2)

{
  code *pcVar1;
  long lVar2;
  
  lVar2 = *param_2 * 0x3c;
  if (SUB168(SEXT816(*param_2) * SEXT816(0x3c),8) == lVar2 >> 0x3f) {
    *param_1 = lVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101dddf9c);
  (*pcVar1)();
}



/* Entry: 101dddf9c; end: 101dddfdb;  */

void FUN_101dddf9c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e2eaf8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc43f38;
  func_0x000107c61520(&UNK_10dc43f38,&UNK_1106c4528);
  puRam0000000112e2eaf8 = puVar1;
  return;
}



/* Entry: 101dddfdc; end: 101dddfe7;  */

void FUN_101dddfdc(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar1 = *(undefined8 **)(unaff_x20 + 0x10);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  puVar3 = puVar1;
  func_0x000103a70ba8(puVar1,*(undefined8 *)(unaff_x20 + 0x18));
  uVar4 = *puVar3;
  uVar2 = puVar3[1];
  func_0x000107c61434(uVar2);
  func_0x000107c5fadc(uVar4,uVar2);
  func_0x000107c6142c(uVar2);
  func_0x0001000d224c(&uStack_48);
  uVar5 = 0;
  FUN_101dddee8(0,0x112d69830,&PTR_PTR_1126a6700);
  func_0x000100bcb214();
  func_0x000107c61170(uStack_48);
  pcStack_58 = FUN_101dddfe8;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0x42000000;
  puStack_68 = &UNK_1000f3aa0;
  puStack_60 = &UNK_110487b40;
  ppuVar6 = &puStack_78;
  uStack_50 = uVar7;
  func_0x000107c60bc4(ppuVar6);
  uVar2 = uStack_50;
  func_0x000107c6157c(uVar7);
  func_0x000107c61574(uVar2);
  func_0x000107c4a818(puVar1);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  return;
}



/* Entry: 101dddfe8; end: 101dde053;  */

void FUN_101dddfe8(undefined1 param_1)

{
  undefined1 uStack_11;
  
  uStack_11 = param_1;
  func_0x000100b60084(&uStack_11);
  return;
}



/* Entry: 101dde054; end: 101dde077;  */

void FUN_101dde054(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar1 = *(undefined8 **)(unaff_x20 + 0x10);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  puVar3 = puVar1;
  func_0x000103a70ba8(puVar1,*(undefined8 *)(unaff_x20 + 0x18));
  uVar4 = *puVar3;
  uVar2 = puVar3[1];
  func_0x000107c61434(uVar2);
  func_0x000107c5fadc(uVar4,uVar2);
  func_0x000107c6142c(uVar2);
  func_0x0001000d224c(&uStack_48);
  uVar5 = 0;
  FUN_101dddee8(0,0x112d69830,&PTR_PTR_1126a6700);
  func_0x000100bcb214();
  func_0x000107c61170(uStack_48);
  uStack_58 = 0x101dde070;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0x42000000;
  puStack_68 = &UNK_100ff4e14;
  puStack_60 = &UNK_110487b90;
  ppuVar6 = &puStack_78;
  uStack_50 = uVar7;
  func_0x000107c60bc4(ppuVar6);
  uVar2 = uStack_50;
  func_0x000107c6157c(uVar7);
  func_0x000107c61574(uVar2);
  func_0x000107c3f4ac(puVar1);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  return;
}



/* Entry: 101dde078; end: 101dde083; -[SCMemoriesOpportunisticRetranscodeSchedulerEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101dde078(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e2eb00;
  func_0x000107c61428(param_1 + _DAT_112e2eb00,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101dde084; end: 101dde08f; -[SCMemoriesOpportunisticRetranscodeSchedulerEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101dde084(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e2eb00;
  func_0x000107c61428(param_1 + _DAT_112e2eb00,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101dde090; end: 101dde09b; -[SCMemoriesOpportunisticRetranscodeSchedulerEntryPoint experimentServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101dde090(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e2eb08;
  func_0x000107c61428(param_1 + _DAT_112e2eb08,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101dde09c; end: 101dde0a7; -[SCMemoriesOpportunisticRetranscodeSchedulerEntryPoint setExperimentServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101dde09c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e2eb08;
  func_0x000107c61428(param_1 + _DAT_112e2eb08,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101dde0a8; end: 101dde0b3; -[SCMemoriesOpportunisticRetranscodeSchedulerEntryPoint asyncQueueServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101dde0a8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e2eb10;
  func_0x000107c61428(param_1 + _DAT_112e2eb10,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101dde0b4; end: 101dde0bf; -[SCMemoriesOpportunisticRetranscodeSchedulerEntryPoint setAsyncQueueServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101dde0b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e2eb10;
  func_0x000107c61428(param_1 + _DAT_112e2eb10,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101dde0c0; end: 101dde0cb; -[SCMemoriesOpportunisticRetranscodeSchedulerEntryPoint jobSchedulerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101dde0c0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e2eb18;
  func_0x000107c61428(param_1 + _DAT_112e2eb18,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101dde0cc; end: 101dde0d7; -[SCMemoriesOpportunisticRetranscodeSchedulerEntryPoint setJobSchedulerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101dde0cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e2eb18;
  func_0x000107c61428(param_1 + _DAT_112e2eb18,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101dde0d8; end: 101dde0e3; -[SCMemoriesOpportunisticRetranscodeSchedulerEntryPoint ortSchedulingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101dde0d8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e2eb20;
  func_0x000107c61428(param_1 + _DAT_112e2eb20,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101dde0e4; end: 101dde127;  */

void FUN_101dde0e4(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 101dde128; end: 101dde133; -[SCMemoriesOpportunisticRetranscodeSchedulerEntryPoint setOrtSchedulingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101dde128(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e2eb20;
  func_0x000107c61428(param_1 + _DAT_112e2eb20,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101dde134; end: 101dde187;  */

void FUN_101dde134(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101dde188; end: 101dde3af;  */

/* WARNING: Possible PIC construction at 0x000101dde2d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101dde2e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101dde2f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101dde304: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101dde378: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101dde388: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101dde368: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101dde38c) */
/* WARNING: Removing unreachable block (ram,0x000101dde37c) */
/* WARNING: Removing unreachable block (ram,0x000101dde308) */
/* WARNING: Removing unreachable block (ram,0x000101dde2f8) */
/* WARNING: Removing unreachable block (ram,0x000101dde2e8) */
/* WARNING: Removing unreachable block (ram,0x000101dde2d8) */
/* WARNING: Removing unreachable block (ram,0x000101dde36c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101dde188(void)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar4 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar4 != 0) {
    lVar1 = unaff_x20;
    func_0x000107c42bbc();
    func_0x000107c61180();
    if (lVar1 != 0) {
      lVar2 = unaff_x20;
      func_0x000107c3e274();
      func_0x000107c61180();
      if (lVar2 == 0) {
        func_0x000107c61170(lVar4);
        lVar4 = lVar1;
      }
      else {
        lVar2 = unaff_x20;
        func_0x000107c4a830();
        func_0x000107c61180();
        if (lVar2 == 0) {
          func_0x000107c61170(lVar4);
          lVar4 = lVar1;
        }
        else {
          func_0x000107c4e0c4();
          func_0x000107c61180();
          if (unaff_x20 != 0) {
            FUN_101dd99cc(0);
            func_0x000107c613fc();
            func_0x0001000d224c(auStack_88);
            puVar3 = auStack_88;
            FUN_101dde700(puVar3,uStack_70);
            lVar4 = 3;
            func_0x000100774b74(3,0xd,0,uStack_70,uStack_68,puVar3);
            puVar5 = &UNK_110487bd0;
            func_0x000107c613fc(&UNK_110487bd0,0x18,7);
            *(long *)(puVar5 + 0x10) = unaff_x20;
            uVar6 = 0;
            func_0x000100964acc(0);
            func_0x000107c61174(unaff_x20);
            func_0x00010090569c(FUN_101dde3b0,puVar5,uVar6);
          }
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar4);
    return;
  }
  return;
}



/* Entry: 101dde3b0; end: 101dde3b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101dde3b0(void)

{
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x0001000d224c(auStack_58);
  func_0x0001000a8868(auStack_58,uStack_40);
  (**(code **)(lStack_38 + 8))(uStack_40,lStack_38);
  func_0x0001000834e4(auStack_58);
  return;
}



/* Entry: 101dde3b8; end: 101dde3df; -[SCMemoriesOpportunisticRetranscodeSchedulerEntryPoint begin] */

void FUN_101dde3b8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101dde188();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101dde3e0; end: 101dde423; -[SCMemoriesOpportunisticRetranscodeSchedulerEntryPoint end] */

void FUN_101dde3e0(undefined8 param_1)

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



/* Entry: 101dde424; end: 101dde6ff;  */

void FUN_101dde424(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    FUN_101dde700(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffee) || (param_3 != -0x7ffffffef10ef210)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000012,0x800000010ef10df0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        if ((param_2 != -0x2fffffffffffffee) || (param_3 != -0x7ffffffef10ed650)) {
          uVar2 = 0;
          func_0x000107c605b8(0xd000000000000012,0x800000010ef129b0,param_2,param_3,0);
          if ((uVar2 & 1) == 0) {
            uVar2 = 0;
            if (((param_2 == -0x2fffffffffffffec) && (param_3 == -0x7ffffffef0feea90)) ||
               (func_0x000107c605b8(0xd000000000000014,0x800000010f011570,param_2,param_3,0),
               (uVar2 & 1) != 0)) {
              FUN_101dde700(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c55964();
            }
            else {
              uVar2 = 0xd000000000000015;
              if (((param_2 != -0x2fffffffffffffeb) || (param_3 != -0x7ffffffef0feea70)) &&
                 (func_0x000107c605b8(0xd000000000000015,0x800000010f011590,param_2,param_3,0),
                 (uVar2 & 1) == 0)) {
                func_0x000107c602fc(0x15);
                func_0x000107c6142c(0xe000000000000000);
                func_0x000107c5fb78(param_2,param_3);
                func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                    "MemoriesOpportunisticRetranscodeSchedulingServicesImpl/SCMemoriesOpportunisticRetranscodeSchedulerEntryPoint.swift"
                                    ,0x72,2,0x36,0);
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x101dde700);
                (*pcVar1)();
              }
              FUN_101dde700(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c570d0();
            }
            goto LAB_101dde4b0;
          }
        }
        FUN_101dde700(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c52954();
        goto LAB_101dde4b0;
      }
    }
    FUN_101dde700(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c54798();
  }
LAB_101dde4b0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 101dde700; end: 101dde723;  */

long * FUN_101dde700(long *param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = *(uint *)(*(long *)(param_2 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) != 0) {
    uVar2 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(*param_1 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)));
  }
  return param_1;
}



/* Entry: 101dde724; end: 101dde7cf; -[SCMemoriesOpportunisticRetranscodeSchedulerEntryPoint setValue:forIvarName:] */

void FUN_101dde724(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101dde424(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_101dde96c(auStack_50);
  return;
}



/* Entry: 101dde7d0; end: 101dde87f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101dde7d0(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112e2eb00,0);
  func_0x000107c61614(unaff_x20 + _DAT_112e2eb08,0);
  func_0x000107c61614(unaff_x20 + _DAT_112e2eb10,0);
  func_0x000107c61614(unaff_x20 + _DAT_112e2eb18,0);
  func_0x000107c61614(unaff_x20 + _DAT_112e2eb20,0);
  *(undefined8 *)(unaff_x20 + _DAT_112e2eb28) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}


