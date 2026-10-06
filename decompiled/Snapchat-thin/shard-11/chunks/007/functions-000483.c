/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10888ef38; end: 10888ef7f;  */

void FUN_10888ef38(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10888ed80();
  if ((uVar1 & 1) == 0) {
    FUN_10888ef98(param_1);
  }
  else {
    FUN_10888ef80(param_1);
  }
  return;
}



/* Entry: 10888ef80; end: 10888ef97;  */

undefined8 FUN_10888ef80(undefined8 *param_1)

{
  return *param_1;
}



/* Entry: 10888ef98; end: 10888efbb;  */

void FUN_10888ef98(undefined8 param_1)

{
  FUN_10888efbc(param_1);
  return;
}



/* Entry: 10888efbc; end: 10888efe7;  */

undefined8 FUN_10888efbc(undefined8 param_1)

{
  return param_1;
}



/* Entry: 10888efe8; end: 10888f0d3;  */

undefined8 FUN_10888efe8(undefined8 param_1,undefined8 param_2)

{
  func_0x00010888f024(param_1,param_2);
  return param_1;
}



/* Entry: 10888f0d4; end: 10888f10b;  */

ulong FUN_10888f0d4(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = param_2;
  FUN_10888ed80();
  if ((uVar1 & 1) == 0) {
    FUN_10888ed0c(param_2);
  }
  return param_2;
}



/* Entry: 10888f10c; end: 10888f3ab;  */

undefined8 FUN_10888f10c(undefined8 param_1)

{
  func_0x00010888f140(param_1);
  return param_1;
}



/* Entry: 10888f3ac; end: 10888f3d7;  */

void FUN_10888f3ac(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}



/* Entry: 10888f3d8; end: 10888f40b;  */

long FUN_10888f3d8(long param_1)

{
  func_0x00010888a74c(param_1 + 8);
  return param_1;
}



/* Entry: 10888f40c; end: 10888f41f;  */

undefined8 FUN_10888f40c(undefined8 param_1)

{
  return param_1;
}



/* Entry: 10888f420; end: 10888f4bb;  */

undefined1 * FUN_10888f420(undefined1 *param_1,long param_2,ulong param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong uStack_50;
  ulong uStack_48;
  long lStack_40;
  undefined1 *puStack_38;
  undefined1 *puStack_30;
  long lStack_28;
  
  puVar1 = &uStack_50;
  puVar2 = &uStack_50;
  uStack_48 = param_3;
  lStack_40 = param_2;
  puStack_38 = param_1;
  if (param_3 < 9) {
    lStack_28 = param_2;
    func_0x00010b4d80dc(param_1,param_2 + 7U & 0xfffffffffffffff8);
    puStack_30 = param_1;
  }
  else {
    FUN_10888f4bc();
    uStack_50 = param_3;
    FUN_10888f520(&uStack_50,lStack_40);
    func_0x00010b4d80dc(param_1,puVar1);
    func_0x00010888f4dc(&uStack_50,param_1);
    puStack_30 = (undefined1 *)puVar2;
  }
  return puStack_30;
}



/* Entry: 10888f4bc; end: 10888f51f;  */

undefined8 FUN_10888f4bc(undefined8 param_1)

{
  return param_1;
}



/* Entry: 10888f520; end: 10888f567;  */

long FUN_10888f520(long *param_1,long param_2)

{
  return param_2 + *param_1 + -8;
}



/* Entry: 10888f568; end: 10888f58b;  */

void FUN_10888f568(undefined8 param_1)

{
  FUN_10875d43c(param_1);
  return;
}



/* Entry: 10888f58c; end: 10888f5b3;  */

void FUN_10888f58c(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x38) = param_2;
  return;
}



/* Entry: 10888f5b4; end: 10888f5e3;  */

undefined8 FUN_10888f5b4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_18;
  
  FUN_10888f5e4(&uStack_18,param_2);
  return uStack_18;
}



/* Entry: 10888f5e4; end: 10888f61f;  */

undefined8 FUN_10888f5e4(undefined8 param_1,undefined8 param_2)

{
  FUN_10888f620(param_1,param_2);
  return param_1;
}



/* Entry: 10888f620; end: 10888f657;  */

void FUN_10888f620(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}



/* Entry: 10888f658; end: 10888f6d7;  */

undefined ** FUN_10888f658(long param_1)

{
  undefined **ppuVar1;
  
  ppuVar1 = *(undefined ***)(param_1 + 0x28);
  if (ppuVar1 == (undefined **)0x0) {
    ppuVar1 = &PTR_PTR_113280c30;
  }
  return ppuVar1;
}



/* Entry: 10888f6d8; end: 10888f723;  */

undefined ** FUN_10888f6d8(long param_1)

{
  long lVar1;
  undefined **ppuVar2;
  
  lVar1 = param_1;
  FUN_10888f724();
  if ((int)lVar1 == 5) {
    ppuVar2 = *(undefined ***)(param_1 + 0x10);
  }
  else {
    ppuVar2 = &PTR_PTR_113280818;
  }
  return ppuVar2;
}



/* Entry: 10888f724; end: 10888f73b;  */

undefined4 FUN_10888f724(long param_1)

{
  return *(undefined4 *)(param_1 + 0x1c);
}



/* Entry: 10888f73c; end: 10888f79f;  */

void FUN_10888f73c(long param_1)

{
  func_0x00010888f778(param_1 + 0x28);
  return;
}



/* Entry: 10888f7a0; end: 10888f7b7;  */

undefined8 FUN_10888f7a0(undefined8 *param_1)

{
  return *param_1;
}



/* Entry: 10888f7b8; end: 10888f7eb;  */

undefined8 FUN_10888f7b8(undefined8 param_1)

{
  func_0x000107f4cdbc(param_1);
  return param_1;
}



/* Entry: 10888f7ec; end: 10888f813;  */

void FUN_10888f7ec(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x38) = param_2;
  return;
}



/* Entry: 10888f814; end: 10888f89f;  */

undefined8 FUN_10888f814(undefined8 param_1)

{
  return param_1;
}



/* Entry: 10888f8a0; end: 10888f9d7;  */

undefined8 FUN_10888f8a0(undefined8 param_1)

{
  func_0x00010888f8d4(param_1);
  return param_1;
}



/* Entry: 10888f9d8; end: 10888fa0b;  */

long FUN_10888f9d8(long param_1)

{
  if ((*(byte *)(param_1 + 0x38) & 1) != 0) {
    func_0x0001088898f4();
  }
  return param_1;
}



/* Entry: 10888fa0c; end: 10888fa2f;  */

long FUN_10888fa0c(long param_1)

{
  return param_1 + 0x18;
}



/* Entry: 10888fa30; end: 10888fb67;  */

undefined8 FUN_10888fa30(undefined8 param_1)

{
  func_0x00010888fa64(param_1);
  return param_1;
}



/* Entry: 10888fb68; end: 10888fb97;  */

void FUN_10888fb68(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[4] = 0;
  return;
}



/* Entry: 10888fb98; end: 10888fbcb;  */

bool FUN_10888fb98(undefined8 param_1,ulong *param_2,ulong *param_3)

{
  return *param_2 < *param_3;
}



/* Entry: 10888fbcc; end: 10888fbdf;  */

void FUN_10888fbcc(void)

{
  FUN_10888fbe0();
  return;
}



/* Entry: 10888fbe0; end: 10888fbe7;  */

undefined8 FUN_10888fbe0(void)

{
  return 0xffffffffffffffff;
}



/* Entry: 10888fbe8; end: 10888fd1f;  */

undefined8 FUN_10888fbe8(undefined8 param_1)

{
  func_0x00010888fc1c(param_1);
  return param_1;
}



/* Entry: 10888fd20; end: 10888fd3b;  */

void FUN_10888fd20(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x30] = 0;
  return;
}



/* Entry: 10888fd3c; end: 10888ff53;  */

undefined8 FUN_10888fd3c(undefined8 param_1)

{
  func_0x00010888fd70(param_1);
  return param_1;
}



/* Entry: 10888ff54; end: 10888ff9f;  */

uint FUN_10888ff54(undefined8 param_1)

{
  FUN_10888a660(param_1);
  return (uint)param_1 & 1;
}



/* Entry: 10888ffa0; end: 10888ffb3;  */

undefined8 FUN_10888ffa0(undefined8 param_1)

{
  return param_1;
}



/* Entry: 10888ffb4; end: 10888ffe7;  */

undefined8 FUN_10888ffb4(undefined8 param_1)

{
  func_0x000107c27fb8(param_1);
  return param_1;
}



/* Entry: 10888ffe8; end: 108890027;  */

undefined ** FUN_10888ffe8(long param_1)

{
  undefined **ppuVar1;
  
  ppuVar1 = *(undefined ***)(param_1 + 0x18);
  if (ppuVar1 == (undefined **)0x0) {
    ppuVar1 = &PTR_PTR_11326cb58;
  }
  return ppuVar1;
}



/* Entry: 108890028; end: 108890063;  */

void FUN_108890028(long param_1)

{
  func_0x00010888f778(param_1 + 0x20);
  return;
}



/* Entry: 108890064; end: 108890083;  */

undefined4 FUN_108890064(long param_1)

{
  return *(undefined4 *)(param_1 + 0x30);
}



/* Entry: 108890084; end: 108890103;  */

undefined ** FUN_108890084(long param_1)

{
  undefined **ppuVar1;
  
  ppuVar1 = *(undefined ***)(param_1 + 0x20);
  if (ppuVar1 == (undefined **)0x0) {
    ppuVar1 = &PTR_PTR_11327fd48;
  }
  return ppuVar1;
}



/* Entry: 108890104; end: 10889014f;  */

undefined ** FUN_108890104(long param_1)

{
  long lVar1;
  undefined **ppuVar2;
  
  lVar1 = param_1;
  FUN_108890150();
  if ((int)lVar1 == 5) {
    ppuVar2 = *(undefined ***)(param_1 + 0x10);
  }
  else {
    ppuVar2 = &PTR_PTR_113280230;
  }
  return ppuVar2;
}



/* Entry: 108890150; end: 1088901cb;  */

undefined4 FUN_108890150(long param_1)

{
  return *(undefined4 *)(param_1 + 0x1c);
}



/* Entry: 1088901cc; end: 10889020b;  */

undefined ** FUN_1088901cc(long param_1)

{
  undefined **ppuVar1;
  
  ppuVar1 = *(undefined ***)(param_1 + 0x38);
  if (ppuVar1 == (undefined **)0x0) {
    ppuVar1 = &PTR_PTR_11326cb58;
  }
  return ppuVar1;
}



/* Entry: 10889020c; end: 108890247;  */

void FUN_10889020c(long param_1)

{
  func_0x00010888f778(param_1 + 0x30);
  return;
}



/* Entry: 108890248; end: 10889026b;  */

long FUN_108890248(long param_1)

{
  return param_1 + 0x18;
}



/* Entry: 10889026c; end: 1088902af;  */

undefined8 FUN_10889026c(undefined8 param_1,undefined8 param_2)

{
  FUN_10889036c(param_1,param_2);
  return param_1;
}



/* Entry: 1088902b0; end: 108890337;  */

undefined8 FUN_1088902b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uStack_38;
  undefined8 auStack_30 [2];
  
  uStack_38 = param_2;
  auStack_30[0] = param_1;
  while( true ) {
    puVar1 = auStack_30;
    func_0x00010888ad50(puVar1,&uStack_38);
    if (((ulong)puVar1 & 1) == 0) {
      return auStack_30[0];
    }
    puVar1 = auStack_30;
    FUN_1088903b8(puVar1);
    uVar2 = param_4;
    FUN_10889038c(param_4,puVar1);
    FUN_1086685f0();
    if ((uVar2 & 1) != 0) break;
    func_0x0001088903d4(auStack_30);
  }
  return auStack_30[0];
}



/* Entry: 108890338; end: 10889036b;  */

undefined8 FUN_108890338(undefined8 param_1)

{
  func_0x00010889040c();
  return param_1;
}



/* Entry: 10889036c; end: 10889038b;  */

undefined8 FUN_10889036c(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}



/* Entry: 10889038c; end: 1088903b7;  */

void FUN_10889038c(undefined8 param_1,undefined8 param_2)

{
  func_0x0001088903f4(param_1,param_2);
  return;
}



/* Entry: 1088903b8; end: 108890427;  */

undefined8 FUN_1088903b8(undefined8 *param_1)

{
  return *(undefined8 *)*param_1;
}



/* Entry: 108890428; end: 108890463;  */

void FUN_108890428(long param_1)

{
  func_0x00010888f778(param_1 + 0x18);
  return;
}



/* Entry: 108890464; end: 10889050b;  */

long FUN_108890464(long param_1)

{
  FUN_1088898c0(param_1);
  func_0x0001088904a4(param_1 + 0x28);
  *(undefined1 *)(param_1 + 0x30) = 0;
  return param_1;
}



/* Entry: 10889050c; end: 108890543;  */

long FUN_10889050c(long param_1)

{
  return param_1 + 0x18;
}



/* Entry: 108890544; end: 108890a27;  */

undefined8 FUN_108890544(undefined8 param_1)

{
  func_0x000108890578(param_1);
  return param_1;
}



/* Entry: 108890a28; end: 108890a43;  */

void FUN_108890a28(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x38] = 0;
  return;
}



/* Entry: 108890a44; end: 108890aeb;  */

undefined8 * FUN_108890a44(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  func_0x000108890a84(param_1 + 2);
  return param_1;
}



/* Entry: 108890aec; end: 108890aff;  */

undefined8 FUN_108890aec(undefined8 param_1)

{
  return param_1;
}



/* Entry: 108890b00; end: 108890d47;  */

undefined8 FUN_108890b00(undefined8 param_1,undefined8 param_2)

{
  func_0x000108890b3c(param_1,param_2);
  return param_1;
}



/* Entry: 108890d48; end: 108890e17;  */

long * FUN_108890d48(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  FUN_108890e18(param_1,param_2);
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  plVar1 = param_1;
  FUN_108890e54();
  if (*plVar1 != 0) {
    plVar1 = param_1 + 2;
    FUN_108890e6c();
    lVar2 = param_1[2];
    func_0x000108890f1c(lVar2);
    plVar3 = param_1;
    FUN_108890f34(param_1);
    func_0x000108890eb8(lVar2,plVar3);
    plVar3 = param_1;
    func_0x000108890e90(param_1,lVar2);
    *plVar3 = (long)plVar1;
    param_2[2] = 0;
    FUN_108890e54();
    *param_2 = 0;
  }
  return param_1;
}



/* Entry: 108890e18; end: 108890e53;  */

undefined8 FUN_108890e18(undefined8 param_1,undefined8 param_2)

{
  FUN_108890f5c(param_1,param_2);
  return param_1;
}



/* Entry: 108890e54; end: 108890e6b;  */

long FUN_108890e54(long param_1)

{
  return param_1 + 0x18;
}



/* Entry: 108890e6c; end: 108890e8f;  */

void FUN_108890e6c(undefined8 param_1)

{
  func_0x000108891084(param_1);
  return;
}



/* Entry: 108890e90; end: 108890f33;  */

long FUN_108890e90(long *param_1,long param_2)

{
  return *param_1 + param_2 * 8;
}



/* Entry: 108890f34; end: 108890f5b;  */

void FUN_108890f34(undefined8 param_1)

{
  func_0x000108891098(param_1);
  func_0x0001088910b0();
  return;
}



/* Entry: 108890f5c; end: 108890faf;  */

undefined8 * FUN_108890f5c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  FUN_108890fb0();
  *param_1 = uVar1;
  func_0x000108890fd4(param_2);
  FUN_108890fec(param_1 + 1,param_2);
  return param_1;
}



/* Entry: 108890fb0; end: 108890feb;  */

undefined8 FUN_108890fb0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = 0;
  return uVar1;
}



/* Entry: 108890fec; end: 10889106f;  */

undefined8 FUN_108890fec(undefined8 param_1,undefined8 param_2)

{
  func_0x000108891028(param_1,param_2);
  return param_1;
}



/* Entry: 108891070; end: 1088910c7;  */

undefined8 FUN_108891070(undefined8 param_1)

{
  return param_1;
}



/* Entry: 1088910c8; end: 10889126f;  */

long FUN_1088910c8(long param_1)

{
  func_0x00010888ba3c(param_1 + 0x20);
  func_0x0001088bf334(param_1);
  return param_1;
}



/* Entry: 108891270; end: 1088912db;  */

void FUN_108891270(undefined8 param_1,undefined8 param_2)

{
  func_0x00010889129c(param_1,param_2);
  return;
}



/* Entry: 1088912dc; end: 108891423;  */

undefined8 FUN_1088912dc(undefined8 param_1,undefined8 param_2)

{
  func_0x000108891318(param_1,param_2);
  return param_1;
}



/* Entry: 108891424; end: 108891447;  */

void FUN_108891424(undefined8 param_1)

{
  FUN_108891448(param_1);
  return;
}



/* Entry: 108891448; end: 10889149f;  */

undefined8 FUN_108891448(undefined8 param_1)

{
  return param_1;
}



/* Entry: 1088914a0; end: 108891543;  */

undefined8 FUN_1088914a0(undefined8 param_1,undefined8 param_2)

{
  func_0x000106e5c56c(param_1,param_2);
  return param_1;
}



/* Entry: 108891544; end: 108891567;  */

void FUN_108891544(undefined8 param_1)

{
  FUN_1088915c8(param_1);
  return;
}



/* Entry: 108891568; end: 1088915a3;  */

void FUN_108891568(long *param_1,long param_2)

{
  *(undefined8 *)(*param_1 + 8) = *(undefined8 *)(param_2 + 8);
  **(long **)(param_2 + 8) = *param_1;
  return;
}



/* Entry: 1088915a4; end: 1088915c7;  */

void FUN_1088915a4(undefined8 param_1)

{
  func_0x0001088915dc(param_1);
  return;
}



/* Entry: 1088915c8; end: 108891607;  */

undefined8 FUN_1088915c8(undefined8 param_1)

{
  return param_1;
}



/* Entry: 108891608; end: 108891637;  */

undefined8 FUN_108891608(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_18;
  
  FUN_10889164c(&uStack_18,param_2);
  return uStack_18;
}



/* Entry: 108891638; end: 10889164b;  */

undefined8 FUN_108891638(undefined8 param_1)

{
  return param_1;
}



/* Entry: 10889164c; end: 108891687;  */

undefined8 FUN_10889164c(undefined8 param_1,undefined8 param_2)

{
  FUN_108891688(param_1,param_2);
  return param_1;
}



/* Entry: 108891688; end: 1088916d3;  */

void FUN_108891688(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}



/* Entry: 1088916d4; end: 108891703;  */

undefined8 FUN_1088916d4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_18;
  
  FUN_108891718(&uStack_18,param_2);
  return uStack_18;
}



/* Entry: 108891704; end: 108891717;  */

undefined8 FUN_108891704(undefined8 param_1)

{
  return param_1;
}



/* Entry: 108891718; end: 108891753;  */

undefined8 FUN_108891718(undefined8 param_1,undefined8 param_2)

{
  FUN_108891754(param_1,param_2);
  return param_1;
}



/* Entry: 108891754; end: 10889179f;  */

void FUN_108891754(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}



/* Entry: 1088917a0; end: 10889192f;  */

undefined8 FUN_1088917a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_10888d978(param_1);
  func_0x000104c0067c(param_1,param_2,param_3);
  return param_1;
}



/* Entry: 108891930; end: 1088919e7;  */

uint FUN_108891930(undefined8 param_1,undefined8 param_2)

{
  func_0x000108891a08(param_1,param_2);
  return ((uint)param_1 ^ 1) & 1;
}



/* Entry: 1088919e8; end: 108891a37;  */

void FUN_1088919e8(undefined8 *param_1)

{
  *param_1 = *(undefined8 *)*param_1;
  return;
}



/* Entry: 108891a38; end: 108891a7f;  */

void FUN_108891a38(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1[1];
  FUN_108891a80(lVar1,param_2);
  *(long *)*param_1 = *(long *)*param_1 - lVar1;
  return;
}



/* Entry: 108891a80; end: 108891aab;  */

void FUN_108891a80(undefined8 param_1,undefined8 param_2)

{
  FUN_108891aac(param_1,param_2);
  return;
}



/* Entry: 108891aac; end: 108891b03;  */

uint FUN_108891aac(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  uStack_30 = param_2;
  uStack_28 = param_1;
  FUN_108891b38(param_1,param_2);
  uStack_38 = uVar1;
  FUN_108891c90();
  puVar2 = &uStack_38;
  uStack_40 = param_1;
  FUN_108891b04(puVar2,&uStack_40);
  return (uint)puVar2 & 1;
}



/* Entry: 108891b04; end: 108891b37;  */

uint FUN_108891b04(undefined8 param_1,undefined8 param_2)

{
  FUN_108891cbc(param_1,param_2);
  return ((uint)param_1 ^ 1) & 1;
}



/* Entry: 108891b38; end: 108891c8f;  */

ulong * FUN_108891b38(ulong *param_1,undefined8 param_2)

{
  bool bVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puStack_58;
  ulong *puStack_28;
  
  puVar2 = param_1;
  FUN_108890f34();
  if ((puVar2 != (ulong *)0x0) && (puVar3 = param_1, func_0x000108891cec(), puVar3 != (ulong *)0x0))
  {
    puVar3 = param_1;
    func_0x000108891d04();
    FUN_108891d1c();
    puVar4 = puVar3;
    func_0x000108890eb8(puVar3,puVar2);
    puVar2 = param_1;
    func_0x000108890e90(param_1,puVar4);
    if ((ulong *)*puVar2 != (ulong *)0x0) {
      puStack_58 = *(ulong **)*puVar2;
      while( true ) {
        bVar1 = false;
        if (puStack_58 != (ulong *)0x0) {
          puVar2 = puStack_58;
          func_0x000108890f1c();
          bVar1 = true;
          if (puVar3 != puVar2) {
            puVar2 = puStack_58;
            func_0x000108890f1c();
            func_0x000108890eb8();
            bVar1 = puVar2 == puVar4;
          }
        }
        if (!bVar1) break;
        puVar2 = puStack_58;
        func_0x000108890f1c();
        if (puVar2 == puVar3) {
          puVar2 = param_1;
          FUN_108891d48();
          puVar5 = puStack_58;
          func_0x000108891d98(puStack_58);
          FUN_108891dbc();
          func_0x000108891d60(puVar2,puVar5,param_2);
          if (((ulong)puVar2 & 1) != 0) {
            FUN_108891dd4(&puStack_28,puStack_58);
            return puStack_28;
          }
        }
        puStack_58 = (ulong *)*puStack_58;
      }
    }
  }
  FUN_108891c90();
  return param_1;
}



/* Entry: 108891c90; end: 108891cbb;  */

undefined8 FUN_108891c90(void)

{
  undefined8 uStack_18;
  
  FUN_108891dd4(&uStack_18,0);
  return uStack_18;
}


