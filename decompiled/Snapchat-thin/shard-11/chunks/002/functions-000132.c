/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10828303c; end: 108283053;  */

void FUN_10828303c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_108283070(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 108283054; end: 10828306f;  */

void FUN_108283054(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_108283070(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108283070; end: 108283097;  */

undefined8 * FUN_108283070(undefined8 *param_1)

{
  FUN_10815dbb8(param_1 + 1);
  FUN_1083a3ca0(*param_1);
  return param_1;
}



/* Entry: 108283098; end: 108283263;  */

void FUN_108283098(long param_1)

{
  long unaff_x19;
  undefined8 *unaff_x20;
  
  *(undefined8 *)(param_1 + (long)*(int *)(unaff_x19 + 8) * 8) = *unaff_x20;
  return;
}



/* Entry: 108283264; end: 108283323;  */

int * FUN_108283264(int *param_1,int *param_2)

{
  code *pcVar1;
  undefined *puVar2;
  int iVar3;
  
  iVar3 = *param_2;
  *param_1 = iVar3;
  if ((char)param_1[8] == '\x01') {
    (*(code *)**(undefined8 **)(param_1 + 2))(param_1 + 2);
    iVar3 = *param_2;
  }
  *(undefined1 *)(param_1 + 8) = 0;
  if (iVar3 - 1U < 2) {
    (**(code **)(*(long *)(param_2 + 2) + 0x10))(param_2 + 2,param_1 + 2);
    *(undefined1 *)(param_1 + 0xc) = 1;
    return param_1;
  }
  if (iVar3 == 0) {
    puVar2 = &UNK_10f481231;
  }
  else {
    puVar2 = &UNK_10f4812b1;
  }
  FUN_10841076c(puVar2);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x108283324);
  (*pcVar1)();
}



/* Entry: 108283324; end: 1082833e7;  */

uint * FUN_108283324(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  undefined8 uVar4;
  
  uVar1 = *param_2;
  *param_1 = uVar1;
  uVar2 = param_2[1];
  *(char *)(param_1 + 1) = (char)uVar2;
  *(undefined1 *)(param_1 + 0x16) = 0;
  param_1[0x1b] = param_2[0x1b];
  if ((char)uVar2 == '\x01') {
    if (uVar1 < 3) {
      *(undefined1 *)(param_1 + 0x16) = 0;
      (**(code **)(*(long *)(param_2 + 2) + 0x48))(param_2 + 2,param_1 + 2);
    }
    else {
      if (uVar1 != 4) {
        func_0x000108283678(&UNK_10f481303);
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1082833bc);
        (*pcVar3)();
      }
      uVar4 = *(undefined8 *)(param_2 + 0x18);
      param_1[0x1a] = param_2[0x1a];
      *(undefined8 *)(param_1 + 0x18) = uVar4;
    }
  }
  return param_1;
}



/* Entry: 1082833e8; end: 10828342f;  */

long FUN_1082833e8(long param_1,long param_2)

{
  if (param_1 != param_2) {
    if (*(char *)(param_1 + 0x58) == '\x01') {
      func_0x0001082836b0();
    }
    *(undefined1 *)(param_1 + 0x58) = 0;
    FUN_108283324(param_1,param_2);
  }
  return param_1;
}



/* Entry: 108283430; end: 1082834b7;  */

void FUN_108283430(long param_1,int *param_2)

{
  FUN_108283324(param_1,param_2);
  if (*param_2 == 1) {
    (**(code **)(*(long *)(param_1 + 8) + 0x50))((long *)(param_1 + 8));
  }
  *(undefined4 *)(param_1 + 0x6c) = 1;
  return;
}



/* Entry: 1082834b8; end: 10828354f;  */

uint * FUN_1082834b8(uint *param_1,uint *param_2)

{
  uint uVar1;
  code *pcVar2;
  
  if ((((char)param_1[1] == '\x01') && ((param_2[1] & 1) != 0)) &&
     (uVar1 = *param_1, uVar1 == *param_2)) {
    if (uVar1 < 3) {
      param_1 = param_1 + 2;
                    /* WARNING: Could not recover jumptable at 0x0001082834f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)param_1 + 0x28))(param_1,param_2 + 2);
      return param_1;
    }
    if (uVar1 != 4) {
      func_0x000108283678(&UNK_10f481303);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x108283550);
      (*pcVar2)();
    }
    if (param_1[0x18] == param_2[0x18]) {
      return (uint *)(ulong)(param_1[0x19] == param_2[0x19]);
    }
  }
  return (uint *)0x0;
}



/* Entry: 108283550; end: 108283587;  */

long FUN_108283550(long param_1)

{
  if (*(char *)(param_1 + 0xe8) == '\x01') {
    func_0x000108283688();
  }
  *(undefined1 *)(param_1 + 0xe8) = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x10);
  return param_1;
}



/* Entry: 108283588; end: 1082836d3;  */

long * FUN_108283588(char *param_1,byte *param_2)

{
  uint uVar1;
  long *plVar2;
  
  if (((*param_1 == '\x01') && ((*param_2 & 1) != 0)) &&
     (uVar1 = *(uint *)(param_1 + 0x2c), uVar1 == *(uint *)(param_2 + 0x2c))) {
    if (uVar1 < 3) {
      plVar2 = (long *)(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x0001082835c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x20))(plVar2,param_2 + 0x38);
      return plVar2;
    }
    if (uVar1 == 4) {
      return (long *)(ulong)(*(int *)(param_1 + 0xf8) == *(int *)(param_2 + 0xf8));
    }
  }
  return (long *)0x0;
}



/* Entry: 1082836d4; end: 108283763;  */

void FUN_1082836d4(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long alStack_68 [5];
  undefined1 uStack_40;
  undefined8 uStack_38;
  
  if (param_2 == 0) {
    *param_1 = 0;
  }
  else {
    uVar1 = 0x40;
    __Znwm();
    alStack_68[1] = 0;
    alStack_68[2] = 0;
    alStack_68[3] = 0;
    uStack_40 = 1;
    uStack_38 = 0;
    alStack_68[0] = param_2;
    alStack_68[4] = param_3;
    FUN_10826b570();
    *param_1 = uVar1;
    FUN_1082671e4(alStack_68);
  }
  return;
}



/* Entry: 108283764; end: 10828378b;  */

undefined8 * FUN_108283764(undefined8 *param_1)

{
  FUN_10828378c(*param_1);
  return param_1;
}



/* Entry: 10828378c; end: 1082837a7;  */

void FUN_10828378c(long param_1)

{
  long *plVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  long *extraout_x8;
  long unaff_x19;
  long unaff_x20;
  
  if (param_1 == 0) {
    return;
  }
  func_0x000108283964();
  plVar1 = extraout_x8 + 1;
  do {
    iVar7 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar7;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar7 != 0) {
    return;
  }
  iVar7 = 0;
  if (extraout_x8[0x10] == 0) {
    if ((*(int *)((long)extraout_x8 + 0xc) == 0) && ((int)*plVar1 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001082a0900. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*extraout_x8 + 0x18))(extraout_x8);
      return;
    }
    return;
  }
  iVar5 = (int)*(undefined8 *)(*(long *)(extraout_x8[0x10] + 0x20) + 0x78);
  func_0x0001082ade30();
  if ((iVar7 == 0) && (func_0x0001082addb4(), iVar5 != 0)) {
    func_0x0001082adf08();
  }
  if ((*(int *)(unaff_x19 + 8) == 0) && (*(int *)(unaff_x19 + 0xc) == 0)) {
    lVar6 = unaff_x20;
    FUN_1082ab4d8();
    *(int *)(unaff_x19 + 0x14) = (int)lVar6;
    lVar6 = unaff_x19;
    FUN_1082a0834();
    if ((int)lVar6 != 0) {
      func_0x0001082adf18();
      FUN_1082ab814();
      lVar6 = unaff_x20 + 0x18;
      FUN_1082abdf4();
      __ZNSt3__16chrono12steady_clock3nowEv();
      *(long *)(unaff_x19 + 0x18) = lVar6;
      func_0x0001082ae078();
      *(long *)(unaff_x20 + 0x90) = *(long *)(unaff_x20 + 0x90) + lVar6;
      sVar2 = *(short *)(*(long *)(unaff_x19 + 0x48) + 4);
      if (*(char *)(unaff_x19 + 0x90) == '\0') {
        if ((*(ulong *)(unaff_x20 + 0x88) <= *(ulong *)(unaff_x20 + 0x70)) &&
           (*(short *)(*(long *)(unaff_x19 + 0x20) + 4) != 0 || sVar2 != 0)) {
          return;
        }
      }
      else {
        if ((sVar2 != 0) && (*(char *)(unaff_x19 + 0x90) == '\x02')) {
          return;
        }
        if ((((*(byte *)(unaff_x19 + 0x91) & 1) == 0) &&
            (*(short *)(*(long *)(unaff_x19 + 0x20) + 4) != 0)) &&
           (func_0x0001082ae078(),
           (ulong)(*(long *)(unaff_x20 + 0x88) + lVar6) <= *(ulong *)(unaff_x20 + 0x70))) {
          FUN_1082a0950();
          return;
        }
      }
      FUN_1082ab9e0(&stack0xffffffffffffffd8);
    }
  }
  return;
}



/* Entry: 1082837a8; end: 1082837db;  */

long * FUN_1082837a8(long *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)*param_1;
  *param_1 = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  return param_1;
}



/* Entry: 1082837dc; end: 10828380b;  */

long * FUN_1082837dc(long *param_1)

{
  if (*param_1 != 0) {
    FUN_1082647c0(*param_1 + 8);
  }
  return param_1;
}



/* Entry: 10828380c; end: 10828382f;  */

void FUN_10828380c(undefined8 *param_1,undefined8 param_2,ulong param_3)

{
  undefined1 *puStack_20;
  code *pcStack_18;
  
  if ((int)param_2 <= (int)(*(uint *)(param_1 + 1) ^ 0x7fffffff)) {
    pcStack_18 = (code *)0x7fffffff;
    puStack_20 = (undefined1 *)0x10;
    FUN_10840fe24(&puStack_20,*(uint *)(param_1 + 1) + (int)param_2);
    return;
  }
  func_0x00010bdb1a68();
  pcStack_18 = FUN_108283830;
  puStack_20 = &stack0xfffffffffffffff0;
  FUN_1082838b8();
  if ((*(byte *)((long)param_1 + 0xc) & 1) != 0) {
    _free(*param_1);
  }
  param_3 = param_3 >> 4;
  if (0x7ffffffe < param_3) {
    param_3 = 0x7fffffff;
  }
  *param_1 = param_2;
  *(uint *)((long)param_1 + 0xc) = (int)param_3 << 1 | 1;
  return;
}



/* Entry: 108283830; end: 108283887;  */

void FUN_108283830(undefined8 *param_1,undefined8 param_2,ulong param_3)

{
  FUN_1082838b8();
  if ((*(byte *)((long)param_1 + 0xc) & 1) != 0) {
    _free(*param_1);
  }
  param_3 = param_3 >> 4;
  if (0x7ffffffe < param_3) {
    param_3 = 0x7fffffff;
  }
  *param_1 = param_2;
  *(uint *)((long)param_1 + 0xc) = (int)param_3 << 1 | 1;
  return;
}



/* Entry: 108283888; end: 1082838b7;  */

void FUN_108283888(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = 0x7fffffff;
  uStack_20 = 0x10;
  FUN_10840fe24(&uStack_20,param_1);
  return;
}



/* Entry: 1082838b8; end: 108283917;  */

void FUN_1082838b8(long *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined4 *puVar5;
  
  lVar3 = 0;
  puVar5 = (undefined4 *)(param_2 + 8);
  for (lVar4 = 0; lVar4 < (int)param_1[1]; lVar4 = lVar4 + 1) {
    puVar1 = (undefined8 *)(*param_1 + lVar3);
    uVar2 = *puVar1;
    *puVar1 = 0;
    *(undefined8 *)(puVar5 + -2) = uVar2;
    *puVar5 = *(undefined4 *)(puVar1 + 1);
    FUN_1082837dc();
    lVar3 = lVar3 + 0x10;
    puVar5 = puVar5 + 4;
  }
  return;
}



/* Entry: 108283918; end: 10828394b;  */

void FUN_108283918(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  
  FUN_1082aedd4(&uStack_28);
  uVar1 = uStack_28;
  uStack_28 = 0;
  *param_1 = uVar1;
  func_0x00010828395c();
  return;
}



/* Entry: 10828394c; end: 108283a3f;  */

void FUN_10828394c(void)

{
  return;
}



/* Entry: 108283a40; end: 108283a77;  */

uint * FUN_108283a40(uint *param_1)

{
  uint uVar1;
  code *pcVar2;
  uint *puVar3;
  
  puVar3 = param_1;
  func_0x00010828398c();
  if ((int)puVar3 != 0) {
    return (uint *)0x0;
  }
  if (*param_1 < 3) {
    param_1 = param_1 + 2;
                    /* WARNING: Could not recover jumptable at 0x0001082839dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1 + 0x18))();
    return param_1;
  }
  if ((*param_1 != 4) || ((char)param_1[1] != '\x01')) {
    return (uint *)0x0;
  }
  uVar1 = param_1[0x19];
  if (uVar1 != 0) {
    if (uVar1 - 1 < 3) {
      return (uint *)0x8;
    }
    if (uVar1 == 0) {
      return (uint *)0x0;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x108320888);
    (*pcVar2)();
  }
  if ((param_1[0x1a] & 1) != 0) {
    return (uint *)0x4;
  }
  if (param_1[0x18] < 0x24) {
    return *(uint **)(&UNK_10df13170 + (ulong)param_1[0x18] * 8);
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x108283a40);
  (*pcVar2)();
}



/* Entry: 108283a78; end: 108283adf;  */

uint * FUN_108283a78(uint *param_1)

{
  if (*param_1 < 3) {
    param_1 = param_1 + 2;
                    /* WARNING: Could not recover jumptable at 0x000108283a8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1 + 0x20))();
    return param_1;
  }
  if (((*param_1 == 4) && ((char)param_1[1] == '\x01')) && ((param_1[0x1a] & 1) != 0)) {
    return (uint *)0x8;
  }
  return (uint *)0x0;
}



/* Entry: 108283ae0; end: 108285feb;  */

/* WARNING: Heritage AFTER dead removal. Example location: d0 : 0x000108284bbc */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_108283ae0(mach_header *param_1,undefined8 param_2,float param_3,undefined8 param_4,
                  mach_header *param_5,undefined8 param_6,undefined8 param_7,mach_header *param_8,
                  long *param_9,undefined1 *param_10)

{
  dword dVar1;
  dword dVar2;
  dword dVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 auVar6 [16];
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  code *pcVar10;
  undefined1 auVar11 [8];
  code *pcVar12;
  mach_header *pmVar13;
  code *pcVar14;
  bool bVar15;
  char cVar16;
  char cVar17;
  bool bVar18;
  undefined1 uVar19;
  uint uVar20;
  int iVar21;
  undefined1 *puVar22;
  mach_header **ppmVar23;
  ulong uVar24;
  long *plVar25;
  long *plVar26;
  undefined1 *puVar27;
  undefined2 uVar28;
  undefined4 extraout_w8;
  int extraout_w8_00;
  int extraout_w8_01;
  int extraout_w8_02;
  int extraout_w8_03;
  int extraout_w8_04;
  undefined8 extraout_x8;
  long extraout_x8_00;
  int *extraout_x8_01;
  long *extraout_x8_02;
  code *extraout_x8_03;
  mach_header *extraout_x8_04;
  long extraout_x8_05;
  long *extraout_x8_06;
  undefined8 extraout_x8_07;
  long *extraout_x8_08;
  undefined8 extraout_x8_09;
  int iVar29;
  mach_header *extraout_x9;
  mach_header *extraout_x9_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  undefined8 *puVar30;
  undefined8 extraout_x10;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  int extraout_w11_02;
  int extraout_w12;
  int extraout_w12_00;
  long lVar31;
  mach_header *pmVar32;
  uint uVar33;
  mach_header *unaff_x20;
  long unaff_x21;
  long *unaff_x23;
  long lVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  mach_header *pmVar37;
  undefined1 in_b0;
  undefined1 uVar38;
  undefined1 uVar39;
  undefined1 uVar40;
  undefined1 in_register_00005001;
  undefined1 uVar41;
  undefined1 uVar42;
  undefined1 uVar43;
  undefined1 in_register_00005002;
  undefined1 uVar44;
  undefined1 uVar45;
  undefined1 uVar46;
  undefined1 in_register_00005003;
  undefined1 uVar47;
  undefined1 uVar48;
  undefined1 uVar49;
  undefined1 in_register_00005004;
  undefined1 uVar50;
  undefined1 uVar51;
  undefined1 uVar52;
  undefined1 in_register_00005005;
  undefined1 uVar53;
  undefined1 uVar54;
  undefined1 uVar55;
  undefined1 in_register_00005006;
  undefined1 uVar56;
  undefined1 uVar57;
  undefined1 uVar58;
  undefined1 in_register_00005007;
  undefined1 uVar59;
  undefined1 uVar60;
  undefined1 uVar61;
  undefined1 uVar62;
  undefined1 uVar63;
  undefined1 uVar64;
  undefined1 uVar65;
  undefined1 uVar66;
  undefined1 uVar67;
  undefined1 uVar68;
  undefined1 uVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float extraout_s2;
  undefined1 auVar74 [16];
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  mach_header *pmStack_480;
  undefined1 auStack_478 [8];
  undefined8 uStack_470;
  undefined8 uStack_468;
  long lStack_460;
  long lStack_458;
  long lStack_450;
  long lStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  mach_header *pmStack_420;
  undefined8 uStack_418;
  int iStack_410;
  byte bStack_401;
  undefined1 auStack_400 [16];
  float fStack_3f0;
  float fStack_3ec;
  uint uStack_3e8;
  uint uStack_3e4;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  undefined4 uStack_3d8;
  undefined4 uStack_3d4;
  uint uStack_3d0;
  undefined1 auStack_3c0 [16];
  long *aplStack_3b0 [3];
  mach_header *pmStack_398;
  undefined *puStack_390;
  undefined1 auStack_388 [8];
  code *apcStack_380 [2];
  undefined1 auStack_370 [16];
  mach_header *pmStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  mach_header *pmStack_340;
  mach_header *pmStack_338;
  undefined1 auStack_330 [8];
  undefined8 uStack_328;
  undefined1 auStack_320 [8];
  undefined8 uStack_318;
  undefined1 auStack_310 [24];
  long *plStack_2f8;
  mach_header *pmStack_2f0;
  undefined8 uStack_2e8;
  mach_header *pmStack_2e0;
  mach_header *pmStack_2d8;
  long *plStack_2d0;
  undefined1 auStack_2c8 [56];
  char cStack_290;
  undefined1 auStack_288 [160];
  byte bStack_1e8;
  undefined1 auStack_1e0 [16];
  mach_header *pmStack_1d0;
  uint uStack_1c8;
  dword dStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  int iStack_1b8;
  int iStack_1b4;
  undefined *puStack_1b0;
  undefined8 uStack_100;
  mach_header mStack_f8;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_b8;
  
  puVar27 = param_10;
  func_0x000108288cdc();
  auStack_2c8[0] = 0;
  bStack_1e8 = 0;
  puVar27 = puVar27 + 0x40;
  puVar22 = puVar27;
  uStack_b8 = extraout_x8;
  FUN_10828769c();
  if ((int)puVar22 != 0) {
    FUN_1082876e0(param_8);
    bVar18 = !NAN((float)CONCAT13(in_register_00005003,
                                  CONCAT12(in_register_00005002,CONCAT11(in_register_00005001,in_b0)
                                          )));
    bVar15 = (float)CONCAT13(in_register_00005003,
                             CONCAT12(in_register_00005002,CONCAT11(in_register_00005001,in_b0))) ==
             0.0;
    uVar19 = bVar18 && bVar15;
    if (!bVar18 || !bVar15) {
      FUN_1082d90c8(auStack_1e0,param_10,1);
      func_0x000108287848(auStack_2c8);
      param_5 = (mach_header *)auStack_1e0;
      FUN_1082d8ff0(auStack_2c8);
      bStack_1e8 = 1;
      func_0x000108288c40();
      if ((bStack_1e8 & 1) == 0) goto LAB_1082858d4;
      if (cStack_290 != '\0') {
        puVar27 = auStack_288;
        param_10 = auStack_2c8;
        goto LAB_108283b9c;
      }
    }
    goto LAB_108285884;
  }
LAB_108283b9c:
  plVar26 = param_9;
  (**(code **)(*param_9 + 0x48))();
  fVar81 = SUB84(param_1,0);
  uVar38 = in_b0;
  uVar41 = in_register_00005001;
  uVar44 = in_register_00005002;
  uVar47 = in_register_00005003;
  if (((int)plVar26 == 0) && ((int)param_9[2] == 0)) {
    puVar22 = puVar27;
    FUN_10828786c();
    fVar81 = SUB84(param_1,0);
    uVar38 = in_b0;
    uVar41 = in_register_00005001;
    uVar44 = in_register_00005002;
    uVar47 = in_register_00005003;
    if ((int)puVar22 == 0) goto LAB_108284c6c;
    func_0x000108288e00(param_9);
    fVar77 = (float)CONCAT13(in_register_00005003,
                             CONCAT12(in_register_00005002,CONCAT11(in_register_00005001,in_b0)));
    pmVar32 = (mach_header *)(ulong)(uint)fVar77;
    uVar19 = fVar77 == 0.03;
    if (fVar77 <= 0.03) {
      func_0x000108288e24();
      FUN_1082c338c();
      func_0x000108288c40();
      goto LAB_108285884;
    }
    uStack_3d0 = 0;
    uVar38 = 0;
    uVar41 = 0;
    uVar44 = 0;
    uVar47 = 0;
    uStack_3e8 = 0;
    uStack_3e4 = 0;
    fStack_3f0 = 0.0;
    fStack_3ec = 0.0;
    uStack_3d8 = 0;
    uStack_3d4 = 0;
    uStack_3e0 = 0;
    uStack_3dc = 0;
    auStack_400._8_8_ = 0;
    auStack_400._0_8_ = (mach_header *)0x0;
    param_5 = (mach_header *)auStack_400;
    puVar22 = param_10;
    FUN_1082d95fc(param_10,param_5,&bStack_401);
    fVar81 = SUB84(param_1,0);
    if (((int)puVar22 == 0) || ((bStack_401 & 1) != 0)) goto LAB_108284c6c;
    iStack_410 = 0;
    uVar38 = 0;
    uVar41 = 0;
    uVar44 = 0;
    uVar47 = 0;
    uStack_428 = 0;
    uStack_430 = 0;
    uStack_418 = 0;
    pmStack_420 = (mach_header *)0x0;
    uStack_438 = 0;
    uStack_440 = (mach_header *)0x0;
    ppmVar23 = (mach_header **)auStack_400;
    param_5 = param_8;
    FUN_1083857ec(ppmVar23,param_8,&uStack_440);
    uVar33 = 0;
    if (iStack_410 == 2) {
      uVar33 = (uint)ppmVar23;
    }
    bVar15 = uVar33 != 0;
    bVar18 = uVar33 == 1;
    if (bVar18) {
      param_1 = (mach_header *)(ulong)(uint)uStack_430._4_4_;
      fVar81 = ABS((float)uStack_430 - uStack_430._4_4_);
      uVar38 = SUB41(fVar81,0);
      uVar41 = (undefined1)((uint)fVar81 >> 8);
      uVar44 = (undefined1)((uint)fVar81 >> 0x10);
      uVar47 = (undefined1)((uint)fVar81 >> 0x18);
      func_0x000108288cb0(0x39800000);
      uVar33 = (uint)(!bVar15 || bVar18);
    }
    else {
      uVar33 = 0;
    }
    if (uStack_3d0 == 1) {
      uVar38 = 0;
      uVar41 = 0;
      uVar44 = 0x80;
      uVar47 = 0x39;
      pmVar37 = param_8;
      func_0x000108363d40();
      uVar20 = (uint)pmVar37;
    }
    else {
      uVar20 = 0;
    }
    bVar18 = 1 < uStack_3d0;
    cVar16 = SBORROW4(uStack_3d0,2);
    cVar17 = (int)(uStack_3d0 - 2) < 0;
    uVar19 = uStack_3d0 == 2;
    if ((bool)uVar19) {
      param_1 = (mach_header *)(ulong)(uint)fStack_3ec;
      fVar81 = ABS(fStack_3f0 - fStack_3ec);
      uVar38 = SUB41(fVar81,0);
      uVar41 = (undefined1)((uint)fVar81 >> 8);
      uVar44 = (undefined1)((uint)fVar81 >> 0x10);
      uVar47 = (undefined1)((uint)fVar81 >> 0x18);
      func_0x000108288cb0(0x39800000);
      if (bVar18 && !(bool)uVar19) goto LAB_108283cd8;
      uVar38 = (undefined1)extraout_w8;
      uVar41 = (undefined1)((uint)extraout_w8 >> 8);
      uVar44 = (undefined1)((uint)extraout_w8 >> 0x10);
      uVar47 = (undefined1)((uint)extraout_w8 >> 0x18);
      pmVar37 = param_8;
      func_0x000108363c84();
      if ((((uint)pmVar37 | uVar20 | uVar33) & 1) == 0) goto LAB_108283e14;
LAB_108283ce0:
      if (uVar20 == 0) {
        auVar74 = NEON_fmov(0x3fe0000000000000,8);
        pmVar32 = uStack_440;
        uVar35 = uStack_438;
        if (uVar33 == 0) {
          dVar8 = ((double)(float)auStack_400._0_8_ + (double)(float)auStack_400._8_8_) *
                  auVar74._0_8_;
          dVar9 = ((double)SUB84(auStack_400._0_8_,4) + (double)SUB84(auStack_400._8_8_,4)) *
                  auVar74._8_8_;
          auVar6[8] = SUB81(dVar9,0);
          auVar6._0_8_ = dVar8;
          auVar6[9] = (char)((ulong)dVar9 >> 8);
          auVar6[10] = (char)((ulong)dVar9 >> 0x10);
          auVar6[0xb] = (char)((ulong)dVar9 >> 0x18);
          auVar6[0xc] = (char)((ulong)dVar9 >> 0x20);
          auVar6[0xd] = (char)((ulong)dVar9 >> 0x28);
          auVar6[0xe] = (char)((ulong)dVar9 >> 0x30);
          auVar6[0xf] = (char)((ulong)dVar9 >> 0x38);
          fVar81 = (float)auVar6._8_8_;
          in_register_00005004 = SUB41(fVar81,0);
          in_register_00005005 = (undefined1)((uint)fVar81 >> 8);
          in_register_00005006 = (undefined1)((uint)fVar81 >> 0x10);
          in_register_00005007 = (undefined1)((uint)fVar81 >> 0x18);
          auStack_1e0._0_8_ =
               CONCAT17(in_register_00005007,
                        CONCAT16(in_register_00005006,
                                 CONCAT15(in_register_00005005,
                                          CONCAT14(in_register_00005004,(float)dVar8))));
          param_5 = (mach_header *)auStack_1e0;
          func_0x00010827a0cc(param_8,param_5,1);
          fVar81 = ((float)auStack_400._8_4_ - (float)auStack_400._0_4_) * 0.5;
          uVar19 = 0;
          uVar38 = 0;
          uVar41 = 0;
          uVar44 = 0;
          FUN_108287898(param_8);
          uStack_100 = (undefined **)
                       CONCAT44(fVar81,CONCAT13(uVar44,CONCAT12(uVar41,CONCAT11(uVar38,uVar19))));
          FUN_1082878c8((mach_header *)&uStack_100);
          uVar28 = CONCAT11(uVar38,uVar19);
          pmVar32 = (mach_header *)
                    CONCAT44(SUB84(auStack_1e0._0_8_,4) -
                             (float)CONCAT13(uVar44,CONCAT12(uVar41,uVar28)),
                             (float)auStack_1e0._0_8_ -
                             (float)CONCAT13(uVar44,CONCAT12(uVar41,uVar28)));
          uVar35 = CONCAT44((float)CONCAT13(uVar44,CONCAT12(uVar41,uVar28)) +
                            SUB84(auStack_1e0._0_8_,4),
                            (float)CONCAT13(uVar44,CONCAT12(uVar41,uVar28)) +
                            (float)auStack_1e0._0_8_);
        }
        fVar78 = ((float)uVar35 - SUB84(pmVar32,0)) * 0.5;
        fVar81 = fVar78 - fVar78;
        uVar38 = SUB41(fVar81,0);
        uVar41 = (undefined1)((uint)fVar81 >> 8);
        uVar44 = (undefined1)((uint)fVar81 >> 0x10);
        uVar47 = (undefined1)((uint)fVar81 >> 0x18);
        param_1 = (mach_header *)0x39800000;
        uVar19 = 0;
        bVar18 = true;
        if (0.00024414062 <= fVar78) {
          uVar19 = 0;
          bVar18 = true;
          if (!NAN(fVar81)) {
            uVar19 = 1;
            bVar18 = false;
          }
        }
        if (!bVar18) {
          uVar36 = *(undefined8 *)(unaff_x23[2] + 200);
          fVar81 = 8.0;
          if (fVar77 / fVar78 <= 8.0) {
            fVar81 = fVar77 / fVar78;
          }
          uVar19 = fVar81 == 0.1;
          fVar79 = (float)NEON_fminnm(fVar81 * 65536.0,0x4effffff);
          uVar38 = SUB41(fVar79,0);
          uVar41 = (undefined1)((uint)fVar79 >> 8);
          uVar44 = (undefined1)((uint)fVar79 >> 0x10);
          uVar47 = (undefined1)((uint)fVar79 >> 0x18);
          if (fVar79 <= -2.1474835e+09) {
            uVar38 = 0xff;
            uVar41 = 0xff;
            uVar44 = 0xff;
            uVar47 = 0xce;
          }
          uVar33 = (int)(float)CONCAT13(uVar47,CONCAT12(uVar44,CONCAT11(uVar41,uVar38))) &
                   0xffffff00;
          fVar79 = fVar78 * ((float)(int)uVar33 / 65536.0);
          param_3 = fVar78 + fVar77 * -3.0;
          fVar80 = fVar78 + fVar79 * 3.0;
          fVar70 = 0.0;
          if (fVar81 <= 0.1) {
            uVar33 = 0;
            fVar79 = fVar77;
            fVar80 = fVar77 * 6.0;
            fVar70 = param_3;
          }
          uVar38 = 0;
          uVar41 = 0;
          uVar44 = 0;
          uVar47 = 0x44;
          param_1 = (mach_header *)0x3f800000;
          func_0x00010815f6c0(auStack_370);
          if ((bRam000000011372a500 & 1) == 0) {
            iVar29 = 0x1372a500;
            ___cxa_guard_acquire();
            if (iVar29 != 0) {
              func_0x000108320d60();
              iRam000000011372a4cc = iVar29;
              func_0x000108288b78(&bRam000000011372a500);
            }
          }
          FUN_10827a1fc(auStack_1e0);
          func_0x000108288c90();
          puStack_1b0 = &UNK_10f481786;
          *(uint *)(*(long *)pmStack_340 + 8) = uVar33;
          FUN_10827a344(&pmStack_340);
          func_0x000108288e10(auStack_310);
          uVar7 = auStack_310._0_8_;
          if ((mach_header *)auStack_310._0_8_ == (mach_header *)0x0) {
            puStack_d0 = (undefined *)0x0;
            uVar38 = 0;
            uVar41 = 0;
            uVar44 = 0;
            uVar47 = 0;
            mStack_f8._16_5_ = 0;
            mStack_f8.sizeofcmds._1_3_ = 0;
            mStack_f8._8_5_ = 0;
            mStack_f8.filetype._1_3_ = 0;
            uStack_d8 = 0;
            mStack_f8.flags = 0;
            mStack_f8.reserved = 0;
            mStack_f8.magic = 0;
            mStack_f8.cputype = 0;
            uStack_100 = (undefined **)0x0;
            uVar19 = fVar81 == 0.1;
            if (0.1 <= fVar81 && !(bool)uVar19) {
              fVar79 = (512.0 / fVar80) * fVar79;
              uVar38 = SUB41(fVar79,0);
              uVar41 = (undefined1)((uint)fVar79 >> 8);
              uVar44 = (undefined1)((uint)fVar79 >> 0x10);
              uVar47 = (undefined1)((uint)fVar79 >> 0x18);
              param_1 = (mach_header *)(ulong)(uint)(fVar78 * (512.0 / fVar80));
              FUN_10831fe84(auStack_3c0,0x200);
              func_0x000108288d90();
            }
            else {
              FUN_1083201c4(auStack_3c0,0x200);
              func_0x000108288d90();
            }
            FUN_108330548(auStack_3c0);
            param_5 = (mach_header *)&uStack_100;
            func_0x000108288a90(auStack_3c0);
            func_0x000108288d5c();
            FUN_108287d44(auStack_3c0._0_8_);
            if ((mach_header *)auStack_310._0_8_ == (mach_header *)0x0) {
              apcStack_380[0] = (code *)0x0;
            }
            else {
              param_5 = (mach_header *)auStack_1e0;
              FUN_1082b4bb8(auStack_3c0,uVar36,param_5,auStack_310);
              func_0x000108288d5c();
              FUN_108287d44(auStack_3c0._0_8_);
              auStack_330 = (undefined1  [8])auStack_310._0_8_;
              auStack_310._0_8_ = (mach_header *)0x0;
              uStack_328._0_6_ = CONCAT24(auStack_310._12_2_,auStack_310._8_4_);
              func_0x000108288a44(apcStack_380,auStack_330);
              func_0x000108288d4c();
            }
            func_0x000108288c88();
          }
          else {
            auStack_310._0_8_ = (mach_header *)0x0;
            auStack_320 = (undefined1  [8])uVar7;
            uStack_318._0_6_ = CONCAT24(auStack_310._12_2_,auStack_310._8_4_);
            func_0x000108288a44(apcStack_380,auStack_320);
            func_0x000108288ca0();
          }
          func_0x000108288b94();
          func_0x000108288dbc();
          pcVar14 = (code *)auStack_1e0;
          func_0x00010827a384();
          if (apcStack_380[0] != (code *)0x0) {
            if ((bRam000000011372a4f8 & 1) == 0) {
              pcVar14 = (code *)&bRam000000011372a4f8;
              ___cxa_guard_acquire();
              if ((int)pcVar14 != 0) {
                func_0x000108288d08();
                pcVar14 = FUN_108394278;
                func_0x000108288e1c(FUN_108394278,&UNK_10f48167d);
                pcRam000000011372a4f0 = pcVar14;
                func_0x000108288b78(&bRam000000011372a4f8);
              }
            }
            pcVar12 = apcStack_380[0];
            pcVar10 = pcRam000000011372a4f0;
            apcStack_380[0] = (code *)0x0;
            func_0x000108288e50();
            func_0x000108288c60();
            if (pcVar10 != (code *)0x0) {
              do {
                func_0x000108288a64();
              } while (extraout_w10_00 != 0);
            }
            uStack_100 = (undefined **)pcVar10;
            func_0x000108288b24();
            func_0x000108288c1c();
            auStack_1e0._0_8_ = pcVar12;
            func_0x000108288b14();
            dVar8 = ((double)SUB84(pmVar32,0) + (double)(float)uVar35) * auVar74._0_8_;
            dVar9 = ((double)(float)((ulong)pmVar32 >> 0x20) +
                    (double)(float)((ulong)uVar35 >> 0x20)) * auVar74._8_8_;
            param_1 = (mach_header *)0x3f800000;
            auVar74[8] = SUB81(dVar9,0);
            auVar74._0_8_ = dVar8;
            auVar74[9] = (char)((ulong)dVar9 >> 8);
            auVar74[10] = (char)((ulong)dVar9 >> 0x10);
            auVar74[0xb] = (char)((ulong)dVar9 >> 0x18);
            auVar74[0xc] = (char)((ulong)dVar9 >> 0x20);
            auVar74[0xd] = (char)((ulong)dVar9 >> 0x28);
            auVar74[0xe] = (char)((ulong)dVar9 >> 0x30);
            auVar74[0xf] = (char)((ulong)dVar9 >> 0x38);
            if ((code *)auStack_1e0._0_8_ != (code *)0x0) {
              func_0x000108288a38();
            }
            *(ulong *)(pcVar14 + 0x68) = CONCAT44((float)auVar74._8_8_,(float)dVar8);
            uVar38 = SUB41(fVar70,0);
            uVar41 = (undefined1)((uint)fVar70 >> 8);
            uVar44 = (undefined1)((uint)fVar70 >> 0x10);
            uVar47 = (undefined1)((uint)fVar70 >> 0x18);
            *(float *)(pcVar14 + 0x70) = fVar70;
            *(float *)(pcVar14 + 0x74) = 1.0 / fVar80;
            uStack_100 = (undefined **)0x0;
            puVar22 = auStack_1e0;
            param_5 = (mach_header *)&uStack_100;
            auStack_1e0._0_8_ = pcVar14;
            FUN_108287a24(&uStack_470);
            func_0x000108288e78();
            if (puVar22 != (undefined1 *)0x0) {
              func_0x000108288a38();
            }
LAB_108284644:
            uVar35 = auStack_1e0._0_8_;
            auStack_1e0._0_8_ = (mach_header *)0x0;
            if ((code *)uVar35 != (code *)0x0) {
              func_0x000108288a38();
            }
            pcVar14 = apcStack_380[0];
            apcStack_380[0] = (code *)0x0;
            lVar34 = uStack_470;
            if (pcVar14 != (code *)0x0) {
              func_0x000108288a38();
              lVar34 = uStack_470;
            }
            goto LAB_108284670;
          }
        }
LAB_108284668:
        lVar34 = 0;
        uStack_470 = lVar34;
      }
      else {
        lVar34 = *(long *)(*(long *)(unaff_x23[2] + 0xb8) + 0x10);
        auStack_370._8_4_ = 0;
        auStack_370._12_4_ = 0;
        auStack_370._0_8_ = (mach_header *)0x3f800000;
        uStack_358._0_4_ = 0;
        uStack_358._4_4_ = 0;
        pmStack_360 = (mach_header *)0x3f800000;
        uStack_350 = 0x103f800000;
        auStack_330 = (undefined1  [8])0x0;
        uStack_328 = (mach_header *)0x0;
        pmVar32 = param_8;
        FUN_10827a0d8();
        if ((int)pmVar32 == 0) {
          uVar38 = 0;
          uVar41 = 0;
          uVar44 = 0x80;
          uVar47 = 0x3f;
          func_0x000108288eb0();
          param_5 = (mach_header *)&uStack_100;
          pmVar32 = param_8;
          FUN_108365804(param_8,param_5,auStack_1e0);
          if ((int)pmVar32 != 0) {
            pmVar32 = (mach_header *)auStack_1e0;
            param_5 = (mach_header *)auStack_370;
            FUN_10818cfd0();
            if ((int)pmVar32 != 0) {
              fVar81 = (float)((ulong)uStack_100 >> 0x20);
              fVar78 = fVar81 * SUB84(auStack_400._0_8_,4);
              in_register_00005004 = SUB41(fVar78,0);
              in_register_00005005 = (undefined1)((uint)fVar78 >> 8);
              in_register_00005006 = (undefined1)((uint)fVar78 >> 0x10);
              in_register_00005007 = (undefined1)((uint)fVar78 >> 0x18);
              fVar81 = fVar81 * SUB84(auStack_400._8_8_,4);
              uStack_328 = (mach_header *)
                           CONCAT17((char)((uint)fVar81 >> 0x18),
                                    CONCAT16((char)((uint)fVar81 >> 0x10),
                                             CONCAT15((char)((uint)fVar81 >> 8),
                                                      CONCAT14(SUB41(fVar81,0),
                                                               SUB84(uStack_100,0) *
                                                               (float)auStack_400._8_8_))));
              auStack_330 = (undefined1  [8])
                            CONCAT17(in_register_00005007,
                                     CONCAT16(in_register_00005006,
                                              CONCAT15(in_register_00005005,
                                                       CONCAT14(in_register_00005004,
                                                                SUB84(uStack_100,0) *
                                                                (float)auStack_400._0_8_))));
              param_1 = (mach_header *)auStack_400._0_8_;
              goto LAB_108283d40;
            }
          }
        }
        else {
          auStack_370._8_4_ = (dword)uRam0000000113254e28;
          auStack_370._12_4_ = uRam0000000113254e28._4_4_;
          auStack_370._0_8_ = pmRam0000000113254e20;
          uStack_358._0_4_ = (dword)uRam0000000113254e38;
          uStack_358._4_4_ = uRam0000000113254e38._4_4_;
          pmStack_360 = pmRam0000000113254e30;
          uStack_350 = uRam0000000113254e40;
          param_5 = (mach_header *)auStack_330;
          param_1 = pmRam0000000113254e30;
          func_0x000108288e30();
LAB_108283d40:
          if ((*(byte *)(lVar34 + 0x11) & 1) != 0) {
LAB_108283d48:
            uVar35 = *(undefined8 *)(unaff_x23[2] + 200);
            FUN_10831fe3c();
            if ((bRam000000011372a4e8 & 1) == 0) {
              iVar29 = 0x1372a4e8;
              ___cxa_guard_acquire();
              if (iVar29 != 0) {
                func_0x000108320d60();
                iRam000000011372a4c8 = iVar29;
                func_0x000108288b78(&bRam000000011372a4e8);
              }
            }
            FUN_10827a1fc(auStack_1e0);
            func_0x000108288c90();
            puStack_1b0 = &UNK_10f4815fe;
            *(int *)(*(long *)pmStack_340 + 8) = (int)pmVar32;
            FUN_10827a344(&pmStack_340);
            fVar81 = (float)((ulong)pmVar32 & 0xffffffff) / (fVar77 * 6.0);
            uVar38 = SUB41(fVar81,0);
            uVar41 = (undefined1)((uint)fVar81 >> 8);
            uVar44 = (undefined1)((uint)fVar81 >> 0x10);
            uVar47 = (undefined1)((uint)fVar81 >> 0x18);
            param_1 = (mach_header *)0x3f800000;
            func_0x00010815f6c0(auStack_3c0);
            func_0x000108288e10(auStack_320);
            auVar11 = auStack_320;
            if (auStack_320 == (undefined1  [8])0x0) {
              FUN_10831fcfc((mach_header *)&uStack_100,pmVar32);
              uVar19 = (int)uStack_d8 < 1 || uStack_d8._4_4_ == 0;
              if ((int)uStack_d8 < 1 || uStack_d8._4_4_ < 1) {
LAB_108284404:
                apcStack_380[0] = (code *)0x0;
              }
              else {
                param_5 = (mach_header *)&uStack_100;
                func_0x000108288a90(auStack_310);
                func_0x000108288dc4();
                func_0x000108288b94();
                if (auStack_320 == (undefined1  [8])0x0) goto LAB_108284404;
                param_5 = (mach_header *)auStack_1e0;
                FUN_1082b4bb8(auStack_310,uVar35,param_5,auStack_320);
                func_0x000108288dc4();
                func_0x000108288b94();
                auStack_310._0_8_ = auStack_320;
                auStack_320 = (undefined1  [8])0x0;
                auStack_310._8_4_ = (dword)uStack_318;
                auStack_310._12_2_ = uStack_318._4_2_;
                func_0x000108288c08(apcStack_380,auStack_310);
                func_0x000108288b94();
              }
              func_0x000108288c88();
            }
            else {
              auStack_320 = (undefined1  [8])0x0;
              uStack_100 = (undefined **)auVar11;
              mStack_f8._0_6_ = SUB86(uStack_318,0);
              func_0x000108288c08(apcStack_380,(mach_header *)&uStack_100);
              FUN_108287d44(uStack_100);
            }
            func_0x000108288ca0();
            func_0x000108288dbc();
            pcVar14 = (code *)auStack_1e0;
            func_0x00010827a384();
            if (apcStack_380[0] != (code *)0x0) {
              fVar81 = fVar77 * 6.0 * 0.5;
              uVar38 = SUB41(fVar81,0);
              uVar41 = (undefined1)((uint)fVar81 >> 8);
              uVar44 = (undefined1)((uint)fVar81 >> 0x10);
              uVar47 = (undefined1)((uint)fVar81 >> 0x18);
              fVar78 = fVar81 + (float)auStack_330._0_4_;
              fVar79 = fVar81 + (float)auStack_330._4_4_;
              param_1 = (mach_header *)((ulong)uStack_328 & 0xffffffff);
              fVar80 = (float)uStack_328 - fVar81;
              fVar81 = uStack_328._4_4_ - fVar81;
              uVar19 = false;
              bVar18 = true;
              if (fVar79 <= fVar81) {
                uVar19 = false;
                bVar18 = true;
                if (!NAN(fVar78) && !NAN(fVar80)) {
                  uVar19 = fVar78 == fVar80;
                  bVar18 = fVar80 <= fVar78;
                }
              }
              bVar18 = !bVar18 || (bool)uVar19;
              if ((bRam000000011372a4e0 & 1) == 0) {
                pcVar14 = (code *)&bRam000000011372a4e0;
                ___cxa_guard_acquire();
                if ((int)pcVar14 != 0) {
                  func_0x000108288d08();
                  pcVar14 = FUN_108394278;
                  func_0x000108288e1c(FUN_108394278,&UNK_10f4813ba);
                  pmRam000000011372a4d8 = (mach_header *)pcVar14;
                  func_0x000108288b78(&bRam000000011372a4e0);
                }
              }
              pcVar10 = apcStack_380[0];
              pmVar32 = pmRam000000011372a4d8;
              apcStack_380[0] = (code *)0x0;
              func_0x000108288e50();
              func_0x000108288c60();
              if (pmVar32 != (mach_header *)0x0) {
                do {
                  func_0x000108288a64();
                } while (extraout_w10 != 0);
              }
              uStack_100 = (undefined **)pmVar32;
              func_0x000108288b24();
              func_0x000108288c1c();
              uVar33 = ((mach_header *)((long)pcVar14 + 0x40))->ncmds;
              auStack_1e0._0_8_ = pcVar10;
              func_0x000108288b14();
              if ((code *)auStack_1e0._0_8_ != (code *)0x0) {
                func_0x000108288a38();
              }
              ((mach_header *)((long)pcVar14 + 0x60))->cpusubtype = (dword)fVar78;
              ((mach_header *)((long)pcVar14 + 0x60))->filetype = (dword)fVar79;
              ((mach_header *)((long)pcVar14 + 0x60))->ncmds = (dword)fVar80;
              ((mach_header *)((long)pcVar14 + 0x60))->sizeofcmds = (dword)fVar81;
              *(undefined1 *)
               ((long)&((mach_header *)((long)pcVar14 + 0x60))->cpusubtype + (ulong)uVar33 + 1) = 1;
              ((mach_header *)((long)pcVar14 + 0x60))->flags = (uint)bVar18;
              auStack_3c0._0_8_ = 0;
              param_5 = (mach_header *)auStack_3c0;
              uStack_100 = (undefined **)pcVar14;
              FUN_108287a24(auStack_1e0,(mach_header *)&uStack_100);
              pcVar14 = (code *)auStack_1e0._0_8_;
              lVar34 = auStack_3c0._0_8_;
              auStack_1e0._0_8_ = (code *)0x0;
              auStack_3c0._0_4_ = 0;
              auStack_3c0._4_4_ = 0;
              if (lVar34 != 0) {
                func_0x000108288a38();
              }
              func_0x000108288e78();
              if (lVar34 != 0) {
                func_0x000108288a38();
              }
              uVar24 = 0;
              func_0x0001081420b8();
              if ((uVar24 & 1) == 0) {
                auStack_310._0_8_ = pcVar14;
                param_5 = (mach_header *)auStack_310;
                FUN_1082c8ba8(auStack_1e0,auStack_370);
                pcVar14 = (code *)auStack_1e0._0_8_;
                uVar35 = auStack_310._0_8_;
                auStack_310._0_8_ = (mach_header *)0x0;
                if ((code *)uVar35 != (code *)0x0) {
                  func_0x000108288a38();
                }
              }
              auStack_1e0._0_8_ = pcVar14;
              FUN_108297448(&uStack_470,auStack_1e0);
              goto LAB_108284644;
            }
            goto LAB_108284668;
          }
          fVar81 = ABS((float)auStack_330._0_4_);
          uVar38 = SUB41(fVar81,0);
          uVar41 = (undefined1)((uint)fVar81 >> 8);
          uVar44 = (undefined1)((uint)fVar81 >> 0x10);
          uVar47 = (undefined1)((uint)fVar81 >> 0x18);
          func_0x000108288cb0(0x467a0000);
          if ((bool)uVar19 || cVar17 != cVar16) {
            fVar81 = ABS((float)auStack_330._4_4_);
            uVar38 = SUB41(fVar81,0);
            uVar41 = (undefined1)((uint)fVar81 >> 8);
            uVar44 = (undefined1)((uint)fVar81 >> 0x10);
            uVar47 = (undefined1)((uint)fVar81 >> 0x18);
            func_0x000108288cb0();
            if ((bool)uVar19 || cVar17 != cVar16) {
              fVar81 = ABS((float)uStack_328);
              uVar38 = SUB41(fVar81,0);
              uVar41 = (undefined1)((uint)fVar81 >> 8);
              uVar44 = (undefined1)((uint)fVar81 >> 0x10);
              uVar47 = (undefined1)((uint)fVar81 >> 0x18);
              func_0x000108288cb0();
              if ((bool)uVar19 || cVar17 != cVar16) {
                fVar81 = ABS(uStack_328._4_4_);
                uVar38 = SUB41(fVar81,0);
                uVar41 = (undefined1)((uint)fVar81 >> 8);
                uVar44 = (undefined1)((uint)fVar81 >> 0x10);
                uVar47 = (undefined1)((uint)fVar81 >> 0x18);
                func_0x000108288cb0();
                if ((bool)uVar19 || cVar17 != cVar16) goto LAB_108283d48;
              }
            }
          }
        }
        lVar34 = 0;
      }
LAB_108284670:
      if (lVar34 == 0) {
LAB_108284c68:
        fVar81 = SUB84(param_1,0);
        goto LAB_108284c6c;
      }
      uVar38 = (undefined1)auStack_400._0_8_;
      uVar41 = SUB81(auStack_400._0_8_,1);
      uVar44 = SUB81(auStack_400._0_8_,2);
      uVar47 = SUB81(auStack_400._0_8_,3);
      auStack_1e0._8_8_ = auStack_400._8_8_;
      auStack_1e0._0_8_ = auStack_400._0_8_;
      pmVar32 = param_8;
      FUN_1082878d0();
      if ((int)pmVar32 == 0) {
        param_5 = (mach_header *)&uStack_100;
        pmVar32 = param_8;
        FUN_108365804(param_8,param_5,0);
        if (((ulong)pmVar32 & 1) == 0) {
LAB_108284c60:
          func_0x000108288bcc();
          (*extraout_x8_03)();
          goto LAB_108284c68;
        }
        fVar81 = uStack_100._4_4_;
      }
      else {
        fVar81 = ABS((float)param_8->ncmds);
      }
      func_0x00010816882c(CONCAT17(in_register_00005007,
                                   CONCAT16(in_register_00005006,
                                            CONCAT15(in_register_00005005,
                                                     CONCAT14(in_register_00005004,
                                                              CONCAT13(uVar47,CONCAT12(uVar44,
                                                  CONCAT11(uVar41,uVar38))))))),
                          (fVar77 * 3.0) / fVar81,auStack_1e0);
      lStack_448 = lVar34;
      func_0x000108288e08();
      lVar34 = lStack_448;
      lStack_448 = 0;
      if (lVar34 != 0) {
        func_0x000108288a38();
      }
      func_0x000108288b4c();
    }
    else {
LAB_108283cd8:
      if ((uVar20 & 1) != 0 || uVar33 != 0) goto LAB_108283ce0;
LAB_108283e14:
      pmVar37 = param_8;
      FUN_1082878d0();
      if (((uint)pmVar37 & (uint)ppmVar23) != 1) goto LAB_108284c68;
      uVar38 = 0;
      uVar41 = 0;
      uVar44 = 0x80;
      uVar47 = 0x39;
      iVar29 = (int)&uStack_440;
      func_0x000108385714();
      if ((iVar29 == 0) || (iStack_410 != 3)) goto LAB_108284c68;
      uVar38 = (undefined1)uStack_430;
      uVar41 = (undefined1)((ulong)uStack_430 >> 8);
      uVar44 = (undefined1)((ulong)uStack_430 >> 0x10);
      uVar47 = (undefined1)((ulong)uStack_430 >> 0x18);
      fVar81 = (float)uStack_430;
      param_1 = (mach_header *)(ulong)(uint)ABS(fVar81 - uStack_430._4_4_);
      if (0.00024414062 < ABS(fVar81 - uStack_430._4_4_)) goto LAB_108284c68;
      puStack_390 = (undefined *)((ulong)puStack_390 & 0xffffffff00000000);
      aplStack_3b0[1] = (long *)0x0;
      aplStack_3b0[0] = (long *)0x0;
      pmStack_398 = (mach_header *)0x0;
      aplStack_3b0[2] = (long *)0x0;
      auStack_3c0._8_4_ = 0;
      auStack_3c0._12_4_ = 0;
      auStack_3c0._0_4_ = 0;
      auStack_3c0._4_4_ = 0;
      fVar78 = (float)NEON_fminnm((int)(fVar77 + -0.16666667),0x4effffff);
      if (fVar78 <= -2.1474835e+09) {
        fVar78 = -2.1474835e+09;
      }
      iVar29 = (int)fVar78;
      fVar79 = (float)uStack_418;
      fVar78 = fVar79;
      if (fVar79 <= fVar81) {
        fVar78 = fVar81;
      }
      param_3 = (float)NEON_fminnm((int)fVar78,0x4effffff);
      if (param_3 <= -2.1474835e+09) {
        param_3 = -2.1474835e+09;
      }
      fVar78 = uStack_428._4_4_;
      if (uStack_428._4_4_ <= uStack_430._4_4_) {
        fVar78 = uStack_430._4_4_;
      }
      fVar73 = (float)uStack_428;
      fVar70 = SUB84(pmStack_420,0);
      fVar80 = fVar70;
      if (fVar70 <= fVar73) {
        fVar80 = fVar73;
      }
      fVar80 = (float)NEON_fminnm((int)fVar80,0x4effffff);
      if (fVar80 <= -2.1474835e+09) {
        fVar80 = -2.1474835e+09;
      }
      fVar71 = (float)((ulong)pmStack_420 >> 0x20);
      fVar72 = (float)((ulong)uStack_418 >> 0x20);
      fVar75 = fVar71;
      if (fVar71 <= fVar72) {
        fVar75 = fVar72;
      }
      fVar76 = (float)(uint)(iVar29 * 3);
      param_1 = pmStack_420;
      if (((float)uStack_438 - (float)(int)fVar80) - fVar76 <=
          (float)uStack_440 + (float)(int)param_3 + fVar76) goto LAB_108284c68;
      fVar78 = (float)NEON_fminnm((int)fVar78,0x4effffff);
      if (fVar78 <= -2.1474835e+09) {
        fVar78 = -2.1474835e+09;
      }
      fVar75 = (float)NEON_fminnm((int)fVar75,0x4effffff);
      if (fVar75 <= -2.1474835e+09) {
        fVar75 = -2.1474835e+09;
      }
      if ((uStack_438._4_4_ - (float)(int)fVar75) - fVar76 <=
          uStack_440._4_4_ + (float)(int)fVar78 + fVar76) goto LAB_108284c68;
      uVar33 = iVar29 * 6 | 1;
      iVar21 = uVar33 + (int)fVar80 + (int)param_3;
      iVar5 = uVar33 + (int)fVar78 + (int)fVar75;
      uStack_2e8 = (mach_header *)CONCAT44(iVar5 + iVar29 * 6,iVar21 + iVar29 * 6);
      param_3 = fVar76 + (float)iVar21;
      uStack_100 = (undefined **)CONCAT44(fVar76,fVar76);
      mStack_f8.cputype = (dword)(fVar76 + (float)iVar5);
      mStack_f8.magic = (dword)param_3;
      iVar21 = (int)uStack_430._4_4_;
      uVar50 = (undefined1)iVar21;
      uVar53 = (undefined1)((uint)iVar21 >> 8);
      uVar56 = (undefined1)((uint)iVar21 >> 0x10);
      uVar59 = (undefined1)((uint)iVar21 >> 0x18);
      iVar21 = (int)uStack_428._4_4_;
      pmStack_1d0 = (mach_header *)CONCAT44((int)fVar71,(int)fVar70);
      uStack_1c8 = (uint)fVar79;
      dStack_1c4 = (dword)fVar72;
      auStack_1e0[0xc] = (char)iVar21;
      auStack_1e0._8_4_ = (int)fVar73;
      auStack_1e0[0xd] = (char)((uint)iVar21 >> 8);
      auStack_1e0[0xe] = (char)((uint)iVar21 >> 0x10);
      auStack_1e0[0xf] = (char)((uint)iVar21 >> 0x18);
      auStack_1e0[4] = uVar50;
      auStack_1e0._0_4_ = (int)fVar81;
      auStack_1e0[5] = uVar53;
      auStack_1e0[6] = uVar56;
      auStack_1e0[7] = uVar59;
      FUN_108384f00(auStack_3c0,(mach_header *)&uStack_100,auStack_1e0);
      FUN_10827a1fc((mach_header *)&uStack_100);
      if ((bRam000000011372a518 & 1) == 0) {
        iVar21 = 0x1372a518;
        ___cxa_guard_acquire();
        if (iVar21 != 0) {
          func_0x000108320d60();
          iRam000000011372a4d0 = iVar21;
          func_0x000108288b78(&bRam000000011372a518);
        }
      }
      param_5 = (mach_header *)&uStack_100;
      FUN_10827a280(auStack_370,param_5,iRam000000011372a4d0,9);
      puStack_d0 = &UNK_10f481ac3;
      lVar31 = *(long *)auStack_370._0_8_;
      *(int *)(lVar31 + 8) = iVar29;
      auStack_1e0._8_8_ = 0x300000002;
      auStack_1e0._0_8_ = &MACH_HEADER;
      puVar30 = (undefined8 *)(lVar31 + 0xc);
      for (lVar34 = 0; lVar34 != 0x10; lVar34 = lVar34 + 4) {
        uVar35 = NEON_fminnm(CONCAT44((int)(float)((ulong)aplStack_3b0
                                                          [*(uint *)(auStack_1e0 + lVar34)] >> 0x20)
                                      ,(int)SUB84(aplStack_3b0[*(uint *)(auStack_1e0 + lVar34)],0)),
                             0x4effffff4effffff,4);
        uVar35 = NEON_fmaxnm(uVar35,0xceffffffceffffff,4);
        *puVar30 = CONCAT44((int)(float)((ulong)uVar35 >> 0x20),(int)(float)uVar35);
        puVar30 = puVar30 + 1;
      }
      FUN_10827a344(auStack_370);
      FUN_10827a320(auStack_370);
      uVar35 = *(undefined8 *)(unaff_x23[2] + 200);
      fVar81 = (float)(int)uStack_2e8;
      uVar38 = SUB41(fVar81,0);
      uVar41 = (undefined1)((uint)fVar81 >> 8);
      uVar44 = (undefined1)((uint)fVar81 >> 0x10);
      uVar47 = (undefined1)((uint)fVar81 >> 0x18);
      param_1 = (mach_header *)(ulong)(uint)(float)uStack_2e8._4_4_;
      func_0x00010815f6c0(auStack_370);
      func_0x000108288e64();
      plVar26 = unaff_x23;
      (**(code **)(*unaff_x23 + 0x18))();
      if (plVar26 == (long *)0x0) {
        param_5 = (mach_header *)&uStack_100;
        FUN_1082b4954(auStack_1e0,uVar35);
        func_0x000108288bac();
        func_0x000108288bdc();
        if (apcStack_380[0] == (code *)0x0) {
          FUN_1083203c0(auStack_1e0,auStack_3c0,&uStack_2e8);
          if ((0 < iStack_1b8 && iStack_1b4 != 0) && (0 >= iStack_1b8 || -1 < iStack_1b4)) {
            func_0x000108288a90(auStack_310);
            auStack_330._4_2_ = auStack_310._12_2_;
            auStack_330._0_4_ = auStack_310._8_4_;
            if ((mach_header *)auStack_310._0_8_ == (mach_header *)0x0) {
              uStack_318 = (mach_header *)0x321000000000;
            }
            else {
              uStack_318._0_6_ = CONCAT24(auStack_310._12_2_,auStack_310._8_4_);
            }
            auStack_320 = (undefined1  [8])auStack_310._0_8_;
            pmVar32 = param_1;
          }
          else {
            auStack_320 = (undefined1  [8])0x0;
            uStack_318 = (mach_header *)0x321000000000;
            pmVar32 = param_1;
          }
          func_0x000108288c48();
          param_5 = (mach_header *)auStack_320;
          FUN_108279f20(apcStack_380);
          func_0x000108288ca0();
          if (apcStack_380[0] != (code *)0x0) {
            param_5 = (mach_header *)&uStack_100;
            FUN_1082b4bb8(auStack_1e0,uVar35,param_5,apcStack_380);
            func_0x000108288bac();
            func_0x000108288bdc();
LAB_108284a64:
            func_0x000108288ab0(apcStack_380[0]);
            func_0x000108288a44(&pmStack_2f0,auStack_1e0);
            uVar38 = in_b0;
            uVar41 = in_register_00005001;
            uVar44 = in_register_00005002;
            uVar47 = in_register_00005003;
            param_1 = pmVar32;
            goto LAB_108284a78;
          }
          pmStack_2f0 = (mach_header *)0x0;
          uVar38 = in_b0;
          uVar41 = in_register_00005001;
          uVar44 = in_register_00005002;
          uVar47 = in_register_00005003;
          param_1 = pmVar32;
        }
        else {
          func_0x000108288ab0();
          func_0x000108288a44(&pmStack_2f0,auStack_1e0);
LAB_108284a78:
          func_0x000108288bdc();
        }
      }
      else {
        func_0x000108288f30(auStack_310);
        FUN_1082b4d8c();
        if ((mach_header *)auStack_310._0_8_ == (mach_header *)0x0) {
LAB_1082849d8:
          pmStack_2f0 = (mach_header *)0x0;
        }
        else {
          FUN_1082b4c50(auStack_1e0,uVar35,(mach_header *)&uStack_100,auStack_310);
          func_0x000108288bac();
          func_0x000108288bdc();
          iVar29 = (int)apcStack_380;
          param_5 = (mach_header *)auStack_310;
          FUN_108287b04();
          if (iVar29 == 0) {
            auStack_320 = (undefined1  [8])0x0;
            uVar38 = 0;
            uVar41 = 0;
            uVar44 = 0;
            uVar47 = 0x3f;
            uVar50 = 0;
            uVar53 = 0;
            uVar56 = 0;
            uVar59 = 0;
            uVar19 = 0;
            uVar62 = 0;
            uVar63 = 0;
            uVar64 = 0;
            uVar65 = 0;
            uVar66 = 0;
            uVar67 = 0;
            uVar68 = 0;
            uStack_318 = (mach_header *)0x3f000000;
            pmStack_480 = (mach_header *)0x0;
            func_0x000108288f10();
            func_0x000108288f30(&uStack_470);
            FUN_1082c0054();
            FUN_10810a400(&pmStack_480);
            if (uStack_470 != 0) {
              func_0x000108288ed0();
              pmStack_1d0 = (mach_header *)0x0;
              uStack_1c8 = CONCAT31(uStack_1c8._1_3_,1);
              func_0x000108288aec();
              uStack_1bc = CONCAT13(uVar64,CONCAT12(uVar63,CONCAT11(uVar62,uVar19)));
              iStack_1b8 = (int)(CONCAT17(uVar68,CONCAT16(uVar67,CONCAT15(uVar66,CONCAT14(uVar65,
                                                  uStack_1bc)))) >> 0x20);
              dStack_1c4 = CONCAT13(uVar47,CONCAT12(uVar44,CONCAT11(uVar41,uVar38)));
              uStack_1c0 = (undefined4)
                           (CONCAT17(uVar59,CONCAT16(uVar56,CONCAT15(uVar53,CONCAT14(uVar50,
                                                  dStack_1c4)))) >> 0x20);
              func_0x000108288ddc();
              lVar34 = uStack_470;
              FUN_10827e874();
              func_0x000108288ec4();
              FUN_1082c0c88(lVar34,0,auStack_1e0,1);
              auStack_330 = (undefined1  [8])0x0;
              lVar34 = uStack_470;
              if (*(long *)(uStack_470 + 0x10) != 0) {
                do {
                  func_0x000108288adc();
                  lVar34 = extraout_x8_00;
                  auStack_330 = (undefined1  [8])extraout_x9;
                } while (extraout_w12 != 0);
              }
              uStack_328 = (mach_header *)CONCAT26(uStack_328._6_2_,*(undefined6 *)(lVar34 + 0x18));
              pmStack_2d8 = (mach_header *)0x0;
              FUN_108286138(&plStack_2d0,plVar26,auStack_330,*(undefined4 *)(lVar34 + 0x30),
                            *(undefined4 *)(lVar34 + 0x34),&pmStack_2d8,0);
              func_0x000108288b9c();
              func_0x000108288d4c();
              if ((plStack_2d0 != (long *)0x0) && (plStack_2d0[2] != 0)) {
                do {
                  func_0x000108288a64();
                } while (extraout_w10_01 != 0);
                do {
                  iVar29 = *extraout_x8_01;
                  cVar17 = '\x01';
                  bVar18 = (bool)ExclusiveMonitorPass(extraout_x8_01,0x10);
                  if (bVar18) {
                    *extraout_x8_01 = iVar29 + -1;
                    cVar17 = ExclusiveMonitorsStatus();
                  }
                } while (cVar17 != '\0');
                if (iVar29 + -1 == 0) {
                  func_0x000108288a38();
                }
                pmVar37 = (mach_header *)plStack_2d0[2];
                plVar26 = plStack_2d0;
                if (pmVar37 != (mach_header *)0x0) {
                  do {
                    func_0x000108288acc();
                    plVar26 = extraout_x8_02;
                  } while (extraout_w11 != 0);
                }
                pmStack_338 = (mach_header *)CONCAT26(pmStack_338._6_2_,(int6)plVar26[3]);
                pmStack_340 = pmVar37;
                FUN_1082b27f4(&pmStack_2e0,&pmStack_340);
                param_5 = pmStack_2e0;
                pmStack_2e0 = (mach_header *)0x0;
                FUN_108287b1c(auStack_310._16_8_ + 0x10);
                func_0x00010827aaa0(&pmStack_2e0);
                func_0x000108288c24();
                func_0x000108288ba4();
                func_0x000108288c58();
                func_0x000108288d54();
                func_0x000108288d68();
                goto LAB_108284a64;
              }
              func_0x000108288ba4();
              func_0x000108288c58();
              uVar38 = in_b0;
              uVar41 = in_register_00005001;
              uVar44 = in_register_00005002;
              uVar47 = in_register_00005003;
              param_1 = pmVar32;
            }
            func_0x000108288d54();
            param_5 = (mach_header *)&uStack_100;
            FUN_1082b4d3c(uVar35);
            goto LAB_1082849d8;
          }
          func_0x000108288ab0(apcStack_380[0]);
          func_0x000108288a44(&pmStack_2f0,auStack_1e0);
          func_0x000108288bdc();
        }
        func_0x000108288d68();
      }
      func_0x000108288cbc();
      pcVar14 = (code *)&uStack_100;
      func_0x00010827a384();
      if (pmStack_2f0 == (mach_header *)0x0) goto LAB_108284c68;
      if ((bRam000000011372a510 & 1) == 0) {
        pcVar14 = (code *)&bRam000000011372a510;
        ___cxa_guard_acquire();
        if ((int)pcVar14 != 0) {
          func_0x000108288d08();
          pcVar14 = FUN_108394278;
          func_0x000108288e1c(FUN_108394278,&UNK_10f481798);
          pmRam000000011372a508 = (mach_header *)pcVar14;
          func_0x000108288b78(&bRam000000011372a510);
        }
      }
      pmVar13 = pmStack_2f0;
      uVar35 = uStack_438;
      pmVar37 = uStack_440;
      pmVar32 = pmRam000000011372a508;
      dVar1 = (dword)(float)uStack_430;
      pmStack_2f0 = (mach_header *)0x0;
      func_0x000108288e50();
      func_0x000108288c60();
      if (pmVar32 != (mach_header *)0x0) {
        do {
          func_0x000108288a64();
        } while (extraout_w10_02 != 0);
      }
      uStack_100 = (undefined **)pmVar32;
      func_0x000108288b24();
      func_0x000108288c1c();
      auStack_1e0._0_8_ = pmVar13;
      func_0x000108288b14();
      fVar81 = (float)(int)(fVar77 + -0.16666667) * 3.0;
      uVar38 = SUB41(fVar81,0);
      uVar41 = (undefined1)((uint)fVar81 >> 8);
      uVar44 = (undefined1)((uint)fVar81 >> 0x10);
      uVar47 = (undefined1)((uint)fVar81 >> 0x18);
      param_1 = (mach_header *)
                CONCAT44((float)((ulong)pmVar37 >> 0x20) - fVar81,SUB84(pmVar37,0) - fVar81);
      uVar7 = CONCAT17(uVar47,CONCAT16(uVar44,CONCAT15(uVar41,CONCAT14(uVar38,fVar81))));
      uVar36 = CONCAT17(uVar47,CONCAT16(uVar44,CONCAT15(uVar41,CONCAT14(uVar38,fVar81))));
      fVar77 = (float)uVar35 + fVar81;
      fVar78 = (float)((ulong)uVar35 >> 0x20) + fVar81;
      if ((mach_header *)auStack_1e0._0_8_ != (mach_header *)0x0) {
        func_0x000108288a38();
      }
      ((mach_header *)((long)pcVar14 + 0x60))->cpusubtype = dVar1;
      ((mach_header *)((long)pcVar14 + 0x60))->sizeofcmds = (dword)fVar77;
      ((mach_header *)((long)pcVar14 + 0x60))->flags =
           (int)(CONCAT17((char)((uint)fVar78 >> 0x18),
                          CONCAT16((char)((uint)fVar78 >> 0x10),
                                   CONCAT15((char)((uint)fVar78 >> 8),
                                            CONCAT14(SUB41(fVar78,0),fVar77)))) >> 0x20);
      *(mach_header **)&((mach_header *)((long)pcVar14 + 0x60))->filetype = param_1;
      ((mach_header *)((long)pcVar14 + 0x60))->reserved = (dword)fVar81;
      auStack_388 = (undefined1  [8])0x0;
      param_5 = (mach_header *)auStack_388;
      plStack_2f8 = (long *)pcVar14;
      FUN_108287a24(&lStack_450,&plStack_2f8);
      auVar11 = auStack_388;
      auStack_388._0_4_ = 0;
      auStack_388._4_4_ = 0;
      if (auVar11 != (undefined1  [8])0x0) {
        func_0x000108288a38();
      }
      plVar26 = plStack_2f8;
      plStack_2f8 = (long *)0x0;
      if ((mach_header *)plVar26 != (mach_header *)0x0) {
        func_0x000108288a38();
      }
      pmVar32 = pmStack_2f0;
      pmStack_2f0 = (mach_header *)0x0;
      if (pmVar32 != (mach_header *)0x0) {
        func_0x000108288a38();
      }
      if (lStack_450 == 0) goto LAB_108284c68;
      uVar19 = *(char *)((long)param_9 + 0x14) == '\x01';
      if (!(bool)uVar19) {
        uVar38 = 0;
        uVar41 = 0;
        uVar44 = 0x80;
        uVar47 = 0x3f;
        func_0x000108288eb0();
        param_5 = (mach_header *)auStack_1e0;
        pmVar32 = param_8;
        FUN_10818cfd0();
        if (((ulong)pmVar32 & 1) != 0) {
          uStack_100 = (undefined **)0x0;
          mStack_f8.magic = 0;
          mStack_f8.cputype = 0;
          auStack_3c0._0_4_ = SUB84(uStack_440,0) - fVar81;
          auStack_3c0._4_4_ = (float)((ulong)uStack_440 >> 0x20) - (float)((ulong)uVar36 >> 0x20);
          fVar77 = (float)((ulong)uStack_438 >> 0x20) + (float)((ulong)uVar7 >> 0x20);
          auStack_3c0[0xc] = SUB41(fVar77,0);
          auStack_3c0._8_4_ = (float)uStack_438 + fVar81;
          auStack_3c0[0xd] = (char)((uint)fVar77 >> 8);
          auStack_3c0[0xe] = (char)((uint)fVar77 >> 0x10);
          auStack_3c0[0xf] = (char)((uint)fVar77 >> 0x18);
          func_0x00010812f1a8(auStack_3c0,(mach_header *)&uStack_100);
          lStack_460 = lStack_450;
          func_0x000108288e08();
          lVar34 = lStack_460;
          lStack_460 = 0;
          if (lVar34 != 0) {
            func_0x000108288a38();
          }
          FUN_1082878ec();
          goto LAB_108285884;
        }
        goto LAB_108284c60;
      }
      auStack_1e0._8_8_ = auStack_400._8_8_;
      auStack_1e0._0_8_ = auStack_400._0_8_;
      func_0x00010816882c(CONCAT17(uVar59,CONCAT16(uVar56,CONCAT15(uVar53,CONCAT14(uVar50,CONCAT13(
                                                  uVar47,CONCAT12(uVar44,CONCAT11(uVar41,uVar38)))))
                                                  )),*(float *)((long)param_9 + 0xc) * 3.0,
                          auStack_1e0);
      lStack_458 = lStack_450;
      func_0x000108288e08();
      lVar34 = lStack_458;
      lStack_458 = 0;
      if (lVar34 != 0) {
        func_0x000108288a38();
      }
      func_0x000108288b4c();
    }
  }
  else {
LAB_108284c6c:
    if (param_10[0x38] == '\x04') {
      if (((byte)param_10[0xe] >> 1 & 1) != 0) goto LAB_108284c94;
LAB_108284c80:
      uVar33 = 0;
    }
    else {
      if (param_10[0x3b] != '\x01') goto LAB_108284c80;
LAB_108284c94:
      puVar22 = puVar27;
      param_5 = param_8;
      FUN_1082b65d4(puVar27,param_8,0);
      uVar33 = (uint)puVar22 ^ 1;
    }
    auStack_320 = (undefined1  [8])0x0;
    uStack_318 = (mach_header *)0x0;
    auStack_330._0_4_ = 0;
    auStack_330._4_4_ = 0;
    uStack_328._0_4_ = 0.0;
    uStack_328._4_4_ = 0.0;
    if (unaff_x20 == (mach_header *)0x0) {
      unaff_x20 = (mach_header *)0x0;
      param_5 = *(mach_header **)(*(long *)(unaff_x21 + 0x10) + 0x90);
    }
    else {
      (**(code **)(*(long *)unaff_x20 + 0x10))();
    }
    auStack_330 = (undefined1  [8])unaff_x20;
    uStack_328 = param_5;
    func_0x000108288ed0();
    uVar19 = param_10[0x38] == '\x04';
    if ((bool)uVar19) {
      if (((byte)param_10[0xe] >> 1 & 1) == 0) goto LAB_108284d0c;
LAB_108284cf0:
      auStack_1e0._8_8_ = 0x7f8000007f800000;
      auStack_1e0._0_8_ = (mach_header *)0xff800000ff800000;
LAB_108284d34:
      mStack_f8.magic = 0x4effffff;
      mStack_f8.cputype = 0x4effffff;
      uStack_100 = (undefined **)0xcf000000cf000000;
      puVar22 = auStack_1e0;
      FUN_10838ed10(puVar22,(mach_header *)&uStack_100);
      if ((int)puVar22 == 0) goto LAB_108284dd8;
      fVar81 = (float)NEON_fminnm((float)(double)(long)(((float)auStack_1e0._8_4_ -
                                                        (float)auStack_1e0._0_4_) + 0.5),0x4effffff)
      ;
      if (fVar81 <= -2.1474835e+09) {
        fVar81 = -2.1474835e+09;
      }
      uVar19 = (int)fVar81 == 0x7fffff80;
      if (0x7fffff80 < (int)fVar81) goto LAB_108284dd8;
      fVar81 = (float)NEON_fminnm((float)(double)(long)(((float)auStack_1e0._12_4_ -
                                                        (float)auStack_1e0._4_4_) + 0.5),0x4effffff)
      ;
      uVar19 = SUB41(fVar81,0);
      uVar38 = (undefined1)((uint)fVar81 >> 8);
      uVar41 = (undefined1)((uint)fVar81 >> 0x10);
      uVar44 = (undefined1)((uint)fVar81 >> 0x18);
      if (fVar81 <= -2.1474835e+09) {
        uVar19 = 0xff;
        uVar38 = 0xff;
        uVar41 = 0xff;
        uVar44 = 0xce;
      }
      iVar29 = (int)(float)CONCAT13(uVar44,CONCAT12(uVar41,CONCAT11(uVar38,uVar19)));
      uVar19 = iVar29 == 0x7fffff80;
      if (0x7fffff80 < iVar29) goto LAB_108284dd8;
      func_0x00010812f1a8(auStack_1e0,auStack_320);
    }
    else {
      uVar19 = true;
      if (param_10[0x3b] == '\x01') goto LAB_108284cf0;
LAB_108284d0c:
      FUN_1082d8a18(param_10);
      uStack_100 = (undefined **)
                   CONCAT44(fVar81,CONCAT13(uVar47,CONCAT12(uVar44,CONCAT11(uVar41,uVar38))));
      mStack_f8.cputype = (dword)param_3;
      mStack_f8.magic = (dword)extraout_s2;
      bVar18 = false;
      uVar19 = false;
      if ((float)CONCAT13(uVar47,CONCAT12(uVar44,CONCAT11(uVar41,uVar38))) < extraout_s2) {
        bVar18 = false;
        uVar19 = false;
        if (!NAN(fVar81) && !NAN(param_3)) {
          bVar18 = fVar81 < param_3;
          uVar19 = fVar81 == param_3;
        }
      }
      if (bVar18) {
        func_0x000108288e30();
        goto LAB_108284d34;
      }
LAB_108284dd8:
      auStack_320 = (undefined1  [8])0x0;
      uStack_318 = (mach_header *)0x0;
      if ((uVar33 & 1) == 0) goto LAB_108285884;
    }
    FUN_10827a1fc(auStack_3c0);
    lVar34 = *(long *)(*(long *)(*(long *)(unaff_x21 + 8) + 0x10) + 0xb8);
    pmStack_338 = uStack_328;
    pmStack_340 = (mach_header *)auStack_330;
    if (((((uVar33 & 1) == 0) && (pmVar32 = param_8, FUN_10827a0d8(), (int)pmVar32 != 0)) &&
        (puVar22 = param_10, FUN_108287bd8(), (int)puVar22 != 0)) &&
       (plVar26 = param_9, (**(code **)(*param_9 + 0x58))(param_9,0), (int)plVar26 != 0)) {
      func_0x000108288ed0();
      uStack_100 = (undefined **)0x0;
      mStack_f8.magic = 0;
      mStack_f8.cputype = 0;
      func_0x000108288bb8();
      uVar24 = 0;
      FUN_10821a6d8();
      if ((uVar24 & 1) == 0) {
        func_0x000108288bb8();
        iVar21 = mStack_f8.magic - (dword)uStack_100;
        iVar5 = mStack_f8.cputype - (int)uStack_100._4_4_;
        lVar31 = (long)iVar5 * (long)iVar21;
        iVar29 = *(int *)(lVar34 + 0x3c);
        lVar34 = (long)(int)(auStack_1e0._8_4_ - auStack_1e0._0_4_) *
                 (long)(int)(auStack_1e0._12_4_ - auStack_1e0._4_4_);
        bVar15 = lVar31 + lVar34 * -2 == 0;
        bVar18 = lVar31 < lVar34 * 2;
        uVar19 = ((bVar15 || bVar18) && iVar21 <= iVar29) && iVar5 == iVar29;
        if (((bVar15 || bVar18) && iVar21 <= iVar29) && iVar5 <= iVar29) {
          pmStack_338 = uStack_318;
          pmStack_340 = (mach_header *)auStack_320;
          if ((bRam000000011372a520 & 1) == 0) {
            iVar29 = 0x1372a520;
            ___cxa_guard_acquire();
            if (iVar29 != 0) {
              func_0x000108320d60();
              iRam000000011372a4d4 = iVar29;
              func_0x000108288b78(&bRam000000011372a520);
            }
          }
          iVar29 = iRam000000011372a4d4;
          puVar22 = param_10;
          FUN_1082d8b10(param_10);
          FUN_10827a280(auStack_1e0,auStack_3c0,iVar29,(int)puVar22 + 7);
          puStack_390 = &UNK_10f481ad7;
          dVar2 = param_8->cputype;
          dVar1 = param_8->filetype;
          dVar3 = param_8->ncmds;
          fVar77 = (float)param_8->cpusubtype;
          fVar81 = (float)param_8->sizeofcmds;
          pmVar32 = *(mach_header **)auStack_1e0._0_8_;
          pmVar32->cpusubtype = param_8->magic;
          pmVar32->filetype = dVar3;
          pmVar32->ncmds = dVar2;
          pmVar32->sizeofcmds = dVar1;
          puVar22 = puVar27;
          FUN_108287d18();
          fVar81 = (float)NEON_fminnm((fVar81 - (float)(int)fVar81) * 65536.0,0x4effffff);
          uVar38 = SUB41(fVar81,0);
          uVar41 = (char)((uint)fVar81 >> 8);
          uVar44 = (char)((uint)fVar81 >> 0x10);
          uVar47 = (char)((uint)fVar81 >> 0x18);
          if (fVar81 <= -2.1474835e+09) {
            uVar38 = 0xff;
            uVar41 = 0xff;
            uVar44 = 0xff;
            uVar47 = 0xce;
          }
          fVar81 = (float)NEON_fminnm((fVar77 - (float)(int)fVar77) * 65536.0,0x4effffff);
          uVar50 = SUB41(fVar81,0);
          uVar53 = (char)((uint)fVar81 >> 8);
          uVar56 = (char)((uint)fVar81 >> 0x10);
          uVar59 = (char)((uint)fVar81 >> 0x18);
          if (fVar81 <= -2.1474835e+09) {
            uVar50 = 0xff;
            uVar53 = 0xff;
            uVar56 = 0xff;
            uVar59 = 0xce;
          }
          uVar33 = *(int *)(param_10 + 0x4c) << 0x11 | 0x10000;
          uVar19 = (int)puVar22 == 0;
          if ((bool)uVar19) {
            uVar33 = 0;
          }
          (*(mach_header **)auStack_1e0._0_8_)->flags =
               (int)(float)CONCAT13(uVar59,CONCAT12(uVar56,CONCAT11(uVar53,uVar50))) & 0xff00U |
               (uint)(int)(float)CONCAT13(uVar47,CONCAT12(uVar44,CONCAT11(uVar41,uVar38))) >> 8 &
               0xff | uVar33;
          (**(code **)(*param_9 + 0x58))(param_9,(mach_header *)&uStack_100);
          pmVar32 = *(mach_header **)auStack_1e0._0_8_;
          uVar35 = NEON_rev64(uStack_100,4);
          *(undefined8 *)&pmVar32->reserved = uVar35;
          FUN_1082d8bdc(param_10,&pmVar32[1].cputype);
          FUN_10827a320(auStack_1e0);
        }
        goto LAB_108284fd0;
      }
    }
    else {
LAB_108284fd0:
      func_0x000108288e64();
      uStack_470 = 0;
      uStack_468 = 0;
      plVar26 = unaff_x23;
      (**(code **)(*unaff_x23 + 0x18))();
      if (plVar26 == (long *)0x0) {
LAB_108285590:
        uVar35 = *(undefined8 *)(unaff_x23[2] + 200);
        auStack_370._0_8_ = (mach_header *)0x0;
        auStack_370._14_2_ = SUB82(auStack_370._8_8_,6);
        auStack_370._8_6_ = 0x321000000000;
        plStack_2d0 = (long *)0x0;
        func_0x000108288d28();
        if (extraout_w8_03 == 0) {
LAB_10828560c:
          FUN_108287d18(puVar27);
          FUN_108376ad8(auStack_310);
          FUN_108287e50(param_10,auStack_310);
          func_0x000108142294(auStack_310,param_8,1);
          uStack_100 = (undefined **)0x0;
          mStack_f8.magic = 0;
          mStack_f8.cputype = 0;
          mStack_f8._16_5_ = 0;
          mStack_f8._8_5_ = 0;
          mStack_f8.filetype._1_3_ = 0;
          auStack_400._0_8_ = (mach_header *)0x0;
          auStack_400._8_8_ = 0;
          uStack_3e8 = 0;
          uStack_3e4 = uStack_3e4 & 0xffffff00;
          fStack_3f0 = 0.0;
          fStack_3ec = 0.0;
          puVar22 = auStack_310;
          FUN_10834a2d8(puVar22,&pmStack_340,param_9,param_8,(mach_header *)&uStack_100,2,
                        (uint)puVar27 ^ 1);
          if (((ulong)puVar22 & 1) == 0) {
            func_0x000108288a74();
          }
          else {
            pmStack_2d8 = (mach_header *)uStack_100;
            (**(code **)(*param_9 + 0x40))(param_9,auStack_400,(mach_header *)&uStack_100,param_8,0)
            ;
            if (((ulong)param_9 & 1) == 0) {
              func_0x000108288a74();
            }
            else {
              pmStack_2e0 = (mach_header *)auStack_400._0_8_;
              ppmVar23 = &pmStack_340;
              FUN_108287d68(ppmVar23,auStack_400 + 8);
              if (((ulong)ppmVar23 & 1) == 0) {
                puStack_1b0 = (undefined *)0x0;
                uStack_1c8 = 0;
                dStack_1c4 = 0;
                pmStack_1d0 = (mach_header *)0x0;
                iStack_1b8 = 0;
                iStack_1b4 = 0;
                uStack_1c0 = 0;
                uStack_1bc = 0;
                auStack_1e0._8_8_ = 0;
                auStack_1e0._0_8_ = (mach_header *)0x0;
                func_0x000108288e84((int)fStack_3f0 - auStack_400._8_4_);
                pmVar32 = pmStack_2e0;
                uStack_440 = (mach_header *)0x0;
                uStack_438 = 0x200000001;
                pmStack_2e0 = (mach_header *)0x0;
                puVar27 = auStack_1e0;
                uStack_430 = extraout_x8_09;
                FUN_108330bac(puVar27,&uStack_440,pmVar32,uStack_3e8,FUN_108287e84,0);
                FUN_10810a400(&uStack_440);
                if (((ulong)puVar27 & 1) != 0) {
                  if ((mach_header *)auStack_1e0._0_8_ != (mach_header *)0x0) {
                    *(undefined1 *)((long)&((mach_header *)(auStack_1e0._0_8_ + 0x40))->flags + 1) =
                         2;
                  }
                  FUN_1082b8914(&uStack_440);
                  FUN_108279f20(auStack_370,&uStack_440);
                  func_0x000108288bc4();
                  if ((mach_header *)auStack_370._0_8_ != (mach_header *)0x0) {
                    uStack_468 = CONCAT44(fStack_3ec,fStack_3f0);
                    uStack_470 = auStack_400._8_8_;
                    func_0x000108288d28();
                    if (extraout_w8_04 != 0) {
                      func_0x000108287db0(&uStack_2e8,&uStack_470,(ulong)auStack_320 & 0xffffffff,
                                          auStack_320._4_4_);
                      pmVar32 = pmStack_398;
                      pmStack_398 = uStack_2e8;
                      func_0x000108287e10(pmVar32);
                      func_0x000108287e10(0);
                      FUN_1082b4c08(&uStack_440,uVar35,auStack_3c0,auStack_370);
                      FUN_108287e88(auStack_370,&plStack_2d0,&uStack_440);
                      FUN_108287e1c(&uStack_440);
                      FUN_108288c68(plStack_2d0);
                    }
                    func_0x000108288c48();
                    func_0x000108288d78();
                    func_0x000108288db4();
                    func_0x000108288d80();
                    goto LAB_1082855e8;
                  }
                }
                func_0x000108288a74();
                func_0x000108288c48();
              }
              else {
                func_0x000108288a74();
              }
              func_0x000108288d78();
            }
            func_0x000108288db4();
          }
          func_0x000108288d80();
        }
        else {
          FUN_1082b49b8(auStack_1e0,uVar35,auStack_3c0);
          FUN_108287e88(auStack_370,&plStack_2d0,auStack_1e0);
          func_0x000108288c50();
          if ((mach_header *)auStack_370._0_8_ == (mach_header *)0x0) goto LAB_10828560c;
          FUN_108288c68(plStack_2d0);
LAB_1082855e8:
          pmStack_480 = (mach_header *)auStack_370._0_8_;
          auStack_370._0_8_ = (mach_header *)0x0;
          auStack_478 = (undefined1  [8])CONCAT26(auStack_478._6_2_,(int6)auStack_370._8_8_);
        }
        func_0x000108287e10(plStack_2d0);
        FUN_108287d44(auStack_370._0_8_);
        func_0x000108288df4();
        FUN_108287d44(pmStack_480);
        pcVar14 = apcStack_380[0];
        if (apcStack_380[0] != (code *)0x0) {
          apcStack_380[0] = (code *)0x0;
          func_0x000108288c2c();
          FUN_108287d44(pcVar14);
        }
      }
      else {
        plVar25 = plVar26;
        func_0x000108288bb8();
        if (((ulong)plVar25 & 1) == 0) {
LAB_108285018:
          func_0x000108288a74();
        }
        else {
          ppmVar23 = &pmStack_340;
          FUN_108287d68(ppmVar23,&uStack_470);
          if ((int)ppmVar23 != 0) goto LAB_108285018;
          uVar35 = *(undefined8 *)(plVar26[2] + 200);
          auStack_310._0_8_ = (mach_header *)0x0;
          auStack_310._8_4_ = 0;
          auStack_310._12_2_ = 0x3210;
          uStack_2e8 = (mach_header *)0x0;
          func_0x000108288d28();
          if (extraout_w8_00 == 0) {
LAB_108285140:
            (**(code **)(**(long **)(unaff_x21 + 0x10) + 0x28))();
            auStack_370._0_8_ = (mach_header *)0x0;
            uVar38 = 0;
            uVar41 = 0;
            uVar44 = 0;
            uVar47 = 0x3f;
            uVar50 = 0;
            uVar53 = 0;
            uVar56 = 0;
            uVar59 = 0;
            uVar62 = 0;
            uVar63 = 0;
            uVar64 = 0;
            uVar65 = 0;
            uVar66 = 0;
            uVar67 = 0;
            uVar68 = 0;
            uVar69 = 0;
            auStack_370._8_4_ = 0x3f000000;
            auStack_370._12_4_ = 0;
            func_0x000108320fa4(CONCAT44(uStack_468._4_4_ - uStack_470._4_4_,
                                         (int)uStack_468 - (int)uStack_470));
            pmStack_2d8 = (mach_header *)0x0;
            func_0x000108288f10();
            func_0x000108288f30(&plStack_2d0);
            FUN_1082c0054();
            func_0x000108288b9c();
            if (plStack_2d0 == (long *)0x0) {
              plStack_2f8 = (long *)0x0;
            }
            else {
              func_0x000108288ddc();
              auStack_400._8_8_ = 0;
              fStack_3f0 = 0.0;
              fStack_3ec = 0.0;
              func_0x000108288aec();
              uStack_3dc = CONCAT13(uVar65,CONCAT12(uVar64,CONCAT11(uVar63,uVar62)));
              uStack_3d8 = (undefined4)
                           (CONCAT17(uVar69,CONCAT16(uVar68,CONCAT15(uVar67,CONCAT14(uVar66,
                                                  uStack_3dc)))) >> 0x20);
              uStack_3e4 = CONCAT13(uVar47,CONCAT12(uVar44,CONCAT11(uVar41,uVar38)));
              uStack_3e0 = (undefined4)
                           (CONCAT17(uVar59,CONCAT16(uVar56,CONCAT15(uVar53,CONCAT14(uVar50,
                                                  uStack_3e4)))) >> 0x20);
              auStack_400._0_8_ = &PTR_PTR_110a37ad8;
              uStack_3e8 = uStack_3e8 & 0xffffff00;
              func_0x000108288d18();
              func_0x000108288e84();
              auStack_1e0._0_8_ = (mach_header *)0x0;
              uStack_100 = &PTR_FUN_110a35620;
              mStack_f8._8_5_ = 0;
              mStack_f8.filetype._1_3_ = 0;
              mStack_f8._16_5_ = SUB85(extraout_x10,0);
              mStack_f8.sizeofcmds._1_3_ = SUB83(extraout_x10,5);
              mStack_f8._24_8_ = mStack_f8._24_8_ & 0xffffffffffffff00;
              uStack_d8 = uStack_d8 & 0xffffffff00000000;
              auStack_1e0._8_8_ = extraout_x8_05;
              mStack_f8._0_8_ = extraout_x10;
              FUN_108287e44(&mStack_f8,auStack_1e0);
              uStack_438._0_4_ = (float)param_8->cpusubtype;
              uStack_438._4_4_ = (float)param_8->filetype;
              uStack_440 = *(mach_header **)param_8;
              uStack_428._0_4_ = param_8->flags;
              uStack_428._4_4_ = (float)param_8->reserved;
              uStack_430._0_4_ = (float)param_8->ncmds;
              uStack_430._4_4_ = (float)param_8->sizeofcmds;
              pmStack_420 = *(mach_header **)(param_8 + 1);
              uVar62 = 0;
              uVar63 = 0;
              uVar64 = 0;
              uVar65 = 0;
              uVar66 = 0;
              uVar67 = 0;
              uVar68 = 0;
              uVar69 = 0;
              uVar38 = (char)uStack_470;
              uVar41 = (char)((ulong)uStack_470 >> 8);
              uVar44 = (char)((ulong)uStack_470 >> 0x10);
              uVar47 = (char)((ulong)uStack_470 >> 0x18);
              uVar50 = 0;
              uVar53 = 0;
              uVar56 = 0;
              uVar59 = 0;
              func_0x000108288efc(CONCAT17(uVar61,CONCAT16(uVar58,CONCAT15(uVar55,CONCAT14(uVar52,
                                                  CONCAT13(uVar49,CONCAT12(uVar46,CONCAT11(uVar43,
                                                  uVar40))))))),uStack_470._4_4_);
              uVar61 = uVar59;
              uVar58 = uVar56;
              uVar55 = uVar53;
              uVar52 = uVar50;
              uVar49 = uVar47;
              uVar46 = uVar44;
              uVar43 = uVar41;
              uVar40 = uVar38;
              uVar38 = uVar40;
              uVar41 = uVar43;
              uVar44 = uVar46;
              uVar47 = uVar49;
              uVar50 = uVar52;
              uVar53 = uVar55;
              uVar56 = uVar58;
              uVar59 = uVar61;
              FUN_108363ef4(&uStack_440);
              plVar25 = plStack_2d0;
              func_0x000108288e24();
              FUN_1082c338c(plVar25,(mach_header *)&uStack_100,auStack_400,1,&uStack_440,auStack_1e0
                           );
              func_0x000108288c40();
              plStack_2f8 = plStack_2d0;
              plStack_2d0 = (long *)0x0;
              func_0x000108288d9c();
              func_0x00010827ee54(auStack_400);
            }
            func_0x000108288ba4();
            if (plStack_2f8 == (long *)0x0) {
              func_0x000108288d28();
              if (extraout_w8_01 != 0) {
                func_0x000108288da8();
              }
              func_0x000108288a74();
            }
            else {
              pmVar32 = (mach_header *)plStack_2f8[2];
              plVar25 = plStack_2f8;
              if (pmVar32 != (mach_header *)0x0) {
                do {
                  func_0x000108288acc();
                  plVar25 = extraout_x8_06;
                } while (extraout_w11_01 != 0);
              }
              auStack_388._0_6_ = (int6)plVar25[3];
              lVar34 = plVar25[6];
              uVar4 = *(undefined4 *)((long)plVar25 + 0x34);
              plVar25 = param_9;
              (**(code **)(*param_9 + 0x48))();
              if ((int)plVar25 == 0) {
                func_0x000108288d18();
                func_0x000108288e84();
                uStack_100 = (undefined **)0x0;
                mStack_f8._0_8_ = extraout_x8_07;
                func_0x000108288e00(param_9);
                lVar31 = param_9[2];
                do {
                  func_0x000108288acc();
                } while (extraout_w11_02 != 0);
                auStack_400._8_6_ = auStack_388._0_6_;
                pmStack_2d8 = (mach_header *)0x0;
                auStack_400._0_8_ = pmVar32;
                FUN_108286138(CONCAT17(uVar60,CONCAT16(uVar57,CONCAT15(uVar54,CONCAT14(uVar51,
                                                  CONCAT13(uVar48,CONCAT12(uVar45,CONCAT11(uVar42,
                                                  uVar39))))))),
                              CONCAT17(uVar59,CONCAT16(uVar56,CONCAT15(uVar53,CONCAT14(uVar50,
                                                  CONCAT13(uVar47,CONCAT12(uVar44,CONCAT11(uVar41,
                                                  uVar38))))))),&plStack_2d0,plVar26,auStack_400,
                              (int)lVar34,uVar4,&pmStack_2d8,0,extraout_x8_07);
                uVar60 = uVar59;
                uVar57 = uVar56;
                uVar54 = uVar53;
                uVar51 = uVar50;
                uVar48 = uVar47;
                uVar45 = uVar44;
                uVar42 = uVar41;
                uVar39 = uVar38;
                uVar40 = uVar39;
                uVar43 = uVar42;
                uVar46 = uVar45;
                uVar49 = uVar48;
                uVar52 = uVar51;
                uVar55 = uVar54;
                uVar58 = uVar57;
                uVar61 = uVar60;
                func_0x000108288b9c();
                func_0x000108288cc4();
                if (((plStack_2d0 == (long *)0x0) ||
                    (plVar26 = (long *)plStack_2d0[2], plVar26 == (long *)0x0)) ||
                   ((**(code **)(*plVar26 + 0x18))(), plVar26 == (long *)0x0)) {
                  auStack_370._0_8_ = (mach_header *)0x0;
                  auStack_370._8_4_ = 0;
                  auStack_370._12_4_ = 0;
                  uVar28 = 0x3210;
                }
                else {
                  if ((int)lVar31 != 0) {
                    func_0x000108288ed0();
                    pmStack_1d0 = (mach_header *)0x0;
                    uStack_1c8 = CONCAT31(uStack_1c8._1_3_,1);
                    func_0x000108288aec();
                    uStack_1bc = CONCAT13(uVar65,CONCAT12(uVar64,CONCAT11(uVar63,uVar62)));
                    iStack_1b8 = (int)(CONCAT17(uVar69,CONCAT16(uVar68,CONCAT15(uVar67,CONCAT14(
                                                  uVar66,uStack_1bc)))) >> 0x20);
                    dStack_1c4 = CONCAT13(uVar49,CONCAT12(uVar46,CONCAT11(uVar43,uVar40)));
                    uStack_1c0 = (undefined4)
                                 (CONCAT17(uVar61,CONCAT16(uVar58,CONCAT15(uVar55,CONCAT14(uVar52,
                                                  dStack_1c4)))) >> 0x20);
                    uStack_438._0_6_ = auStack_388._0_6_;
                    uStack_440 = pmVar32;
                    func_0x000108288a58(&pmStack_2e0,&uStack_440,uVar4,&pmRam0000000113254e20);
                    FUN_10827cbfc(auStack_1e0,&pmStack_2e0);
                    pmVar32 = pmStack_2e0;
                    pmStack_2e0 = (mach_header *)0x0;
                    if (pmVar32 != (mach_header *)0x0) {
                      func_0x000108288a38();
                    }
                    func_0x000108288bc4();
                    uVar33 = (int)param_9[2] - 1;
                    uVar19 = uVar33 == 3;
                    if (uVar33 < 3) {
                      pmVar32 = (mach_header *)(ulong)*(uint *)(&UNK_10df132e8 + (ulong)uVar33 * 4);
                    }
                    else {
                      pmVar32 = (mach_header *)0x5;
                    }
                    FUN_1082c844c(pmVar32,0);
                    uStack_1c8 = uStack_1c8 & 0xffffff00;
                    auStack_1e0._0_8_ = pmVar32;
                    func_0x000108288ec4(plStack_2d0);
                    FUN_1082878ec();
                    func_0x000108288c58();
                  }
                  pmVar32 = (mach_header *)0x0;
                  plVar26 = plStack_2d0;
                  if (plStack_2d0[2] != 0) {
                    do {
                      func_0x000108288adc();
                      plVar26 = extraout_x8_08;
                      pmVar32 = extraout_x9_00;
                    } while (extraout_w12_00 != 0);
                  }
                  auStack_370._8_4_ = *(dword *)(plVar26 + 3);
                  uVar28 = *(undefined2 *)((long)plVar26 + 0x1c);
                  auStack_370._0_8_ = pmVar32;
                }
                auStack_370._12_2_ = uVar28;
                uVar4 = 0;
                func_0x000108288ba4();
                stack0xfffffffffffffb8e = uVar4;
                uVar4 = stack0xfffffffffffffb8e;
              }
              else {
                auStack_370._0_8_ = (mach_header *)0x0;
                auStack_370._8_4_ = 0;
                auStack_370._12_4_ = 0x3210;
                uVar4 = 0;
              }
              stack0xfffffffffffffb8e = uVar4;
              uVar4 = stack0xfffffffffffffb8e;
              func_0x000108288c24();
              stack0xfffffffffffffb8e = uVar4;
              uVar35 = auStack_370._0_8_;
              auStack_478._4_4_ = stack0xfffffffffffffb8e;
              func_0x000108288d28();
              if ((mach_header *)uVar35 == (mach_header *)0x0) {
                if (extraout_w8_02 != 0) {
                  func_0x000108288da8();
                }
                pmStack_480 = (mach_header *)0x0;
                auStack_478 = (undefined1  [8])0x0;
                uVar28 = 0x3210;
LAB_108285510:
                auStack_478 = (undefined1  [8])
                              CONCAT26(auStack_478._6_2_,CONCAT24(uVar28,auStack_478._0_4_));
              }
              else {
                if (extraout_w8_02 != 0) {
                  FUN_1082b27f4(auStack_1e0,auStack_370);
                  uVar35 = auStack_1e0._0_8_;
                  auStack_1e0._0_8_ = (mach_header *)0x0;
                  FUN_108287b1c(&uStack_2e8->ncmds,uVar35);
                  func_0x00010827aaa0(auStack_1e0);
                  pmStack_480 = (mach_header *)auStack_310._0_8_;
                  auStack_310._0_8_ = (mach_header *)0x0;
                  auStack_478 = (undefined1  [8])CONCAT44(auStack_478._4_4_,auStack_310._8_4_);
                  uVar28 = auStack_310._12_2_;
                  goto LAB_108285510;
                }
                pmStack_480 = (mach_header *)uVar35;
                auStack_478 = (undefined1  [8])CONCAT26(auStack_478._6_2_,(int6)auStack_370._8_8_);
              }
              func_0x000108288c24();
            }
            FUN_10827f5e4(&plStack_2f8);
          }
          else {
            func_0x000108288d18();
            func_0x000108288f30(auStack_1e0);
            FUN_1082b4d8c();
            FUN_108279f20(auStack_310,auStack_1e0);
            pmVar37 = pmStack_1d0;
            pmVar32 = uStack_2e8;
            pmStack_1d0 = (mach_header *)0x0;
            uStack_2e8 = pmVar37;
            FUN_108287bac(pmVar32);
            FUN_108287b5c(auStack_1e0);
            if ((mach_header *)auStack_310._0_8_ == (mach_header *)0x0) {
              func_0x000108288a74();
            }
            else {
              func_0x000108287db0(&pmStack_2f0,&uStack_470,(ulong)auStack_320 & 0xffffffff,
                                  auStack_320._4_4_);
              pmVar37 = pmStack_2f0;
              pmVar32 = pmStack_398;
              pmStack_2f0 = (mach_header *)0x0;
              pmStack_398 = pmVar37;
              func_0x000108287e10(pmVar32);
              func_0x000108287e10(0);
              FUN_1082b4cbc(auStack_1e0,uVar35,auStack_3c0,auStack_310);
              puVar22 = auStack_1e0;
              FUN_108287b04(puVar22,auStack_310);
              if ((int)puVar22 == 0) {
                func_0x000108288c50();
                goto LAB_108285140;
              }
              FUN_108288c68(pmStack_1d0);
              pmVar32 = (mach_header *)0x0;
              if ((mach_header *)auStack_1e0._0_8_ != (mach_header *)0x0) {
                do {
                  func_0x000108288acc();
                  pmVar32 = extraout_x8_04;
                } while (extraout_w11_00 != 0);
              }
              auStack_478 = (undefined1  [8])CONCAT26(auStack_478._6_2_,(int6)auStack_1e0._8_8_);
              pmStack_480 = pmVar32;
              func_0x000108288c50();
            }
          }
          FUN_108287b84(&uStack_2e8);
          func_0x000108288b94();
        }
        func_0x000108288df4();
        pmVar32 = pmStack_480;
        FUN_108287d44();
        pcVar14 = apcStack_380[0];
        if (apcStack_380[0] == (code *)0x0) goto LAB_108285590;
        apcStack_380[0] = (code *)0x0;
        func_0x000108288c2c();
        FUN_108287d44(pcVar14);
        if (((ulong)pmVar32 & 1) == 0) goto LAB_108285590;
      }
      func_0x000108288cbc();
    }
    func_0x00010827a384(auStack_3c0);
  }
LAB_108285884:
  FUN_108287eec(auStack_2c8);
  func_0x000108288e90(uStack_b8);
  if ((bool)uVar19) {
    return;
  }
  ___stack_chk_fail();
LAB_1082858d4:
  func_0x000104bdc2c8();
                    /* WARNING: Does not return */
  pcVar14 = (code *)SoftwareBreakpoint(1,0x1082858dc);
  (*pcVar14)();
}



/* Entry: 108285fec; end: 108286137;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_108285fec(long *param_1,ulong *param_2,ulong *param_3,ulong *param_4,ulong *param_5,
                  long *******param_6,long *******param_7,long *param_8)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  undefined6 uVar6;
  int iVar7;
  long *****ppppplVar8;
  undefined1 in_ZR;
  bool bVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  ulong *puVar13;
  long *******ppppppplVar14;
  long *plVar15;
  long *plVar16;
  undefined8 *puVar17;
  ulong uVar18;
  long ******pppppplVar19;
  int iVar20;
  long *plVar21;
  undefined4 uVar22;
  int extraout_w8;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  long *****extraout_x8_02;
  undefined8 extraout_x8_03;
  ulong extraout_x8_04;
  undefined8 extraout_x8_05;
  long ******extraout_x8_06;
  long *******extraout_x8_07;
  undefined4 extraout_w9;
  undefined8 extraout_x9;
  undefined8 extraout_x9_00;
  long ******extraout_x9_01;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w12;
  int extraout_w12_00;
  ulong *unaff_x20;
  int iVar23;
  ulong *unaff_x21;
  long lVar24;
  long ******pppppplVar25;
  int iVar26;
  ulong *puVar27;
  int iVar28;
  long *******ppppppplVar29;
  long *******ppppppplVar30;
  ulong uVar31;
  ulong uVar32;
  ulong uVar33;
  float fVar34;
  uint uVar35;
  float extraout_s0;
  undefined4 extraout_s0_00;
  undefined4 extraout_s0_01;
  undefined4 extraout_s0_02;
  uint uVar36;
  int iVar37;
  float fVar38;
  undefined4 extraout_s1_00;
  undefined4 extraout_s1_01;
  undefined4 extraout_s1_02;
  float extraout_s1;
  undefined1 auVar39 [16];
  float extraout_s2;
  undefined4 extraout_s2_00;
  undefined4 extraout_s2_01;
  undefined4 extraout_s2_02;
  undefined8 uVar40;
  undefined4 in_s3;
  float fVar41;
  float fVar42;
  undefined1 auVar43 [16];
  undefined8 in_stack_fffffffffffffad0;
  undefined2 uVar45;
  undefined8 uVar44;
  uint uStack_4c0;
  float fStack_4bc;
  uint uStack_4b8;
  ulong uStack_490;
  undefined8 uStack_488;
  ulong uStack_480;
  undefined4 uStack_478;
  undefined2 uStack_474;
  long lStack_470;
  long *******ppppppplStack_468;
  undefined8 uStack_460;
  undefined4 uStack_458;
  undefined2 uStack_454;
  undefined8 uStack_450;
  long ******pppppplStack_448;
  long *******ppppppplStack_440;
  undefined4 uStack_438;
  undefined2 uStack_434;
  undefined8 uStack_430;
  long *******ppppppplStack_428;
  ulong uStack_420;
  undefined4 uStack_418;
  undefined2 uStack_414;
  undefined1 auStack_410 [12];
  undefined4 uStack_404;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  long *******ppppppplStack_3f0;
  long *plStack_3e8;
  undefined8 uStack_3e0;
  undefined4 uStack_3d8;
  undefined4 uStack_3d4;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  long ******pppppplStack_3b8;
  long *******ppppppplStack_3b0;
  ulong uStack_3a8;
  undefined8 uStack_3a0;
  undefined1 uStack_398;
  undefined8 uStack_394;
  ulong uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined4 *puStack_368;
  undefined1 uStack_360;
  undefined8 uStack_35c;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined4 uStack_288;
  long *******ppppppplStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long *****ppppplStack_210;
  ulong auStack_208 [3];
  long *******ppppppplStack_170;
  ulong uStack_168;
  ulong uStack_160;
  undefined8 uStack_158;
  undefined1 uStack_150;
  undefined8 uStack_14c;
  long ******apppppplStack_138 [28];
  undefined8 uStack_58;
  
  puVar27 = param_4;
  puVar13 = param_5;
  ppppppplVar29 = param_6;
  func_0x000108288cdc();
  uVar22 = SUB84(puVar13,0);
  uStack_58 = extraout_x8;
  (**(code **)(*param_1 + 0x40))();
  if (((ulong)param_1 & 1) == 0) {
    uStack_168 = 0;
    uStack_160 = 0;
    uStack_158 = 0;
    uStack_150 = 1;
    uStack_14c = func_0x000108288aec();
    puVar27 = &uStack_168;
    puVar13 = unaff_x21;
    param_2 = param_4;
    param_3 = param_5;
    FUN_1082b8a50();
    if (((ulong)puVar13 & 1) != 0) {
      ppppppplVar29 = (long *******)param_4[2];
      if ((ppppppplVar29 == (long *******)0x0) ||
         (ppppppplVar14 = ppppppplVar29, FUN_108298d90(), ((ulong)ppppppplVar14 & 1) != 0)) {
        if ((param_4[9] & 1) == 0) {
          puVar27 = (ulong *)(ulong)((byte)((byte)unaff_x21[10] >> 1) & 1);
        }
        else {
          puVar27 = (ulong *)0x1;
        }
        FUN_1082d8ff0(apppppplStack_138,param_6);
        param_3 = &uStack_168;
        ppppppplVar29 = apppppplStack_138;
        FUN_1082c338c();
        uVar22 = SUB84(param_5,0);
        func_0x00010827f18c(apppppplStack_138);
        param_2 = unaff_x20;
      }
      else {
        puVar27 = &uStack_168;
        FUN_108283ae0();
        uVar22 = SUB84(param_5,0);
        param_2 = unaff_x21;
        param_3 = unaff_x20;
        param_7 = param_6;
      }
    }
    func_0x00010827ee54();
  }
  func_0x000108288e90(uStack_58);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010827f18c(apppppplStack_138);
  puVar13 = &uStack_168;
  func_0x00010827ee54();
  auVar43 = func_0x000108288afc();
  uStack_400 = ppppppplStack_170;
  uStack_3f8 = uStack_168;
  plVar15 = (long *)*param_3;
  if ((((plVar15 == (long *)0x0) ||
       (uStack_404 = uVar22, ppppppplStack_3f0 = param_7, plStack_3e8 = param_8,
       (**(code **)(*plVar15 + 0x18))(), uVar33 = uStack_160, plVar15 == (long *)0x0)) ||
      (iVar23 = *(int *)(*(long *)(param_2[2] + 0xb8) + 0x30), iVar23 < (int)param_8 - (int)param_7)
      ) || (iVar23 < (int)((ulong)param_8 >> 0x20) - (int)((ulong)param_7 >> 0x20))) {
    *puVar13 = 0;
    return;
  }
  uVar31 = uStack_160 & 0xffffffff;
  FUN_108287f0c(auVar43._0_8_);
  plVar16 = plVar15;
  FUN_108287f0c(auVar43._8_8_);
  ppppppplVar14 = (long *******)&ppppppplStack_3f0;
  plVar21 = plVar15;
  FUN_1082873f8(ppppppplVar14,plVar15,plVar16);
  uStack_290 = 0;
  uStack_298 = (long *******)0x0;
  puVar17 = &uStack_298;
  uStack_378 = (undefined **)ppppppplVar14;
  uStack_370 = (ulong *)plVar21;
  FUN_10838ea90(puVar17,&uStack_378,&uStack_400);
  uVar22 = uStack_404;
  if (((ulong)puVar17 & 1) == 0) {
    iVar23 = (int)uStack_3f8;
    if ((int)ppppppplVar14 < (int)uStack_3f8) {
      iVar37 = (int)uStack_400;
      if ((int)plVar21 <= (int)uStack_400) {
        uStack_3f8 = CONCAT44(uStack_3f8._4_4_,(int)uStack_400 + 1);
        iVar23 = (int)uStack_400 + 1;
      }
    }
    else {
      iVar37 = (int)uStack_3f8 + -1;
      uStack_400 = (long *******)CONCAT44(uStack_400._4_4_,iVar37);
    }
    iVar28 = uStack_3f8._4_4_;
    if ((int)((ulong)ppppppplVar14 >> 0x20) < uStack_3f8._4_4_) {
      iVar26 = uStack_400._4_4_;
      if ((int)((ulong)plVar21 >> 0x20) <= uStack_400._4_4_) {
        uStack_3f8 = CONCAT44(uStack_400._4_4_ + 1,(int)uStack_3f8);
        iVar28 = uStack_400._4_4_ + 1;
      }
    }
    else {
      iVar26 = uStack_3f8._4_4_ + -1;
      uStack_400 = (long *******)CONCAT44(iVar26,(int)uStack_400);
    }
  }
  else {
    uStack_3f8 = uStack_290;
    uVar18 = uStack_3f8;
    uStack_400 = uStack_298;
    ppppppplVar14 = uStack_400;
    uStack_3f8._0_4_ = (int)uStack_290;
    uStack_3f8._4_4_ = (int)(uStack_290 >> 0x20);
    uStack_400._0_4_ = (int)uStack_298;
    uStack_400._4_4_ = (int)((ulong)uStack_298 >> 0x20);
    iVar23 = (int)uStack_3f8;
    iVar28 = uStack_3f8._4_4_;
    iVar37 = (int)uStack_400;
    iVar26 = uStack_400._4_4_;
    uStack_400 = ppppppplVar14;
    uStack_3f8 = uVar18;
  }
  bVar10 = iVar23 - iVar37 != 1;
  iVar23 = 0;
  if (bVar10) {
    iVar23 = (int)plVar15;
  }
  fVar34 = 0.0;
  fVar41 = fVar34;
  if (bVar10) {
    fVar41 = auVar43._0_4_;
  }
  iVar37 = 0;
  if (iVar28 - iVar26 != 1) {
    iVar37 = (int)plVar16;
    fVar34 = auVar43._8_4_;
  }
  if (iVar23 == 0 && iVar37 == 0) {
    func_0x000108288ef0();
    func_0x000108288b80();
    uStack_378 = (undefined **)0x0;
    uStack_370 = (ulong *)0x3f000000;
    func_0x000108288ea4(*(undefined1 *)(*param_3 + 0xcb));
    FUN_1082bfec4(&ppppppplStack_3b0,param_2,puVar27,auStack_410,uVar31);
    FUN_10810a400(auStack_410);
    uVar22 = uStack_404;
    if (ppppppplStack_3b0 == (long *******)0x0) {
      *puVar13 = 0;
    }
    else {
      uStack_420 = *param_3;
      *param_3 = 0;
      uStack_418 = (undefined4)param_3[1];
      uStack_414 = *(undefined2 *)((long)param_3 + 0xc);
      FUN_10817500c(&uStack_400);
      uStack_378 = (undefined **)CONCAT44(extraout_s1_00,extraout_s0_00);
      uStack_370 = (ulong *)CONCAT44(in_s3,extraout_s2_00);
      FUN_10817500c(&ppppppplStack_3f0);
      uStack_298 = (long *******)CONCAT44(extraout_s1_01,extraout_s0_01);
      uStack_290 = CONCAT44(in_s3,extraout_s2_01);
      func_0x000108288b34();
      FUN_1082cdf9c(&ppppppplStack_228,&uStack_420,uVar22);
      func_0x000108288cc4();
      func_0x000108288b80(ppppppplStack_3b0);
      func_0x000108288e84(extraout_w8 - extraout_w10_01);
      ppppppplStack_428 = ppppppplStack_228;
      uStack_378 = (undefined **)0x0;
      ppppppplStack_228 = (long *******)0x0;
      uStack_370 = (ulong *)extraout_x8_05;
      FUN_108287478();
      ppppppplVar29 = ppppppplStack_428;
      ppppppplStack_428 = (long *******)0x0;
      if (ppppppplVar29 != (long *******)0x0) {
        func_0x000108288a38();
      }
      ppppppplVar29 = ppppppplStack_3b0;
      ppppppplStack_3b0 = (long *******)0x0;
      *puVar13 = (ulong)ppppppplVar29;
      ppppppplVar29 = ppppppplStack_228;
      ppppppplStack_228 = (long *******)0x0;
      if (ppppppplVar29 != (long *******)0x0) {
        func_0x000108288a38();
      }
    }
    func_0x000108288d88();
    return;
  }
  bVar10 = false;
  bVar9 = true;
  if (fVar34 <= 4.0) {
    bVar10 = false;
    bVar9 = true;
    if (!NAN(fVar41)) {
      bVar10 = fVar41 == 4.0;
      bVar9 = 4.0 <= fVar41;
    }
  }
  if (bVar9 && !bVar10) {
    uStack_450 = 0;
    if (*ppppppplVar29 != (long ******)0x0) {
      do {
        func_0x000108288a64();
        uStack_450 = extraout_x8_00;
      } while (extraout_w10 != 0);
    }
    FUN_10828adb8(&uStack_298,puVar27);
    FUN_10810a400(&uStack_450);
    uVar45 = (undefined2)((ulong)in_stack_fffffffffffffad0 >> 0x30);
    uStack_460 = 0;
    uStack_378 = (undefined **)param_2;
    if (*param_3 != 0) {
      do {
        func_0x000108288acc();
        uVar45 = (undefined2)((ulong)in_stack_fffffffffffffad0 >> 0x30);
        uStack_460 = extraout_x8_01;
      } while (extraout_w11 != 0);
    }
    uStack_458 = (undefined4)param_3[1];
    uStack_454 = *(undefined2 *)((long)param_3 + 0xc);
    FUN_1082a72f8(&uStack_380,&uStack_378,&uStack_460,&uStack_298);
    func_0x000108288bc4();
    fVar38 = 4.0 / fVar41;
    if (fVar41 <= 4.0) {
      fVar38 = 1.0;
    }
    fVar41 = 4.0 / fVar34;
    if (fVar34 <= 4.0) {
      fVar41 = 1.0;
    }
    fVar42 = SUB84(uStack_400,0);
    uVar40 = NEON_scvtf(CONCAT44((int)(uStack_3f8 >> 0x20) - (int)((ulong)uStack_400 >> 0x20),
                                 (int)uStack_3f8 - (int)fVar42),4);
    fVar34 = (float)uVar40;
    fStack_4bc = (float)((ulong)uVar40 >> 0x20);
    uVar40 = NEON_fminnm(CONCAT44((int)(fVar41 * fStack_4bc),(int)(fVar38 * fVar34)),
                         0x4effffff4effffff,4);
    uVar40 = NEON_fmaxnm(uVar40,0xceffffffceffffff,4);
    auVar43._0_8_ =
         NEON_smax(CONCAT44((int)(float)((ulong)uVar40 >> 0x20),(int)(float)uVar40),0x100000001,4);
    uVar40 = *(undefined8 *)(uStack_380 + 8);
    if (uStack_298 != (long *******)0x0) {
      do {
        cVar5 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(uStack_298,0x10);
        if (bVar10) {
          *(int *)uStack_298 = *(int *)uStack_298 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    ppppppplStack_468 = uStack_298;
    uStack_378 = (undefined **)0x0;
    uStack_370 = (ulong *)0x3f000000;
    uVar36 = (uint)(auVar43._0_8_ >> 0x20);
    uVar35 = (uint)auVar43._0_8_;
    FUN_1082bfec4(&pppppplStack_3b8,uVar40,uStack_288,&ppppppplStack_468,0,
                  CONCAT44(uVar36 + 2,uVar35 + 2),&uStack_378,&UNK_10f48139f,0x1a,1,
                  (int)(((ulong)CONCAT21(uVar45,*(undefined1 *)(*(long *)(uStack_380 + 0x10) + 0xcb)
                                        ) << 0x28) >> 0x20),*(undefined4 *)(uStack_380 + 0x18));
    FUN_10810a400(&ppppppplStack_468);
    pppppplVar25 = pppppplStack_3b8;
    if (pppppplStack_3b8 != (long ******)0x0) {
      uStack_378 = (undefined **)0x0;
      puVar17 = &uStack_378;
      uVar40 = 1;
      uStack_370 = (ulong *)auVar43._0_8_;
      FUN_108287534(puVar17,1,1);
      FUN_1082bdf60(uStack_380,pppppplVar25,puVar17,uVar40,uStack_400,uStack_3f8,0,2);
      ppppppplVar14 = uStack_400;
      if ((uStack_380 & 1) != 0) {
        uStack_378 = (undefined **)&pppppplStack_3b8;
        uStack_370 = &uStack_380;
        puStack_368 = &uStack_404;
        iVar37 = (int)uStack_400;
        iVar28 = uStack_400._4_4_;
        iVar26 = (int)uStack_3f8;
        iVar7 = uStack_3f8._4_4_;
        iVar23 = uStack_3f8._4_4_ - uStack_400._4_4_;
        uVar1 = uVar36;
        if (0x7ffffffd < uVar36) {
          uVar1 = 0x7ffffffe;
        }
        iVar11 = (int)(float)(int)uStack_400;
        FUN_108219ff8(iVar11,uStack_400._4_4_,1);
        func_0x000108288bf0();
        FUN_108287590(&uStack_378,0x100000000,(ulong)(uVar1 + 1) << 0x20 | 1);
        uVar1 = uVar35;
        if (0x7ffffffd < uVar35) {
          uVar1 = 0x7ffffffe;
        }
        iVar20 = (int)(float)iVar28;
        func_0x000108288b70();
        func_0x000108288bf0();
        FUN_108287590(&uStack_378,1,(ulong)(uVar1 + 1) | 0x100000000);
        uVar18 = (ulong)(uVar35 + 1);
        uVar40 = 1;
        uVar31 = uVar18;
        FUN_108219ff8(uVar18,1,1,uVar36);
        iVar12 = (int)(float)(iVar26 + -1);
        FUN_108219ff8(iVar12,iVar28,1,iVar23);
        func_0x000108288bf0();
        FUN_108287590(&uStack_378,uVar31,uVar40);
        uVar32 = (ulong)(uVar36 + 1);
        uVar40 = 1;
        uVar31 = uVar32;
        func_0x000108288b70(1,uVar32,auVar43._0_8_ & 0xffffffff);
        iVar23 = (int)(float)(iVar7 + -1);
        func_0x000108288b70((ulong)ppppppplVar14 & 0xffffffff,iVar23,iVar26 - iVar37);
        func_0x000108288bf0();
        FUN_108287590(&uStack_378,uVar40,uVar31);
        func_0x000108288aa4(iVar11,iVar20);
        func_0x000108288bf0();
        FUN_108287590(&uStack_378,0,0x100000001);
        if (0x7ffffffc < uVar35) {
          uVar35 = 0x7ffffffd;
        }
        func_0x000108288aa4(iVar12,iVar20);
        func_0x000108288bf0();
        FUN_108287590(&uStack_378,uVar18,(ulong)(uVar35 + 2) | 0x100000000);
        uVar31 = uVar32;
        func_0x000108288aa4(uVar18,uVar32);
        func_0x000108288aa4(iVar12,iVar23);
        func_0x000108288bf0();
        FUN_108287590(&uStack_378,uVar18,uVar31);
        if (0x7ffffffc < uVar36) {
          uVar36 = 0x7ffffffd;
        }
        func_0x000108288aa4(iVar11,iVar23);
        func_0x000108288bf0();
        FUN_108287590(&uStack_378,uVar32 << 0x20,(ulong)(uVar36 + 2) << 0x20 | 1);
        uVar40 = 0;
        if (pppppplStack_3b8[2] != (long *****)0x0) {
          do {
            func_0x000108288adc();
            pppppplStack_3b8 = (long ******)extraout_x8_02;
            uVar40 = extraout_x9;
          } while (extraout_w12 != 0);
        }
        uStack_370 = (ulong *)CONCAT26(uStack_370._6_2_,*(undefined6 *)(pppppplStack_3b8 + 3));
        uStack_378 = (undefined **)uVar40;
        FUN_108279f20(param_3,&uStack_378);
        FUN_108287d44(uStack_378);
        pppppplVar25 = (long ******)&pppppplStack_3b8;
        FUN_10827f608(pppppplVar25,0);
        func_0x000108288d34();
        if (pppppplVar25 != (long ******)0x0) {
          func_0x000108288a38();
        }
        uVar31 = (ulong)(uint)-(int)uStack_400 - ((ulong)uStack_400 & 0xffffffff00000000);
        ppppppplVar14 = (long *******)&ppppppplStack_3f0;
        FUN_108287688();
        auVar43._8_8_ = auVar43._0_8_;
        auVar43 = NEON_ucvtf(auVar43,4);
        uStack_378 = (undefined **)ppppppplVar14;
        uStack_370 = (ulong *)uVar31;
        FUN_10817500c(&uStack_378);
        auVar39 = NEON_fmov(0x3f800000,4);
        uStack_3c8 = CONCAT44((auVar43._12_4_ / fStack_4bc) * fVar42 + auVar39._12_4_,
                              (auVar43._8_4_ / fVar34) * extraout_s2 + auVar39._8_4_);
        uStack_3d0 = (long ******)
                     CONCAT44((auVar43._4_4_ / fStack_4bc) * extraout_s1 + auVar39._4_4_,
                              (auVar43._0_4_ / fVar34) * extraout_s0 + auVar39._0_4_);
        puVar17 = &uStack_3d0;
        func_0x00010812f180();
        uStack_4c0 = (uint)puVar17;
        uStack_4b8 = (uint)((ulong)puVar17 >> 0x20);
        uStack_4c0 = uStack_4c0 ^
                     (uStack_4c0 ^ 0x80000001) & ~-(uint)(-0x7fffffff < (int)uStack_4c0);
        uStack_4b8 = uStack_4b8 ^
                     (uStack_4b8 ^ 0x80000001) & ~-(uint)(-0x7fffffff < (long)puVar17 >> 0x20);
        uStack_480 = *param_3;
        uVar40 = *(undefined8 *)(uStack_480 + 0x90);
        *param_3 = 0;
        uStack_478 = (undefined4)param_3[1];
        uStack_474 = *(undefined2 *)((long)param_3 + 0xc);
        uStack_488 = 0;
        if (*ppppppplVar29 != (long ******)0x0) {
          do {
            func_0x000108288acc();
            uVar40 = extraout_x8_03;
            uStack_488 = extraout_x9_00;
          } while (extraout_w11_00 != 0);
        }
        uVar44 = 0;
        FUN_108286138(&lStack_470,param_2,&uStack_480,puVar27);
        FUN_10810a400(&uStack_488);
        FUN_108287d44(uStack_480);
        lVar24 = lStack_470;
        if (lStack_470 == 0) {
          *puVar13 = 0;
        }
        else {
          auVar39._0_4_ = -uStack_4c0;
          auVar39._4_4_ = -uStack_4b8;
          auVar39._8_4_ = -uStack_4c0;
          auVar39._12_4_ = -uStack_4b8;
          auVar43 = NEON_scvtf(auVar39,4);
          uStack_3c8 = CONCAT44(uStack_3c8._4_4_ + auVar43._12_4_,(float)uStack_3c8 + auVar43._8_4_)
          ;
          uStack_3d0 = (long ******)
                       CONCAT44(uStack_3d0._4_4_ + auVar43._4_4_,(float)uStack_3d0 + auVar43._0_4_);
          lStack_470 = 0;
          auVar43 = func_0x000108288ef0(plStack_3e8,ppppppplStack_3f0);
          pppppplVar25 = *(long *******)(lVar24 + 0x10);
          uStack_490 = extraout_x8_04;
          if (pppppplVar25 == (long ******)0x0) {
LAB_108286f14:
            *puVar13 = 0;
          }
          else {
            iVar23 = auVar43._0_4_ - auVar43._8_4_;
            iVar37 = auVar43._4_4_ - auVar43._12_4_;
            do {
              func_0x000108288a64();
              uVar22 = (undefined4)((ulong)uVar44 >> 0x20);
            } while (extraout_w10_00 != 0);
            uVar4 = *(undefined4 *)(lVar24 + 0x18);
            uVar6 = *(undefined6 *)(lVar24 + 0x18);
            pppppplVar19 = pppppplVar25;
            (*(code *)(*pppppplVar25)[3])();
            if (pppppplVar19 == (long ******)0x0) goto LAB_108286f14;
            uVar2 = *(undefined4 *)(lVar24 + 0x30);
            uVar3 = *(undefined4 *)(lVar24 + 0x34);
            func_0x000108288b04();
            auStack_208[0] = uStack_490;
            uStack_490 = 0;
            uStack_378 = (undefined **)0x0;
            uStack_370 = (ulong *)0x3f000000;
            uVar40 = CONCAT44((int)(CONCAT35((int3)((ulong)uVar40 >> 0x28),0x100000000) >> 0x20),
                              uVar4);
            func_0x000108288ea4(*(undefined1 *)((long)pppppplVar25 + 0xcb));
            FUN_1082bfec4(&uStack_3e0,param_2,uVar2,auStack_208,uVar33 & 0xffffffff,
                          CONCAT44(iVar37,iVar23),&uStack_378,&UNK_10f481b53,0x1b,extraout_w9,uVar22
                          ,uVar40);
            FUN_10810a400(auStack_208);
            if (uStack_3e0 == (long *******)0x0) {
              *puVar13 = 0;
            }
            else {
              uStack_378 = (undefined **)0x0;
              uStack_370 = (ulong *)0x0;
              puStack_368 = (undefined4 *)0x0;
              uStack_360 = 1;
              uStack_35c = func_0x000108288aec();
              uStack_3a8 = CONCAT26(uStack_3a8._6_2_,uVar6);
              ppppppplStack_3b0 = (long *******)pppppplVar25;
              func_0x000108288b34();
              FUN_1082cdf9c(&ppppplStack_210,&ppppppplStack_3b0,uVar3);
              func_0x000108288d70();
              uStack_218 = ppppplStack_210;
              ppppplStack_210 = (long *****)0x0;
              FUN_108288160(&uStack_378,&uStack_218);
              ppppplVar8 = uStack_218;
              uStack_218 = (long *****)0x0;
              if (ppppplVar8 != (long *****)0x0) {
                func_0x000108288a38();
              }
              uStack_378 = &PTR_PTR_110a38218;
              uStack_360 = 0;
              uStack_220 = NEON_scvtf(CONCAT44(iVar37,iVar23),4);
              ppppppplStack_228 = (long *******)0x0;
              func_0x000108288ec4(uStack_3e0);
              func_0x000108288dd0();
              ppppppplVar29 = uStack_3e0;
              uStack_3e0 = (long *******)0x0;
              *puVar13 = (ulong)ppppppplVar29;
              ppppplVar8 = ppppplStack_210;
              ppppplStack_210 = (long *****)0x0;
              if (ppppplVar8 != (long *****)0x0) {
                func_0x000108288a38();
              }
              func_0x00010827ee54(&uStack_378);
              pppppplVar25 = (long ******)0x0;
            }
            FUN_10827f5e4(&uStack_3e0);
            lVar24 = 0;
          }
          FUN_108287d44(pppppplVar25);
          FUN_10810a400(&uStack_490);
          if (lVar24 != 0) {
            func_0x000108288b04();
          }
        }
        FUN_10827f5e4(&lStack_470);
        goto LAB_1082871b8;
      }
    }
    *puVar13 = 0;
LAB_1082871b8:
    pppppplVar25 = (long ******)&pppppplStack_3b8;
    FUN_10827f5e4();
    func_0x000108288d34();
    if (pppppplVar25 != (long ******)0x0) {
      func_0x000108288a38();
    }
    func_0x00010828afb8(&uStack_298);
    return;
  }
  if (((0 < iVar23 && 0 < iVar37) && (int)((iVar23 << 1 | 1U) * (iVar37 << 1 | 1U)) < 0x1d) &&
     ((*(byte *)(*(long *)(*(long *)(param_2[2] + 0xb8) + 0x10) + 99) & 1) == 0)) {
    ppppppplVar29 = (long *******)*param_3;
    *param_3 = 0;
    uVar31 = param_3[1];
    func_0x000108288ef0();
    uStack_430 = 0;
    func_0x000108288b80();
    uStack_378 = (undefined **)0x0;
    uStack_370 = (ulong *)0x3f000000;
    func_0x000108288ea4(*(undefined1 *)((long)ppppppplVar29 + 0xcb));
    FUN_1082bfec4(auStack_208,param_2,puVar27,&ppppplStack_210,uVar33 & 0xffffffff);
    FUN_10810a400(&ppppplStack_210);
    if (auStack_208[0] == 0) {
      *puVar13 = 0;
    }
    else {
      uStack_218 = (long *****)CONCAT44(iVar37,iVar23);
      ppppplVar8 = uStack_218;
      FUN_10833756c(fVar41,fVar34,uStack_218,&uStack_298);
      func_0x000108337574(ppppplVar8,&uStack_378);
      uStack_220 = CONCAT26(uStack_220._6_2_,(int6)uVar31);
      ppppppplStack_228 = ppppppplVar29;
      FUN_108287fec(&uStack_380,
                    *(undefined8 *)(*(long *)(*(long *)(auStack_208[0] + 8) + 0x10) + 0xb8),
                    &ppppppplStack_228,2,0,0x100000000,&uStack_400,&ppppppplStack_3f0,iVar23,iVar37)
      ;
      FUN_108287d44(ppppppplStack_228);
      pppppplVar19 = (long ******)&uStack_218;
      FUN_108337840();
      pppppplVar25 = pppppplVar19;
      FUN_108287aa8();
      func_0x000108288c60();
      if (pppppplVar19 != (long ******)0x0) {
        do {
          func_0x000108288a64();
        } while (extraout_w10_02 != 0);
      }
      ppppppplStack_3b0 = (long *******)pppppplVar19;
      FUN_1082cc5c8(pppppplVar25,&ppppppplStack_3b0,&UNK_10f481b11,0);
      FUN_108154c00(&ppppppplStack_3b0);
      uVar35 = *(uint *)(pppppplVar25 + 10);
      _memcpy(pppppplVar25 + 0xd,&uStack_298,0x70);
      _memcpy(pppppplVar25 + 0x1b,&uStack_378,0xe0);
      FUN_108288188(pppppplVar25,pppppplVar25 + 0x37,(long)(pppppplVar25 + 0xd) + (ulong)uVar35 + 2,
                    &UNK_10f47d354,&uStack_380);
      ppppppplStack_3b0 = (long *******)0x0;
      uStack_3a8 = 0;
      uStack_3a0 = 0;
      uStack_398 = 1;
      uStack_394 = func_0x000108288aec();
      pppppplStack_3b8 = pppppplVar25;
      FUN_108288160(&ppppppplStack_3b0,&pppppplStack_3b8);
      pppppplVar25 = pppppplStack_3b8;
      pppppplStack_3b8 = (long ******)0x0;
      if (pppppplVar25 != (long ******)0x0) {
        func_0x000108288a38();
      }
      uVar33 = auStack_208[0];
      ppppppplStack_3b0 = (long *******)&PTR_PTR_110a38218;
      uStack_398 = 0;
      uStack_3d0 = (long ******)0x0;
      uStack_3c8 = NEON_scvtf(CONCAT44((int)((ulong)plStack_3e8 >> 0x20) -
                                       (int)((ulong)ppppppplStack_3f0 >> 0x20),
                                       (int)plStack_3e8 - (int)ppppppplStack_3f0),4);
      FUN_10817500c(&ppppppplStack_3f0);
      uStack_3e0 = (long *******)CONCAT44(extraout_s1_02,extraout_s0_02);
      uStack_3d8 = extraout_s2_02;
      uStack_3d4 = in_s3;
      func_0x000108288ec4();
      func_0x000108288dd0(uVar33);
      uVar33 = auStack_208[0];
      auStack_208[0] = 0;
      *puVar13 = uVar33;
      ppppppplVar29 = (long *******)&ppppppplStack_3b0;
      func_0x00010827ee54();
      func_0x000108288d34();
      if (ppppppplVar29 != (long *******)0x0) {
        func_0x000108288a38();
      }
      ppppppplVar29 = (long *******)0x0;
    }
    FUN_10827f5e4(auStack_208);
    FUN_10810a400(&uStack_430);
    goto LAB_108287180;
  }
  ppppppplVar30 = (long *******)*param_3;
  *param_3 = 0;
  uStack_438 = (undefined4)param_3[1];
  uStack_434 = *(undefined2 *)((long)param_3 + 0xc);
  func_0x000108288ef0();
  plVar15 = plStack_3e8;
  ppppppplVar14 = ppppppplStack_3f0;
  uVar33 = uStack_3f8;
  ppppppplVar29 = uStack_400;
  uVar18 = (ulong)uStack_400 >> 0x20;
  uVar31 = uStack_3f8 >> 0x20;
  ppppppplStack_228 = (long *******)0x0;
  pppppplStack_448 = extraout_x8_06;
  ppppppplStack_440 = ppppppplVar30;
  if (iVar23 < 1) {
LAB_1082870d4:
    ppppppplVar14 = ppppppplStack_228;
    pppppplVar25 = pppppplStack_448;
    if (iVar37 == 0) {
      ppppppplStack_228 = (long *******)0x0;
      *puVar13 = (ulong)ppppppplVar14;
    }
    else {
      uStack_378 = (undefined **)ppppppplStack_440;
      uStack_370._0_6_ = CONCAT24(uStack_434,uStack_438);
      pppppplStack_448 = (long ******)0x0;
      ppppppplStack_440 = (long *******)0x0;
      ppppppplStack_3b0 = (long *******)pppppplVar25;
      FUN_1082881e0(fVar34,puVar13,param_2,&uStack_378,puVar27,uVar22,
                    (ulong)ppppppplVar29 & 0xffffffff | uVar18 << 0x20,
                    uVar33 & 0xffffffff | uVar31 << 0x20);
      FUN_10810a400(&ppppppplStack_3b0);
      FUN_108287d44(uStack_378);
    }
  }
  else {
    uStack_378 = (undefined **)ppppppplStack_3f0;
    uStack_370 = (ulong *)plStack_3e8;
    uStack_4c0 = (uint)ppppppplStack_3f0;
    if (iVar37 != 0) {
      func_0x000108287690(&uStack_378,0,iVar37);
      iVar28 = (int)((ulong)ppppppplVar29 >> 0x20);
      if (iVar28 < uStack_370._4_4_) {
        iVar26 = (int)(uVar33 >> 0x20);
        if (uStack_378._4_4_ < iVar26) {
          if (uStack_378._4_4_ <= iVar28) {
            uStack_378._4_4_ = iVar28;
          }
          if (iVar26 <= uStack_370._4_4_) {
            uStack_370._4_4_ = iVar26;
          }
        }
        else {
          uStack_378._4_4_ = iVar26 + -1;
          uStack_370._4_4_ = iVar26;
        }
      }
      else {
        uStack_378._4_4_ = iVar28;
        uStack_370._4_4_ = iVar28 + 1;
      }
      iVar26 = (int)ppppppplVar29 - iVar23;
      iVar28 = iVar26 + 1;
      iVar23 = iVar23 + (int)uVar33 + -1;
      if ((int)uStack_378 <= iVar28) {
        uStack_378._0_4_ = iVar26 + 1;
      }
      if ((int)uStack_370 <= iVar28) {
        uStack_378._0_4_ = (int)uStack_370 + -1;
      }
      iVar28 = iVar23;
      if ((int)uStack_370 <= iVar23) {
        iVar28 = (int)uStack_370;
      }
      if (iVar23 <= (int)uStack_378) {
        iVar28 = (int)uStack_378 + 1;
      }
      uStack_370 = (ulong *)CONCAT44(uStack_370._4_4_,iVar28);
    }
    ppppppplStack_440 = (long *******)0x0;
    uStack_290._0_6_ = CONCAT24(uStack_434,uStack_438);
    if (pppppplStack_448 != (long ******)0x0) {
      do {
        cVar5 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(pppppplStack_448,0x10);
        if (bVar10) {
          *(int *)pppppplStack_448 = *(int *)pppppplStack_448 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    uStack_3d0 = pppppplStack_448;
    uStack_298 = ppppppplVar30;
    FUN_1082881e0(fVar41,&ppppppplStack_3b0,param_2,&uStack_298,puVar27,uVar22,ppppppplVar29,uVar33)
    ;
    ppppppplVar29 = ppppppplStack_3b0;
    ppppppplStack_3b0 = (long *******)0x0;
    FUN_10827f608(&ppppppplStack_228,ppppppplVar29);
    func_0x000108288d88();
    FUN_10810a400(&uStack_3d0);
    FUN_108287d44(uStack_298);
    if (ppppppplStack_228 != (long *******)0x0) {
      pppppplVar25 = (long ******)0x0;
      ppppppplVar29 = ppppppplStack_228;
      if (ppppppplStack_228[2] != (long ******)0x0) {
        do {
          func_0x000108288adc();
          ppppppplVar29 = extraout_x8_07;
          pppppplVar25 = extraout_x9_01;
        } while (extraout_w12_00 != 0);
      }
      uStack_3a8 = CONCAT26(uStack_3a8._6_2_,*(undefined6 *)(ppppppplVar29 + 3));
      ppppppplStack_3b0 = (long *******)pppppplVar25;
      FUN_108279f20(&ppppppplStack_440,&ppppppplStack_3b0);
      func_0x000108288d70();
      uStack_3e0 = (long *******)uStack_378;
      ppppppplStack_3b0 = ppppppplVar14;
      FUN_108288628(&ppppppplStack_3b0,&uStack_3e0);
      uStack_3a8 = (long)plVar15 - ((ulong)ppppppplVar14 & 0xffffffff00000000) & 0xffffffff00000000
                   | (ulong)((int)plVar15 - uStack_4c0);
      ppppppplStack_3b0 = (long *******)0x0;
      FUN_108287688();
      uVar18 = 0;
      uVar31 = (ulong)(uint)(uStack_370._4_4_ - uStack_378._4_4_);
      ppppppplVar29 = (long *******)0x0;
      uVar33 = (ulong)(uint)((int)uStack_370 - (int)uStack_378);
      goto LAB_1082870d4;
    }
    *puVar13 = 0;
  }
  FUN_10827f5e4(&ppppppplStack_228);
  FUN_10810a400(&pppppplStack_448);
  ppppppplVar29 = ppppppplStack_440;
LAB_108287180:
  FUN_108287d44(ppppppplVar29);
  return;
}



/* Entry: 108286138; end: 1082873f7;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_108286138(float param_1,float param_2,undefined8 param_3,undefined4 param_4,long *param_5,
                  long param_6,long *param_7,undefined8 param_8,undefined4 param_9,long *param_10,
                  int *******param_11,long *param_12,int *******param_13,ulong param_14,
                  undefined4 param_15)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  undefined6 uVar6;
  int iVar7;
  int *******pppppppiVar8;
  int *****pppppiVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  long *plVar14;
  long *plVar15;
  undefined8 *puVar16;
  ulong uVar17;
  int ******ppppppiVar18;
  int iVar19;
  long *plVar20;
  ulong uVar21;
  int extraout_w8;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  int *****extraout_x8_01;
  undefined8 extraout_x8_02;
  long extraout_x8_03;
  undefined8 extraout_x8_04;
  int ******extraout_x8_05;
  int *******extraout_x8_06;
  undefined4 extraout_w9;
  undefined8 extraout_x9;
  undefined8 extraout_x9_00;
  int ******extraout_x9_01;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w12;
  int extraout_w12_00;
  int iVar22;
  long lVar23;
  int ******ppppppiVar24;
  int iVar25;
  int iVar26;
  int *******pppppppiVar27;
  int *******pppppppiVar28;
  ulong uVar29;
  uint uVar30;
  float extraout_s0;
  undefined4 extraout_s0_00;
  undefined4 extraout_s0_01;
  undefined4 extraout_s0_02;
  uint uVar32;
  int iVar33;
  undefined1 auVar31 [16];
  float fVar34;
  float extraout_s1;
  undefined4 extraout_s1_00;
  undefined4 extraout_s1_01;
  undefined4 extraout_s1_02;
  undefined1 auVar35 [16];
  float fVar36;
  float extraout_s2;
  undefined4 extraout_s2_00;
  undefined4 extraout_s2_01;
  undefined4 extraout_s2_02;
  undefined8 uVar37;
  float fVar38;
  float fVar39;
  undefined8 in_stack_fffffffffffffc40;
  undefined2 uVar42;
  undefined8 uVar40;
  undefined4 uVar41;
  uint uStack_350;
  float fStack_34c;
  uint uStack_348;
  long lStack_320;
  undefined8 uStack_318;
  long lStack_310;
  undefined4 uStack_308;
  undefined2 uStack_304;
  long lStack_300;
  int *******pppppppiStack_2f8;
  undefined8 uStack_2f0;
  undefined4 uStack_2e8;
  undefined2 uStack_2e4;
  undefined8 uStack_2e0;
  int ******ppppppiStack_2d8;
  int *******pppppppiStack_2d0;
  undefined4 uStack_2c8;
  undefined2 uStack_2c4;
  undefined8 uStack_2c0;
  int *******pppppppiStack_2b8;
  long lStack_2b0;
  undefined4 uStack_2a8;
  undefined2 uStack_2a4;
  undefined1 auStack_2a0 [12];
  undefined4 uStack_294;
  undefined8 uStack_290;
  undefined8 uStack_288;
  int *******pppppppiStack_280;
  long *plStack_278;
  undefined8 uStack_270;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined8 uStack_260;
  undefined8 uStack_258;
  int ******ppppppiStack_248;
  int *******pppppppiStack_240;
  ulong uStack_238;
  undefined8 uStack_230;
  undefined1 uStack_228;
  undefined8 uStack_224;
  ulong uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined4 *puStack_1f8;
  undefined1 uStack_1f0;
  undefined8 uStack_1ec;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined4 uStack_118;
  int *******pppppppiStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  int *****pppppiStack_a0;
  long alStack_98 [3];
  
  uStack_290 = param_13;
  uStack_288 = param_14;
  plVar14 = (long *)*param_7;
  if ((((plVar14 == (long *)0x0) ||
       (uStack_294 = param_9, pppppppiStack_280 = param_11, plStack_278 = param_12,
       (**(code **)(*plVar14 + 0x18))(), plVar14 == (long *)0x0)) ||
      (iVar22 = *(int *)(*(long *)(*(long *)(param_6 + 0x10) + 0xb8) + 0x30),
      iVar22 < (int)param_12 - (int)param_11)) ||
     (iVar22 < (int)((ulong)param_12 >> 0x20) - (int)((ulong)param_11 >> 0x20))) {
    *param_5 = 0;
    return;
  }
  FUN_108287f0c();
  plVar15 = plVar14;
  FUN_108287f0c();
  pppppppiVar28 = (int *******)&pppppppiStack_280;
  plVar20 = plVar14;
  FUN_1082873f8(pppppppiVar28,plVar14,plVar15);
  uStack_120 = 0;
  uStack_128 = (int *******)0x0;
  puVar16 = &uStack_128;
  uStack_208 = (undefined **)pppppppiVar28;
  uStack_200 = (ulong *)plVar20;
  FUN_10838ea90(puVar16,&uStack_208,&uStack_290);
  uVar41 = uStack_294;
  if (((ulong)puVar16 & 1) == 0) {
    iVar22 = (int)uStack_288;
    if ((int)pppppppiVar28 < (int)uStack_288) {
      iVar33 = (int)uStack_290;
      if ((int)plVar20 <= (int)uStack_290) {
        uStack_288 = CONCAT44(uStack_288._4_4_,(int)uStack_290 + 1);
        iVar22 = (int)uStack_290 + 1;
      }
    }
    else {
      iVar33 = (int)uStack_288 + -1;
      uStack_290 = (int *******)CONCAT44(uStack_290._4_4_,iVar33);
    }
    iVar26 = uStack_288._4_4_;
    if ((int)((ulong)pppppppiVar28 >> 0x20) < uStack_288._4_4_) {
      iVar25 = uStack_290._4_4_;
      if ((int)((ulong)plVar20 >> 0x20) <= uStack_290._4_4_) {
        uStack_288 = CONCAT44(uStack_290._4_4_ + 1,(int)uStack_288);
        iVar26 = uStack_290._4_4_ + 1;
      }
    }
    else {
      iVar25 = uStack_288._4_4_ + -1;
      uStack_290 = (int *******)CONCAT44(iVar25,(int)uStack_290);
    }
  }
  else {
    uStack_288 = uStack_120;
    uVar21 = uStack_288;
    uStack_290 = uStack_128;
    pppppppiVar28 = uStack_290;
    uStack_288._0_4_ = (int)uStack_120;
    uStack_288._4_4_ = (int)(uStack_120 >> 0x20);
    uStack_290._0_4_ = (int)uStack_128;
    uStack_290._4_4_ = (int)((ulong)uStack_128 >> 0x20);
    iVar22 = (int)uStack_288;
    iVar26 = uStack_288._4_4_;
    iVar33 = (int)uStack_290;
    iVar25 = uStack_290._4_4_;
    uStack_290 = pppppppiVar28;
    uStack_288 = uVar21;
  }
  bVar11 = iVar22 - iVar33 != 1;
  iVar22 = 0;
  if (bVar11) {
    iVar22 = (int)plVar14;
  }
  fVar38 = 0.0;
  if (bVar11) {
    fVar38 = param_1;
  }
  iVar33 = 0;
  fVar36 = 0.0;
  if (iVar26 - iVar25 != 1) {
    iVar33 = (int)plVar15;
    fVar36 = param_2;
  }
  if (iVar22 == 0 && iVar33 == 0) {
    func_0x000108288ef0();
    func_0x000108288b80();
    uStack_208 = (undefined **)0x0;
    uStack_200 = (ulong *)0x3f000000;
    func_0x000108288ea4(*(undefined1 *)(*param_7 + 0xcb));
    FUN_1082bfec4(&pppppppiStack_240,param_6,param_8,auStack_2a0,param_15);
    FUN_10810a400(auStack_2a0);
    uVar41 = uStack_294;
    if (pppppppiStack_240 == (int *******)0x0) {
      *param_5 = 0;
    }
    else {
      lStack_2b0 = *param_7;
      *param_7 = 0;
      uStack_2a8 = (undefined4)param_7[1];
      uStack_2a4 = *(undefined2 *)((long)param_7 + 0xc);
      FUN_10817500c(&uStack_290);
      uStack_208 = (undefined **)CONCAT44(extraout_s1_00,extraout_s0_00);
      uStack_200 = (ulong *)CONCAT44(param_4,extraout_s2_00);
      FUN_10817500c(&pppppppiStack_280);
      uStack_128 = (int *******)CONCAT44(extraout_s1_01,extraout_s0_01);
      uStack_120 = CONCAT44(param_4,extraout_s2_01);
      func_0x000108288b34();
      FUN_1082cdf9c(&pppppppiStack_b8,&lStack_2b0,uVar41);
      func_0x000108288cc4();
      func_0x000108288b80(pppppppiStack_240);
      func_0x000108288e84(extraout_w8 - extraout_w10_01);
      pppppppiStack_2b8 = pppppppiStack_b8;
      uStack_208 = (undefined **)0x0;
      pppppppiStack_b8 = (int *******)0x0;
      uStack_200 = (ulong *)extraout_x8_04;
      FUN_108287478();
      pppppppiVar28 = pppppppiStack_2b8;
      pppppppiStack_2b8 = (int *******)0x0;
      if (pppppppiVar28 != (int *******)0x0) {
        func_0x000108288a38();
      }
      pppppppiVar8 = pppppppiStack_b8;
      pppppppiVar28 = pppppppiStack_240;
      pppppppiStack_240 = (int *******)0x0;
      *param_5 = (long)pppppppiVar28;
      pppppppiStack_b8 = (int *******)0x0;
      if (pppppppiVar8 != (int *******)0x0) {
        func_0x000108288a38();
      }
    }
    func_0x000108288d88();
    return;
  }
  bVar11 = false;
  bVar10 = true;
  if (fVar36 <= 4.0) {
    bVar11 = false;
    bVar10 = true;
    if (!NAN(fVar38)) {
      bVar11 = fVar38 == 4.0;
      bVar10 = 4.0 <= fVar38;
    }
  }
  if (bVar10 && !bVar11) {
    uStack_2e0 = 0;
    if (*param_10 != 0) {
      do {
        func_0x000108288a64();
        uStack_2e0 = extraout_x8;
      } while (extraout_w10 != 0);
    }
    FUN_10828adb8(&uStack_128,param_8);
    FUN_10810a400(&uStack_2e0);
    uVar42 = (undefined2)((ulong)in_stack_fffffffffffffc40 >> 0x30);
    uStack_2f0 = 0;
    uStack_208 = (undefined **)param_6;
    if (*param_7 != 0) {
      do {
        func_0x000108288acc();
        uVar42 = (undefined2)((ulong)in_stack_fffffffffffffc40 >> 0x30);
        uStack_2f0 = extraout_x8_00;
      } while (extraout_w11 != 0);
    }
    uStack_2e8 = (undefined4)param_7[1];
    uStack_2e4 = *(undefined2 *)((long)param_7 + 0xc);
    FUN_1082a72f8(&uStack_210,&uStack_208,&uStack_2f0,&uStack_128);
    func_0x000108288bc4();
    fVar34 = 4.0 / fVar38;
    if (fVar38 <= 4.0) {
      fVar34 = 1.0;
    }
    fVar38 = 4.0 / fVar36;
    if (fVar36 <= 4.0) {
      fVar38 = 1.0;
    }
    fVar39 = SUB84(uStack_290,0);
    uVar37 = NEON_scvtf(CONCAT44((int)(uStack_288 >> 0x20) - (int)((ulong)uStack_290 >> 0x20),
                                 (int)uStack_288 - (int)fVar39),4);
    fVar36 = (float)uVar37;
    fStack_34c = (float)((ulong)uVar37 >> 0x20);
    uVar37 = NEON_fminnm(CONCAT44((int)(fVar38 * fStack_34c),(int)(fVar34 * fVar36)),
                         0x4effffff4effffff,4);
    uVar37 = NEON_fmaxnm(uVar37,0xceffffffceffffff,4);
    auVar31._0_8_ =
         NEON_smax(CONCAT44((int)(float)((ulong)uVar37 >> 0x20),(int)(float)uVar37),0x100000001,4);
    uVar37 = *(undefined8 *)(uStack_210 + 8);
    if (uStack_128 != (int *******)0x0) {
      do {
        cVar5 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(uStack_128,0x10);
        if (bVar11) {
          *(int *)uStack_128 = *(int *)uStack_128 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    pppppppiStack_2f8 = uStack_128;
    uStack_208 = (undefined **)0x0;
    uStack_200 = (ulong *)0x3f000000;
    uVar32 = (uint)(auVar31._0_8_ >> 0x20);
    uVar30 = (uint)auVar31._0_8_;
    FUN_1082bfec4(&ppppppiStack_248,uVar37,uStack_118,&pppppppiStack_2f8,0,
                  CONCAT44(uVar32 + 2,uVar30 + 2),&uStack_208,&UNK_10f48139f,0x1a,1,
                  (int)(((ulong)CONCAT21(uVar42,*(undefined1 *)(*(long *)(uStack_210 + 0x10) + 0xcb)
                                        ) << 0x28) >> 0x20),*(undefined4 *)(uStack_210 + 0x18));
    FUN_10810a400(&pppppppiStack_2f8);
    ppppppiVar24 = ppppppiStack_248;
    if (ppppppiStack_248 != (int ******)0x0) {
      uStack_208 = (undefined **)0x0;
      puVar16 = &uStack_208;
      uVar37 = 1;
      uStack_200 = (ulong *)auVar31._0_8_;
      FUN_108287534(puVar16,1,1);
      FUN_1082bdf60(uStack_210,ppppppiVar24,puVar16,uVar37,uStack_290,uStack_288,0,2);
      pppppppiVar28 = uStack_290;
      if ((uStack_210 & 1) != 0) {
        uStack_208 = (undefined **)&ppppppiStack_248;
        uStack_200 = &uStack_210;
        puStack_1f8 = &uStack_294;
        iVar33 = (int)uStack_290;
        iVar26 = uStack_290._4_4_;
        iVar25 = (int)uStack_288;
        iVar7 = uStack_288._4_4_;
        iVar22 = uStack_288._4_4_ - uStack_290._4_4_;
        uVar1 = uVar32;
        if (0x7ffffffd < uVar32) {
          uVar1 = 0x7ffffffe;
        }
        iVar12 = (int)(float)(int)uStack_290;
        FUN_108219ff8(iVar12,uStack_290._4_4_,1);
        func_0x000108288bf0();
        FUN_108287590(&uStack_208,0x100000000,(ulong)(uVar1 + 1) << 0x20 | 1);
        uVar1 = uVar30;
        if (0x7ffffffd < uVar30) {
          uVar1 = 0x7ffffffe;
        }
        iVar19 = (int)(float)iVar26;
        func_0x000108288b70();
        func_0x000108288bf0();
        FUN_108287590(&uStack_208,1,(ulong)(uVar1 + 1) | 0x100000000);
        uVar17 = (ulong)(uVar30 + 1);
        uVar37 = 1;
        uVar21 = uVar17;
        FUN_108219ff8(uVar17,1,1,uVar32);
        iVar13 = (int)(float)(iVar25 + -1);
        FUN_108219ff8(iVar13,iVar26,1,iVar22);
        func_0x000108288bf0();
        FUN_108287590(&uStack_208,uVar21,uVar37);
        uVar29 = (ulong)(uVar32 + 1);
        uVar37 = 1;
        uVar21 = uVar29;
        func_0x000108288b70(1,uVar29,auVar31._0_8_ & 0xffffffff);
        iVar22 = (int)(float)(iVar7 + -1);
        func_0x000108288b70((ulong)pppppppiVar28 & 0xffffffff,iVar22,iVar25 - iVar33);
        func_0x000108288bf0();
        FUN_108287590(&uStack_208,uVar37,uVar21);
        func_0x000108288aa4(iVar12,iVar19);
        func_0x000108288bf0();
        FUN_108287590(&uStack_208,0,0x100000001);
        if (0x7ffffffc < uVar30) {
          uVar30 = 0x7ffffffd;
        }
        func_0x000108288aa4(iVar13,iVar19);
        func_0x000108288bf0();
        FUN_108287590(&uStack_208,uVar17,(ulong)(uVar30 + 2) | 0x100000000);
        uVar21 = uVar29;
        func_0x000108288aa4(uVar17,uVar29);
        func_0x000108288aa4(iVar13,iVar22);
        func_0x000108288bf0();
        FUN_108287590(&uStack_208,uVar17,uVar21);
        if (0x7ffffffc < uVar32) {
          uVar32 = 0x7ffffffd;
        }
        func_0x000108288aa4(iVar12,iVar22);
        func_0x000108288bf0();
        FUN_108287590(&uStack_208,uVar29 << 0x20,(ulong)(uVar32 + 2) << 0x20 | 1);
        uVar37 = 0;
        if (ppppppiStack_248[2] != (int *****)0x0) {
          do {
            func_0x000108288adc();
            ppppppiStack_248 = (int ******)extraout_x8_01;
            uVar37 = extraout_x9;
          } while (extraout_w12 != 0);
        }
        uStack_200 = (ulong *)CONCAT26(uStack_200._6_2_,*(undefined6 *)(ppppppiStack_248 + 3));
        uStack_208 = (undefined **)uVar37;
        FUN_108279f20(param_7,&uStack_208);
        FUN_108287d44(uStack_208);
        ppppppiVar24 = (int ******)&ppppppiStack_248;
        FUN_10827f608(ppppppiVar24,0);
        func_0x000108288d34();
        if (ppppppiVar24 != (int ******)0x0) {
          func_0x000108288a38();
        }
        uVar21 = (ulong)(uint)-(int)uStack_290 - ((ulong)uStack_290 & 0xffffffff00000000);
        pppppppiVar28 = (int *******)&pppppppiStack_280;
        FUN_108287688();
        auVar31._8_8_ = auVar31._0_8_;
        auVar31 = NEON_ucvtf(auVar31,4);
        uStack_208 = (undefined **)pppppppiVar28;
        uStack_200 = (ulong *)uVar21;
        FUN_10817500c(&uStack_208);
        auVar35 = NEON_fmov(0x3f800000,4);
        uStack_258 = CONCAT44((auVar31._12_4_ / fStack_34c) * fVar39 + auVar35._12_4_,
                              (auVar31._8_4_ / fVar36) * extraout_s2 + auVar35._8_4_);
        uStack_260 = (int ******)
                     CONCAT44((auVar31._4_4_ / fStack_34c) * extraout_s1 + auVar35._4_4_,
                              (auVar31._0_4_ / fVar36) * extraout_s0 + auVar35._0_4_);
        puVar16 = &uStack_260;
        func_0x00010812f180();
        uStack_350 = (uint)puVar16;
        uStack_348 = (uint)((ulong)puVar16 >> 0x20);
        uStack_350 = uStack_350 ^
                     (uStack_350 ^ 0x80000001) & ~-(uint)(-0x7fffffff < (int)uStack_350);
        uStack_348 = uStack_348 ^
                     (uStack_348 ^ 0x80000001) & ~-(uint)(-0x7fffffff < (long)puVar16 >> 0x20);
        lStack_310 = *param_7;
        uVar37 = *(undefined8 *)(lStack_310 + 0x90);
        *param_7 = 0;
        uStack_308 = (undefined4)param_7[1];
        uStack_304 = *(undefined2 *)((long)param_7 + 0xc);
        uStack_318 = 0;
        if (*param_10 != 0) {
          do {
            func_0x000108288acc();
            uVar37 = extraout_x8_02;
            uStack_318 = extraout_x9_00;
          } while (extraout_w11_00 != 0);
        }
        uVar40 = 0;
        FUN_108286138(&lStack_300,param_6,&lStack_310,param_8);
        FUN_10810a400(&uStack_318);
        FUN_108287d44(lStack_310);
        lVar23 = lStack_300;
        if (lStack_300 == 0) {
          *param_5 = 0;
        }
        else {
          auVar35._0_4_ = -uStack_350;
          auVar35._4_4_ = -uStack_348;
          auVar35._8_4_ = -uStack_350;
          auVar35._12_4_ = -uStack_348;
          auVar31 = NEON_scvtf(auVar35,4);
          uStack_258 = CONCAT44(uStack_258._4_4_ + auVar31._12_4_,(float)uStack_258 + auVar31._8_4_)
          ;
          uStack_260 = (int ******)
                       CONCAT44(uStack_260._4_4_ + auVar31._4_4_,(float)uStack_260 + auVar31._0_4_);
          lStack_300 = 0;
          auVar31 = func_0x000108288ef0(plStack_278,pppppppiStack_280);
          ppppppiVar24 = *(int *******)(lVar23 + 0x10);
          lStack_320 = extraout_x8_03;
          if (ppppppiVar24 == (int ******)0x0) {
LAB_108286f14:
            *param_5 = 0;
          }
          else {
            iVar22 = auVar31._0_4_ - auVar31._8_4_;
            iVar33 = auVar31._4_4_ - auVar31._12_4_;
            do {
              func_0x000108288a64();
              uVar41 = (undefined4)((ulong)uVar40 >> 0x20);
            } while (extraout_w10_00 != 0);
            uVar4 = *(undefined4 *)(lVar23 + 0x18);
            uVar6 = *(undefined6 *)(lVar23 + 0x18);
            ppppppiVar18 = ppppppiVar24;
            (*(code *)(*ppppppiVar24)[3])();
            if (ppppppiVar18 == (int ******)0x0) goto LAB_108286f14;
            uVar2 = *(undefined4 *)(lVar23 + 0x30);
            uVar3 = *(undefined4 *)(lVar23 + 0x34);
            func_0x000108288b04();
            alStack_98[0] = lStack_320;
            lStack_320 = 0;
            uStack_208 = (undefined **)0x0;
            uStack_200 = (ulong *)0x3f000000;
            uVar37 = CONCAT44((int)(CONCAT35((int3)((ulong)uVar37 >> 0x28),0x100000000) >> 0x20),
                              uVar4);
            func_0x000108288ea4(*(undefined1 *)((long)ppppppiVar24 + 0xcb));
            FUN_1082bfec4(&uStack_270,param_6,uVar2,alStack_98,param_15,CONCAT44(iVar33,iVar22),
                          &uStack_208,&UNK_10f481b53,0x1b,extraout_w9,uVar41,uVar37);
            FUN_10810a400(alStack_98);
            if (uStack_270 == (int *******)0x0) {
              *param_5 = 0;
            }
            else {
              uStack_208 = (undefined **)0x0;
              uStack_200 = (ulong *)0x0;
              puStack_1f8 = (undefined4 *)0x0;
              uStack_1f0 = 1;
              uStack_1ec = func_0x000108288aec();
              uStack_238 = CONCAT26(uStack_238._6_2_,uVar6);
              pppppppiStack_240 = (int *******)ppppppiVar24;
              func_0x000108288b34();
              FUN_1082cdf9c(&pppppiStack_a0,&pppppppiStack_240,uVar3);
              func_0x000108288d70();
              uStack_a8 = pppppiStack_a0;
              pppppiStack_a0 = (int *****)0x0;
              FUN_108288160(&uStack_208,&uStack_a8);
              pppppiVar9 = uStack_a8;
              uStack_a8 = (int *****)0x0;
              if (pppppiVar9 != (int *****)0x0) {
                func_0x000108288a38();
              }
              uStack_208 = &PTR_PTR_110a38218;
              uStack_1f0 = 0;
              uStack_b0 = NEON_scvtf(CONCAT44(iVar33,iVar22),4);
              pppppppiStack_b8 = (int *******)0x0;
              func_0x000108288ec4(uStack_270);
              func_0x000108288dd0();
              pppppiVar9 = pppppiStack_a0;
              pppppppiVar28 = uStack_270;
              uStack_270 = (int *******)0x0;
              *param_5 = (long)pppppppiVar28;
              pppppiStack_a0 = (int *****)0x0;
              if (pppppiVar9 != (int *****)0x0) {
                func_0x000108288a38();
              }
              func_0x00010827ee54(&uStack_208);
              ppppppiVar24 = (int ******)0x0;
            }
            FUN_10827f5e4(&uStack_270);
            lVar23 = 0;
          }
          FUN_108287d44(ppppppiVar24);
          FUN_10810a400(&lStack_320);
          if (lVar23 != 0) {
            func_0x000108288b04();
          }
        }
        FUN_10827f5e4(&lStack_300);
        goto LAB_1082871b8;
      }
    }
    *param_5 = 0;
LAB_1082871b8:
    ppppppiVar24 = (int ******)&ppppppiStack_248;
    FUN_10827f5e4();
    func_0x000108288d34();
    if (ppppppiVar24 != (int ******)0x0) {
      func_0x000108288a38();
    }
    func_0x00010828afb8(&uStack_128);
    return;
  }
  if (((0 < iVar22 && 0 < iVar33) && (int)((iVar22 << 1 | 1U) * (iVar33 << 1 | 1U)) < 0x1d) &&
     ((*(byte *)(*(long *)(*(long *)(*(long *)(param_6 + 0x10) + 0xb8) + 0x10) + 99) & 1) == 0)) {
    pppppppiVar28 = (int *******)*param_7;
    *param_7 = 0;
    lVar23 = param_7[1];
    func_0x000108288ef0();
    uStack_2c0 = 0;
    func_0x000108288b80();
    uStack_208 = (undefined **)0x0;
    uStack_200 = (ulong *)0x3f000000;
    func_0x000108288ea4(*(undefined1 *)((long)pppppppiVar28 + 0xcb));
    FUN_1082bfec4(alStack_98,param_6,param_8,&pppppiStack_a0,param_15);
    FUN_10810a400(&pppppiStack_a0);
    if (alStack_98[0] == 0) {
      *param_5 = 0;
    }
    else {
      uStack_a8 = (int *****)CONCAT44(iVar33,iVar22);
      pppppiVar9 = uStack_a8;
      FUN_10833756c(fVar38,fVar36,uStack_a8,&uStack_128);
      func_0x000108337574(pppppiVar9,&uStack_208);
      uStack_b0 = CONCAT26(uStack_b0._6_2_,(int6)lVar23);
      pppppppiStack_b8 = pppppppiVar28;
      FUN_108287fec(&uStack_210,
                    *(undefined8 *)(*(long *)(*(long *)(alStack_98[0] + 8) + 0x10) + 0xb8),
                    &pppppppiStack_b8,2,0,0x100000000,&uStack_290,&pppppppiStack_280,iVar22,iVar33);
      FUN_108287d44(pppppppiStack_b8);
      ppppppiVar18 = (int ******)&uStack_a8;
      FUN_108337840();
      ppppppiVar24 = ppppppiVar18;
      FUN_108287aa8();
      func_0x000108288c60();
      if (ppppppiVar18 != (int ******)0x0) {
        do {
          func_0x000108288a64();
        } while (extraout_w10_02 != 0);
      }
      pppppppiStack_240 = (int *******)ppppppiVar18;
      FUN_1082cc5c8(ppppppiVar24,&pppppppiStack_240,&UNK_10f481b11,0);
      FUN_108154c00(&pppppppiStack_240);
      uVar30 = *(uint *)(ppppppiVar24 + 10);
      _memcpy(ppppppiVar24 + 0xd,&uStack_128,0x70);
      _memcpy(ppppppiVar24 + 0x1b,&uStack_208,0xe0);
      FUN_108288188(ppppppiVar24,ppppppiVar24 + 0x37,(long)(ppppppiVar24 + 0xd) + (ulong)uVar30 + 2,
                    &UNK_10f47d354,&uStack_210);
      pppppppiStack_240 = (int *******)0x0;
      uStack_238 = 0;
      uStack_230 = 0;
      uStack_228 = 1;
      uStack_224 = func_0x000108288aec();
      ppppppiStack_248 = ppppppiVar24;
      FUN_108288160(&pppppppiStack_240,&ppppppiStack_248);
      ppppppiVar24 = ppppppiStack_248;
      ppppppiStack_248 = (int ******)0x0;
      if (ppppppiVar24 != (int ******)0x0) {
        func_0x000108288a38();
      }
      lVar23 = alStack_98[0];
      pppppppiStack_240 = (int *******)&PTR_PTR_110a38218;
      uStack_228 = 0;
      uStack_260 = (int ******)0x0;
      uStack_258 = NEON_scvtf(CONCAT44((int)((ulong)plStack_278 >> 0x20) -
                                       (int)((ulong)pppppppiStack_280 >> 0x20),
                                       (int)plStack_278 - (int)pppppppiStack_280),4);
      FUN_10817500c(&pppppppiStack_280);
      uStack_270 = (int *******)CONCAT44(extraout_s1_02,extraout_s0_02);
      uStack_268 = extraout_s2_02;
      uStack_264 = param_4;
      func_0x000108288ec4();
      func_0x000108288dd0(lVar23);
      lVar23 = alStack_98[0];
      alStack_98[0] = 0;
      *param_5 = lVar23;
      pppppppiVar28 = (int *******)&pppppppiStack_240;
      func_0x00010827ee54();
      func_0x000108288d34();
      if (pppppppiVar28 != (int *******)0x0) {
        func_0x000108288a38();
      }
      pppppppiVar28 = (int *******)0x0;
    }
    FUN_10827f5e4(alStack_98);
    FUN_10810a400(&uStack_2c0);
    goto LAB_108287180;
  }
  pppppppiVar27 = (int *******)*param_7;
  *param_7 = 0;
  uStack_2c8 = (undefined4)param_7[1];
  uStack_2c4 = *(undefined2 *)((long)param_7 + 0xc);
  func_0x000108288ef0();
  plVar14 = plStack_278;
  pppppppiVar8 = pppppppiStack_280;
  uVar21 = uStack_288;
  pppppppiVar28 = uStack_290;
  uVar29 = (ulong)uStack_290 >> 0x20;
  uVar17 = uStack_288 >> 0x20;
  pppppppiStack_b8 = (int *******)0x0;
  ppppppiStack_2d8 = extraout_x8_05;
  pppppppiStack_2d0 = pppppppiVar27;
  if (iVar22 < 1) {
LAB_1082870d4:
    pppppppiVar8 = pppppppiStack_b8;
    ppppppiVar24 = ppppppiStack_2d8;
    if (iVar33 == 0) {
      pppppppiStack_b8 = (int *******)0x0;
      *param_5 = (long)pppppppiVar8;
    }
    else {
      uStack_208 = (undefined **)pppppppiStack_2d0;
      uStack_200._0_6_ = CONCAT24(uStack_2c4,uStack_2c8);
      ppppppiStack_2d8 = (int ******)0x0;
      pppppppiStack_2d0 = (int *******)0x0;
      pppppppiStack_240 = (int *******)ppppppiVar24;
      FUN_1082881e0(fVar36,param_5,param_6,&uStack_208,param_8,uVar41,
                    (ulong)pppppppiVar28 & 0xffffffff | uVar29 << 0x20,
                    uVar21 & 0xffffffff | uVar17 << 0x20);
      FUN_10810a400(&pppppppiStack_240);
      FUN_108287d44(uStack_208);
    }
  }
  else {
    uStack_208 = (undefined **)pppppppiStack_280;
    uStack_200 = (ulong *)plStack_278;
    uStack_350 = (uint)pppppppiStack_280;
    if (iVar33 != 0) {
      func_0x000108287690(&uStack_208,0,iVar33);
      iVar26 = (int)((ulong)pppppppiVar28 >> 0x20);
      if (iVar26 < uStack_200._4_4_) {
        iVar25 = (int)(uVar21 >> 0x20);
        if (uStack_208._4_4_ < iVar25) {
          if (uStack_208._4_4_ <= iVar26) {
            uStack_208._4_4_ = iVar26;
          }
          if (iVar25 <= uStack_200._4_4_) {
            uStack_200._4_4_ = iVar25;
          }
        }
        else {
          uStack_208._4_4_ = iVar25 + -1;
          uStack_200._4_4_ = iVar25;
        }
      }
      else {
        uStack_208._4_4_ = iVar26;
        uStack_200._4_4_ = iVar26 + 1;
      }
      iVar25 = (int)pppppppiVar28 - iVar22;
      iVar26 = iVar25 + 1;
      iVar22 = iVar22 + (int)uVar21 + -1;
      if ((int)uStack_208 <= iVar26) {
        uStack_208._0_4_ = iVar25 + 1;
      }
      if ((int)uStack_200 <= iVar26) {
        uStack_208._0_4_ = (int)uStack_200 + -1;
      }
      iVar26 = iVar22;
      if ((int)uStack_200 <= iVar22) {
        iVar26 = (int)uStack_200;
      }
      if (iVar22 <= (int)uStack_208) {
        iVar26 = (int)uStack_208 + 1;
      }
      uStack_200 = (ulong *)CONCAT44(uStack_200._4_4_,iVar26);
    }
    pppppppiStack_2d0 = (int *******)0x0;
    uStack_120._0_6_ = CONCAT24(uStack_2c4,uStack_2c8);
    if (ppppppiStack_2d8 != (int ******)0x0) {
      do {
        cVar5 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppppppiStack_2d8,0x10);
        if (bVar11) {
          *(int *)ppppppiStack_2d8 = *(int *)ppppppiStack_2d8 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    uStack_260 = ppppppiStack_2d8;
    uStack_128 = pppppppiVar27;
    FUN_1082881e0(fVar38,&pppppppiStack_240,param_6,&uStack_128,param_8,uVar41,pppppppiVar28,uVar21)
    ;
    pppppppiVar28 = pppppppiStack_240;
    pppppppiStack_240 = (int *******)0x0;
    FUN_10827f608(&pppppppiStack_b8,pppppppiVar28);
    func_0x000108288d88();
    FUN_10810a400(&uStack_260);
    FUN_108287d44(uStack_128);
    if (pppppppiStack_b8 != (int *******)0x0) {
      ppppppiVar24 = (int ******)0x0;
      pppppppiVar28 = pppppppiStack_b8;
      if (pppppppiStack_b8[2] != (int ******)0x0) {
        do {
          func_0x000108288adc();
          pppppppiVar28 = extraout_x8_06;
          ppppppiVar24 = extraout_x9_01;
        } while (extraout_w12_00 != 0);
      }
      uStack_238 = CONCAT26(uStack_238._6_2_,*(undefined6 *)(pppppppiVar28 + 3));
      pppppppiStack_240 = (int *******)ppppppiVar24;
      FUN_108279f20(&pppppppiStack_2d0,&pppppppiStack_240);
      func_0x000108288d70();
      uStack_270 = (int *******)uStack_208;
      pppppppiStack_240 = pppppppiVar8;
      FUN_108288628(&pppppppiStack_240,&uStack_270);
      uStack_238 = (long)plVar14 - ((ulong)pppppppiVar8 & 0xffffffff00000000) & 0xffffffff00000000 |
                   (ulong)((int)plVar14 - uStack_350);
      pppppppiStack_240 = (int *******)0x0;
      FUN_108287688();
      uVar29 = 0;
      uVar17 = (ulong)(uint)(uStack_200._4_4_ - uStack_208._4_4_);
      pppppppiVar28 = (int *******)0x0;
      uVar21 = (ulong)(uint)((int)uStack_200 - (int)uStack_208);
      goto LAB_1082870d4;
    }
    *param_5 = 0;
  }
  FUN_10827f5e4(&pppppppiStack_b8);
  FUN_10810a400(&ppppppiStack_2d8);
  pppppppiVar28 = pppppppiStack_2d0;
LAB_108287180:
  FUN_108287d44(pppppppiVar28);
  return;
}



/* Entry: 1082873f8; end: 108287477;  */

undefined1  [16] FUN_1082873f8(int *param_1,int param_2,int param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined1 auVar5 [16];
  
  uVar3 = (long)*param_1 - (long)param_2;
  if ((long)uVar3 < -0x7ffffffe) {
    uVar3 = 0xffffffff80000001;
  }
  if (0x7ffffffe < (long)uVar3) {
    uVar3 = 0x7fffffff;
  }
  lVar4 = (long)param_1[1] - (long)param_3;
  if (lVar4 < -0x7ffffffe) {
    lVar4 = -0x7fffffff;
  }
  if (0x7ffffffe < lVar4) {
    lVar4 = 0x7fffffff;
  }
  uVar1 = (long)param_1[2] + (long)param_2;
  if ((long)uVar1 < -0x7ffffffe) {
    uVar1 = 0xffffffff80000001;
  }
  if (0x7ffffffe < (long)uVar1) {
    uVar1 = 0x7fffffff;
  }
  lVar2 = (long)param_1[3] + (long)param_3;
  if (lVar2 < -0x7ffffffe) {
    lVar2 = -0x7fffffff;
  }
  if (0x7ffffffe < lVar2) {
    lVar2 = 0x7fffffff;
  }
  auVar5._8_8_ = uVar1 & 0xffffffff | lVar2 << 0x20;
  auVar5._0_8_ = uVar3 & 0xffffffff | lVar4 << 0x20;
  return auVar5;
}



/* Entry: 108287478; end: 1082874ff;  */

void FUN_108287478(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long *param_8)

{
  long lVar1;
  long lStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  FUN_10817500c(param_6);
  lStack_48 = *param_8;
  *param_8 = 0;
  uStack_40 = param_1;
  uStack_3c = param_2;
  uStack_38 = param_3;
  uStack_34 = param_4;
  FUN_108287f50(param_5,&uStack_40,param_7,&lStack_48);
  lVar1 = lStack_48;
  lStack_48 = 0;
  if (lVar1 != 0) {
    func_0x000108288a38();
  }
  return;
}



/* Entry: 108287500; end: 108287533;  */

/* WARNING: Removing unreachable block (ram,0x0001082c4a38) */
/* WARNING: Removing unreachable block (ram,0x0001082c4a48) */
/* WARNING: Removing unreachable block (ram,0x0001082c4a50) */
/* WARNING: Removing unreachable block (ram,0x0001082c4a54) */
/* WARNING: Removing unreachable block (ram,0x0001082c4a58) */
/* WARNING: Removing unreachable block (ram,0x0001082c4a68) */
/* WARNING: Removing unreachable block (ram,0x0001082c4a78) */
/* WARNING: Removing unreachable block (ram,0x0001082c4a8c) */
/* WARNING: Removing unreachable block (ram,0x0001082c4a98) */
/* WARNING: Removing unreachable block (ram,0x0001082c4c60) */
/* WARNING: Removing unreachable block (ram,0x0001082c4c64) */
/* WARNING: Removing unreachable block (ram,0x0001082c4c68) */
/* WARNING: Removing unreachable block (ram,0x0001082c4c78) */
/* WARNING: Removing unreachable block (ram,0x0001082c4c7c) */
/* WARNING: Removing unreachable block (ram,0x0001082c4a9c) */
/* WARNING: Removing unreachable block (ram,0x0001082c4c80) */

void FUN_108287500(ulong param_1,undefined4 *param_2)

{
  undefined1 in_ZR;
  long lVar1;
  long *plVar2;
  ulong uVar3;
  uint uVar4;
  long *unaff_x19;
  long lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_c0 [8];
  long lStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  float fStack_a4;
  long lStack_a0;
  ulong auStack_98 [3];
  undefined1 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  float fStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar6 = *param_2;
  uVar8 = param_2[1];
  uVar10 = param_2[2];
  fVar12 = (float)param_2[3];
  FUN_10827f67c();
  uVar9 = uVar8;
  uVar11 = uVar10;
  fVar13 = fVar12;
  func_0x0001082c4e98();
  if ((param_1 & 1) != 0) {
    return;
  }
  func_0x0001082c4ed4();
  if ((bool)in_ZR) {
    FUN_10827b938();
  }
  lVar1 = unaff_x19[2];
  FUN_1082b1dfc();
  uStack_60 = 0;
  uStack_68 = lVar1;
  uStack_58 = lVar1;
  func_0x0001082c4f10();
  plVar2 = unaff_x19;
  (**(code **)(*unaff_x19 + 0x20))(unaff_x19);
  lVar5 = lVar1;
  FUN_1082ffac4(lVar1,plVar2);
  if (((int)lVar5 != 0) &&
     ((*(byte *)(*(long *)(*(long *)(unaff_x19[1] + 0x10) + 0xb8) + 0x1b) >> 3 & 1) == 0)) {
    func_0x0001082c4eb4();
    FUN_1082ff6ec(lVar1,1);
    return;
  }
  *(undefined4 *)(lVar1 + 0x98) = 2;
  *(undefined8 *)(lVar1 + 0xa4) = 0;
  *(undefined8 *)(lVar1 + 0x9c) = 0;
  uVar4 = (uint)*(undefined8 *)(*(long *)(*(long *)(unaff_x19[1] + 0x10) + 0xb8) + 0x18);
  if ((uVar4 >> 0x1b & 1) == 0) {
    if ((int)uStack_60 < 1 && uStack_60._4_4_ < 1) {
      if ((int)uStack_58 < (int)uStack_68) goto LAB_1082c4b70;
      if ((uVar4 >> 0x1a & 1) != 0) {
        if (uStack_58._4_4_ < uStack_68._4_4_) goto LAB_1082c4bb8;
      }
    }
    else {
LAB_1082c4b70:
      if ((uVar4 >> 0x1a & 1) != 0) goto LAB_1082c4bb8;
    }
    func_0x0001082c4eb4();
    FUN_1082eed10(auStack_c0,unaff_x19[1],&uStack_68);
    FUN_1082c493c(unaff_x19,auStack_c0);
    func_0x0001082c4f38();
    if (unaff_x19 != (long *)0x0) {
      func_0x0001082c4e8c();
    }
  }
  else {
LAB_1082c4bb8:
    auStack_98[0] = 0;
    auStack_98[1] = 0;
    auStack_98[2] = 0;
    uStack_80 = 1;
    uVar7 = 0x3f800000;
    uVar4 = 3;
    if (fVar12 != 1.0) {
      uVar4 = 1;
    }
    uVar3 = (ulong)uVar4;
    uStack_7c = uVar6;
    uStack_78 = uVar8;
    uStack_74 = uVar10;
    fStack_70 = fVar12;
    FUN_1082ca37c();
    uStack_80 = 0;
    lVar5 = unaff_x19[1];
    auStack_98[0] = uVar3;
    FUN_10817500c(&uStack_60);
    uStack_b0 = uVar7;
    uStack_ac = uVar9;
    uStack_a8 = uVar11;
    fStack_a4 = fVar13;
    FUN_1082fadbc(&lStack_a0,lVar5,auStack_98,0x113254e20,&uStack_b0,0);
    lStack_b8 = lStack_a0;
    func_0x0001082c4f20();
    if (lStack_b8 != 0) {
      func_0x0001082c4e8c();
    }
    func_0x00010827ee54(auStack_98);
  }
  return;
}



/* Entry: 108287534; end: 10828758f;  */

undefined1  [16] FUN_108287534(int *param_1,int param_2,int param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  auVar9._0_8_ = (long)param_2 + (long)*param_1;
  auVar9._8_8_ = (long)param_2 + (long)param_1[2];
  auVar2._8_8_ = 0xffffffff80000001;
  auVar2._0_8_ = 0xffffffff80000001;
  auVar4._8_8_ = -(ulong)(-0x7fffffff < auVar9._8_8_);
  auVar4._0_8_ = -(ulong)(-0x7fffffff < auVar9._0_8_);
  auVar9 = auVar9 ^ (auVar9 ^ auVar2) & ~auVar4;
  auVar5._8_8_ = 0x7fffffff;
  auVar5._0_8_ = 0x7fffffff;
  auVar7._8_8_ = -(ulong)(auVar9._8_8_ < 0x7fffffff);
  auVar7._0_8_ = -(ulong)(auVar9._0_8_ < 0x7fffffff);
  auVar8._0_8_ = (long)param_3 + (long)param_1[1];
  auVar8._8_8_ = (long)param_3 + (long)param_1[3];
  auVar3._8_8_ = 0xffffffff80000001;
  auVar3._0_8_ = 0xffffffff80000001;
  auVar10._8_8_ = -(ulong)(-0x7fffffff < auVar8._8_8_);
  auVar10._0_8_ = -(ulong)(-0x7fffffff < auVar8._0_8_);
  auVar8 = auVar8 ^ (auVar8 ^ auVar3) & ~auVar10;
  auVar6._8_8_ = 0x7fffffff;
  auVar6._0_8_ = 0x7fffffff;
  auVar1._8_8_ = -(ulong)(auVar8._8_8_ < 0x7fffffff);
  auVar1._0_8_ = -(ulong)(auVar8._0_8_ < 0x7fffffff);
  auVar10 = NEON_sli(auVar9 ^ (auVar9 ^ auVar5) & ~auVar7,auVar8 ^ (auVar8 ^ auVar6) & ~auVar1,0x20,
                     8);
  return auVar10;
}



/* Entry: 108287590; end: 108287687;  */

void FUN_108287590(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined4 uVar1;
  long lVar2;
  long extraout_x8;
  undefined8 extraout_x9;
  int extraout_w12;
  undefined8 uVar3;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined2 uStack_44;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar3 = *(undefined8 *)*param_5;
  lVar2 = *(long *)param_5[1];
  uStack_50 = 0;
  uStack_40 = param_8;
  uStack_38 = param_9;
  uStack_30 = param_6;
  uStack_28 = param_7;
  if (*(long *)(lVar2 + 0x10) != 0) {
    do {
      func_0x000108288adc();
      lVar2 = extraout_x8;
      uStack_50 = extraout_x9;
    } while (extraout_w12 != 0);
  }
  uStack_48 = *(undefined4 *)(lVar2 + 0x18);
  uStack_44 = *(undefined2 *)(lVar2 + 0x1c);
  uVar1 = *(undefined4 *)param_5[2];
  FUN_10817500c(&uStack_40);
  uStack_60 = param_1;
  uStack_5c = param_2;
  uStack_58 = param_3;
  uStack_54 = param_4;
  FUN_10817500c(&uStack_30);
  uStack_78 = 0;
  uStack_70 = param_1;
  uStack_6c = param_2;
  uStack_68 = param_3;
  uStack_64 = param_4;
  FUN_1082c15f0(uVar3,0,&uStack_50,uVar1,1,0,1,&UNK_10df132d8,&uStack_60,&uStack_70,0x100000000,
                0x113254e20,&uStack_78);
  FUN_10827f5a4(&uStack_78);
  FUN_108287d44(uStack_50);
  return;
}



/* Entry: 108287688; end: 10828769b;  */

undefined1  [16] FUN_108287688(int *param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  long lVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  lVar8 = (long)(int)((ulong)param_2 >> 0x20);
  auVar10._0_8_ = (long)(int)param_2 + (long)*param_1;
  auVar10._8_8_ = (long)(int)param_2 + (long)param_1[2];
  auVar2._8_8_ = 0xffffffff80000001;
  auVar2._0_8_ = 0xffffffff80000001;
  auVar4._8_8_ = -(ulong)(-0x7fffffff < auVar10._8_8_);
  auVar4._0_8_ = -(ulong)(-0x7fffffff < auVar10._0_8_);
  auVar10 = auVar10 ^ (auVar10 ^ auVar2) & ~auVar4;
  auVar5._8_8_ = 0x7fffffff;
  auVar5._0_8_ = 0x7fffffff;
  auVar7._8_8_ = -(ulong)(auVar10._8_8_ < 0x7fffffff);
  auVar7._0_8_ = -(ulong)(auVar10._0_8_ < 0x7fffffff);
  auVar9._0_8_ = lVar8 + param_1[1];
  auVar9._8_8_ = lVar8 + param_1[3];
  auVar3._8_8_ = 0xffffffff80000001;
  auVar3._0_8_ = 0xffffffff80000001;
  auVar11._8_8_ = -(ulong)(-0x7fffffff < auVar9._8_8_);
  auVar11._0_8_ = -(ulong)(-0x7fffffff < auVar9._0_8_);
  auVar9 = auVar9 ^ (auVar9 ^ auVar3) & ~auVar11;
  auVar6._8_8_ = 0x7fffffff;
  auVar6._0_8_ = 0x7fffffff;
  auVar1._8_8_ = -(ulong)(auVar9._8_8_ < 0x7fffffff);
  auVar1._0_8_ = -(ulong)(auVar9._0_8_ < 0x7fffffff);
  auVar11 = NEON_sli(auVar10 ^ (auVar10 ^ auVar5) & ~auVar7,auVar9 ^ (auVar9 ^ auVar6) & ~auVar1,
                     0x20,8);
  return auVar11;
}



/* Entry: 10828769c; end: 1082876df;  */

uint FUN_10828769c(ulong param_1)

{
  uint uVar1;
  ulong uVar2;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    return 1;
  }
  uVar2 = param_1;
  FUN_10827cbe0();
  if ((uVar2 & 1) == 0) {
    FUN_10828782c(param_1);
    uVar1 = (uint)param_1 ^ 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 1082876e0; end: 1082876f7;  */

float FUN_1082876e0(float param_1)

{
  FUN_108365614();
  return ABS(param_1);
}



/* Entry: 1082876f8; end: 10828782b;  */

undefined8
FUN_1082876f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
             undefined8 param_5,undefined8 *param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined2 uStack_b4;
  long lStack_b0;
  undefined2 auStack_a8 [20];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  uStack_78 = 0;
  uStack_80 = 0x3f800000;
  uStack_68 = 0;
  uStack_70 = 0x3f800000;
  uStack_60 = 0x103f800000;
  uVar2 = param_3;
  FUN_10818cfd0(param_3,&uStack_80);
  if ((int)uVar2 != 0) {
    FUN_108266014(auStack_a8,&UNK_10f481050);
    func_0x0001082b2838(param_6,auStack_a8[0]);
    func_0x000108288efc(*param_4,param_4[1]);
    FUN_10814bdfc(auStack_a8);
    FUN_108363e94(auStack_a8,param_3);
    uStack_c0 = *param_6;
    *param_6 = 0;
    uStack_b8 = *(undefined4 *)(param_6 + 1);
    uStack_b4 = *(undefined2 *)((long)param_6 + 0xc);
    func_0x000108288a58(&lStack_b0,&uStack_c0,0,auStack_a8);
    FUN_10827cbfc(param_5,&lStack_b0);
    lVar1 = lStack_b0;
    lStack_b0 = 0;
    if (lVar1 != 0) {
      func_0x000108288a38();
    }
    FUN_108287d44(uStack_c0);
    FUN_1082878ec(param_1,param_2,param_5,param_4,&uStack_80);
  }
  return uVar2;
}



/* Entry: 10828782c; end: 10828786b;  */

bool FUN_10828782c(int param_1)

{
  func_0x0001083a630c();
  return param_1 == 0;
}



/* Entry: 10828786c; end: 108287897;  */

void FUN_10828786c(void)

{
  FUN_10827cbe0();
  return;
}



/* Entry: 108287898; end: 1082878c7;  */

undefined4 FUN_108287898(undefined4 param_1,undefined4 param_2,undefined8 param_3)

{
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_18 = param_1;
  uStack_14 = param_2;
  FUN_108364dd8(param_3,&uStack_18,&uStack_18,1);
  return uStack_18;
}



/* Entry: 1082878c8; end: 1082878cf;  */

float FUN_1082878c8(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar3 = fVar2 * fVar2 + fVar1 * fVar1;
  if (NAN(fVar3 - fVar3)) {
    return SQRT(fVar2 * fVar2 + fVar1 * fVar1);
  }
  return SQRT(fVar3);
}



/* Entry: 1082878d0; end: 1082878eb;  */

bool FUN_1082878d0(uint param_1)

{
  func_0x0001081421e0();
  return param_1 < 4;
}



/* Entry: 1082878ec; end: 10828797f;  */

void FUN_1082878ec(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined1 auStack_bc [52];
  undefined1 auStack_88 [52];
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  FUN_10817500c(param_8);
  uStack_50 = param_1;
  uStack_4c = param_2;
  uStack_48 = param_3;
  uStack_44 = param_4;
  FUN_1082d38bc(auStack_bc,&uStack_50,0x113254e20);
  FUN_1082d38bc(auStack_88,&uStack_50,param_9);
  uStack_54 = 0;
  FUN_1082c0dd8(param_5,param_6,param_7,auStack_bc,0);
  return;
}



/* Entry: 108287980; end: 108287a23;  */

long FUN_108287980(code *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_38;
  long alStack_30 [2];
  
  *(undefined1 *)(param_3 + 0x18) = 1;
  FUN_1083a3348(&uStack_38);
  (*param_1)(alStack_30,&uStack_38,param_3);
  FUN_1083a3ca0(uStack_38);
  lVar1 = alStack_30[0];
  if (alStack_30[0] != 0) {
    alStack_30[0] = 0;
    FUN_108154bd8(alStack_30);
    return lVar1;
  }
  FUN_10841076c(&UNK_10f48160d);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x108287a14);
  (*pcVar2)();
}



/* Entry: 108287a24; end: 108287aa7;  */

void FUN_108287a24(undefined8 *param_1,long *param_2)

{
  long lStack_30;
  long *plStack_28;
  
  plStack_28 = (long *)*param_1;
  *param_1 = 0;
  lStack_30 = *param_2;
  *param_2 = 0;
  FUN_1082c7180(&plStack_28,&lStack_30,0xd,0);
  if (lStack_30 != 0) {
    func_0x000108288a38();
  }
  if (plStack_28 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000108288e60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plStack_28 + 8))();
    return;
  }
  return;
}



/* Entry: 108287aa8; end: 108287b03;  */

long FUN_108287aa8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10839436c();
  return (*(long *)(param_1 + 0x48) - *(long *)(param_1 + 0x40)) / 0x28 + lVar1;
}



/* Entry: 108287b04; end: 108287b1b;  */

uint FUN_108287b04(uint param_1)

{
  func_0x0001082b2788();
  return param_1 ^ 1;
}



/* Entry: 108287b1c; end: 108287b5b;  */

void FUN_108287b1c(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  *param_1 = param_2;
  if (plVar5 != (long *)0x0) {
    plVar5 = (long *)((long)plVar5 + *(long *)(*plVar5 + -0x18));
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000108288e4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 108287b5c; end: 108287b83;  */

undefined8 FUN_108287b5c(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  undefined4 *extraout_x8;
  undefined4 extraout_w9;
  undefined8 unaff_x19;
  
  FUN_108287b84(param_1 + 0x10);
  func_0x000108276964();
  if (param_1 != 0) {
    do {
      func_0x000108276970();
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(extraout_x8,0x10);
      if (bVar2) {
        *extraout_x8 = extraout_w9;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((bool)in_ZR) {
      func_0x000108276958();
    }
  }
  return unaff_x19;
}



/* Entry: 108287b84; end: 108287bab;  */

undefined8 * FUN_108287b84(undefined8 *param_1)

{
  FUN_108287bac(*param_1);
  return param_1;
}



/* Entry: 108287bac; end: 108287bd7;  */

void FUN_108287bac(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000108287bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x10))();
      return;
    }
  }
  return;
}



/* Entry: 108287bd8; end: 108287bf3;  */

uint FUN_108287bd8(uint param_1)

{
  FUN_1082d8b10();
  return ~param_1 >> 0x1f;
}



/* Entry: 108287bf4; end: 108287d17;  */

/* WARNING: Possible PIC construction at 0x000108287c9c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108287ca0) */
/* WARNING: Removing unreachable block (ram,0x000108287ca4) */
/* WARNING: Removing unreachable block (ram,0x000108287ca8) */
/* WARNING: Removing unreachable block (ram,0x000108287cc4) */
/* WARNING: Removing unreachable block (ram,0x000108287cc8) */
/* WARNING: Removing unreachable block (ram,0x000108287ccc) */
/* WARNING: Removing unreachable block (ram,0x000108287cd0) */
/* WARNING: Removing unreachable block (ram,0x000108287ce4) */

uint FUN_108287bf4(float param_1,long *param_2,undefined8 *param_3,undefined8 *****param_4,
                  undefined8 param_5,undefined8 *param_6)

{
  undefined8 **ppuVar1;
  undefined8 **ppuVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  undefined8 ****ppppuStack_60;
  undefined8 *puStack_58;
  
  ppuVar1 = &puStack_70;
  puVar5 = &stack0xfffffffffffffff0;
  plVar3 = param_2;
  puVar6 = param_3;
  (**(code **)(*param_2 + 0x48))();
  if ((int)plVar3 != 0) {
    return 0;
  }
  func_0x000108288e00(param_2);
  if (param_1 <= 0.03) {
    uVar7 = *param_3;
    param_6[1] = param_3[1];
    *param_6 = uVar7;
    ppuVar2 = (undefined8 **)param_6;
  }
  else {
    func_0x000108288de8(param_1 * 3.0);
    puVar4 = param_3;
    ppppuStack_60 = param_4;
    puStack_58 = puVar6;
    func_0x000108288de8();
    puStack_70 = puVar4;
    puStack_68 = puVar6;
    param_4 = &ppppuStack_60;
    unaff_x30 = 0x108287ca0;
    register0x00000008 = (BADSPACEBASE *)&puStack_70;
    ppuVar2 = ppuVar1;
    unaff_x19 = param_3;
    unaff_x20 = param_6;
    unaff_x29 = puVar5;
  }
  puVar5 = (undefined1 *)((long)register0x00000008 + -0x30);
  *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  uVar7 = NEON_smax(*ppuVar2,*param_4,4);
  uVar8 = NEON_smin(param_4[1],ppuVar2[1],4);
  *(undefined8 *)((long)register0x00000008 + -0x30) = uVar7;
  *(undefined8 *)((long)register0x00000008 + -0x28) = uVar8;
  FUN_10821a6d8();
  if (((ulong)puVar5 & 1) == 0) {
    uVar7 = *(undefined8 *)((long)register0x00000008 + -0x30);
    ppuVar2[1] = (undefined8 *)*(undefined8 *)((long)register0x00000008 + -0x28);
    *ppuVar2 = (undefined8 *)uVar7;
  }
  return (uint)puVar5 ^ 1;
}



/* Entry: 108287d18; end: 108287d43;  */

void FUN_108287d18(void)

{
  FUN_10828782c();
  return;
}



/* Entry: 108287d44; end: 108287d67;  */

void FUN_108287d44(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000108288e4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 108287d68; end: 108287df7;  */

uint FUN_108287d68(ulong param_1,ulong param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  FUN_10821a6d8();
  if (((uVar2 & 1) == 0) && (uVar2 = param_2, FUN_10821a6d8(), (uVar2 & 1) == 0)) {
    FUN_10821a044(param_1,param_2);
    uVar1 = (uint)param_1 ^ 1;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 108287df8; end: 108287e1b;  */

undefined1  [16] FUN_108287df8(int *param_1,int param_2,int param_3)

{
  ulong uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  uVar1 = (long)param_1[2] + (long)(*param_1 + param_2);
  if ((long)uVar1 < -0x7ffffffe) {
    uVar1 = 0xffffffff80000001;
  }
  if (0x7ffffffe < (long)uVar1) {
    uVar1 = 0x7fffffff;
  }
  lVar2 = (long)param_1[3] + (long)(param_1[1] + param_3);
  if (lVar2 < -0x7ffffffe) {
    lVar2 = -0x7fffffff;
  }
  if (0x7ffffffe < lVar2) {
    lVar2 = 0x7fffffff;
  }
  auVar3._4_4_ = param_1[1] + param_3;
  auVar3._0_4_ = *param_1 + param_2;
  auVar3._8_8_ = uVar1 & 0xffffffff | lVar2 << 0x20;
  return auVar3;
}



/* Entry: 108287e1c; end: 108287e43;  */

undefined8 FUN_108287e1c(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  undefined4 *extraout_x8;
  undefined4 extraout_w9;
  undefined8 unaff_x19;
  
  func_0x0001078bddf8(param_1 + 0x10);
  func_0x000108276964();
  if (param_1 != 0) {
    do {
      func_0x000108276970();
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(extraout_x8,0x10);
      if (bVar2) {
        *extraout_x8 = extraout_w9;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((bool)in_ZR) {
      func_0x000108276958();
    }
  }
  return unaff_x19;
}



/* Entry: 108287e44; end: 108287e4f;  */

void FUN_108287e44(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  param_1[1] = 0;
  param_1[2] = *param_1;
  puVar1 = param_1 + 1;
  func_0x00010821b838();
  if (((ulong)puVar1 & 1) == 0) {
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



/* Entry: 108287e50; end: 108287e83;  */

float * FUN_108287e50(float *param_1,float *param_2)

{
  byte bVar1;
  uint uVar2;
  char cVar3;
  code *pcVar4;
  bool bVar5;
  float *pfVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined1 uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  float *unaff_x19;
  long unaff_x20;
  int iVar16;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  long lStack_110;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  long lStack_f8;
  float fStack_f0;
  float fStack_ec;
  uint uStack_e8;
  int iStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  undefined8 uStack_c4;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  uint uStack_a0;
  undefined4 uStack_9c;
  undefined1 auStack_98 [8];
  long lStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 in_stack_ffffffffffffff98;
  
  pfVar6 = param_1 + 0x10;
  FUN_10828786c(pfVar6);
  func_0x0001082d87dc(param_1,param_2,pfVar6);
  if (*(char *)(param_1 + 0xe) == '\x04') {
LAB_1082d8340:
    func_0x0001082d87a0();
    if (param_1 != param_2) {
      piVar8 = *(int **)param_2;
      do {
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar5) {
          *piVar8 = *piVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      FUN_108376bdc(param_1);
      func_0x00010837cd88();
      FUN_108376b50();
    }
    return param_1;
  }
  if (*(char *)(param_1 + 0xe) != '\x05') {
    param_1 = unaff_x19;
    FUN_108376d4c();
    bVar1 = *(byte *)((long)unaff_x19 + 0xe);
    *(byte *)((long)unaff_x19 + 0xe) = bVar1 & 0xfc | 1;
    if (*(char *)(unaff_x20 + 0x3b) == '\x01') {
      *(byte *)((long)unaff_x19 + 0xe) = bVar1 | 3;
    }
    switch(*(undefined1 *)(unaff_x20 + 0x38)) {
    case 0:
      return param_1;
    case 1:
      func_0x0001082d87a0();
      FUN_10817abbc();
      func_0x0001082d87a0();
      break;
    case 2:
      uVar11 = (uint)*(byte *)(unaff_x20 + 0x39);
      uVar10 = *(byte *)(unaff_x20 + 0x3a) ^ 1;
      func_0x0001082d87a0();
      uVar9 = (undefined1)uVar10;
      if (*(char *)(*(long *)param_1 + 0xc3) != '\0') {
        uVar9 = 2;
      }
      *(undefined1 *)((long)param_1 + 0xd) = uVar9;
      uVar9 = *(undefined1 *)((long)param_1 + 0xd);
      FUN_10837bf90(&stack0xffffffffffffffa0,param_1,param_2);
      FUN_10837ded0(&stack0xffffffffffffff98,param_1,5,4,0);
      iVar12 = 3;
      if (uVar10 == 0) {
        iVar12 = 1;
      }
      lStack_90 = *(long *)param_2;
      lStack_80 = *(long *)(param_2 + 2);
      uStack_88 = CONCAT44((int)((ulong)lStack_90 >> 0x20),(int)lStack_80);
      uStack_78 = CONCAT44((int)((ulong)lStack_80 >> 0x20),(int)lStack_90);
      func_0x00010837cd20();
      func_0x00010837cd94(0,in_stack_ffffffffffffff98);
      func_0x00010837cf18(uVar11 & 3);
      func_0x00010837cb94();
      func_0x00010837cf18(iVar12 + uVar11 & 3);
      func_0x00010837cb94();
      uVar10 = iVar12 + uVar11 + iVar12;
      func_0x00010837cf18(uVar10 & 3);
      func_0x00010837cb94();
      func_0x00010837cf18(uVar10 + iVar12 & 3);
      func_0x00010837cc30();
      func_0x00010837cb1c();
      FUN_10837c078(&stack0xffffffffffffffa0);
      *(undefined1 *)((long)param_1 + 0xd) = uVar9;
      return param_1;
    case 3:
      uVar11 = (uint)*(byte *)(unaff_x20 + 0x39);
      uVar10 = *(byte *)(unaff_x20 + 0x3a) ^ 1;
      func_0x0001082d87a0();
      if ((uint)param_2[0xc] < 2) {
        func_0x00010837cf80();
        FUN_108377f20();
      }
      else if (param_2[0xc] == 2.8026e-45) {
        func_0x00010837cf80();
        FUN_108378418();
      }
      else {
        cVar3 = *(char *)(*(long *)param_1 + 0xc3);
        uVar13 = uVar10;
        if (cVar3 != '\0') {
          uVar13 = 2;
        }
        *(char *)((long)param_1 + 0xd) = (char)uVar13;
        func_0x00010837cde8(auStack_98);
        uVar13 = uVar10 == 0 ^ uVar11;
        bVar5 = (uVar13 & 1) != 0;
        uVar14 = 9;
        if (bVar5) {
          uVar14 = 10;
        }
        uVar15 = 0xc;
        if (bVar5) {
          uVar15 = 0xd;
        }
        FUN_108377c50(param_1,uVar15,uVar14,4);
        uStack_a0 = uVar11 & 7;
        bVar5 = uVar10 == 0;
        uStack_9c = 7;
        if (bVar5) {
          uStack_9c = 1;
        }
        fStack_108 = *param_2;
        fStack_104 = param_2[1];
        lStack_f8 = *(long *)(param_2 + 2);
        fStack_100 = (float)lStack_f8;
        fStack_d8 = fStack_100 - param_2[6];
        fStack_ec = (float)((ulong)lStack_f8 >> 0x20);
        uStack_c4 = NEON_rev64(CONCAT44(fStack_ec - (float)((ulong)*(long *)(param_2 + 8) >> 0x20),
                                        fStack_100 - (float)*(long *)(param_2 + 8)),4);
        fStack_ac = fStack_ec - param_2[0xb];
        fStack_e0 = fStack_108 + param_2[4];
        fStack_cc = fStack_104 + param_2[7];
        fStack_b8 = fStack_108 + param_2[10];
        fStack_a4 = fStack_104 + param_2[5];
        uVar2 = uVar11 >> 1;
        if (!bVar5) {
          uVar2 = uVar2 + 1;
        }
        iVar12 = 3;
        if (bVar5) {
          iVar12 = 1;
        }
        fStack_fc = fStack_104;
        fStack_f0 = fStack_108;
        uStack_e8 = uVar2 & 3;
        iStack_e4 = iVar12;
        fStack_dc = fStack_104;
        fStack_d4 = fStack_104;
        fStack_d0 = fStack_100;
        fStack_c8 = fStack_100;
        fStack_bc = fStack_ec;
        fStack_b4 = fStack_ec;
        fStack_b0 = fStack_108;
        fStack_a8 = fStack_108;
        func_0x00010837ccdc();
        if ((uVar13 & 1) == 0) {
          iVar16 = 3;
          uStack_e8 = uVar2 & 3;
          while( true ) {
            uStack_e8 = iVar12 + uStack_e8 & 3;
            func_0x00010837cb5c();
            if (iVar16 == 0) break;
            func_0x00010837cba4();
            func_0x00010837cb5c();
            func_0x00010837cc60();
            iVar16 = iVar16 + -1;
            iVar12 = iStack_e4;
          }
          func_0x00010837cba4();
        }
        else {
          iVar12 = 4;
          do {
            func_0x00010837cb5c();
            func_0x00010837cc60();
            uStack_e8 = iStack_e4 + uStack_e8 & 3;
            func_0x00010837cb5c();
            func_0x00010837cba4();
            iVar12 = iVar12 + -1;
          } while (iVar12 != 0);
        }
        func_0x00010837cc30();
        if (cVar3 == '\0') {
          func_0x00010837ca9c(&lStack_110);
          *(undefined1 *)(lStack_110 + 0xc0) = 2;
          *(bool *)(lStack_110 + 0xc6) = uVar10 == 1;
          *(byte *)(lStack_110 + 0xc2) = (byte)uVar11 & 7;
        }
        func_0x00010837cdf4();
      }
      return param_1;
    case 4:
      goto LAB_1082d8340;
    case 5:
      goto code_r0x0001082d82b4;
    case 6:
      func_0x0001082d87a0();
      FUN_10817abbc();
      param_2 = (float *)(unaff_x20 + 8);
      param_1 = unaff_x19;
      break;
    default:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1082d83b8);
      (*pcVar4)();
    }
    func_0x00010837cf24(*param_2,param_2[1]);
    FUN_108377cd4();
    puVar7 = (undefined4 *)&stack0xffffffffffffffc8;
    func_0x00010837ca9c();
    func_0x00010837cee4();
    FUN_10837e8b4();
    *puVar7 = unaff_s9;
    puVar7[1] = unaff_s8;
    func_0x00010837cb1c();
    return param_1;
  }
code_r0x0001082d82b4:
  func_0x0001082d87a0();
  FUN_10837b4c0();
  if (*(char *)(unaff_x20 + 0x3b) != '\x01') {
    return param_1;
  }
  *(byte *)((long)unaff_x19 + 0xe) = *(byte *)((long)unaff_x19 + 0xe) ^ 2;
  return param_1;
}



/* Entry: 108287e84; end: 108287e87;  */

void FUN_108287e84(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)();
  return;
}



/* Entry: 108287e88; end: 108287edb;  */

undefined8 FUN_108287e88(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  FUN_108279f20(param_1,param_3);
  uVar1 = *(undefined8 *)(param_3 + 0x10);
  *(undefined8 *)(param_3 + 0x10) = 0;
  FUN_108166048(param_2,uVar1);
  return param_2;
}



/* Entry: 108287edc; end: 108287eeb;  */

void FUN_108287edc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(uVar1);
  return;
}



/* Entry: 108287eec; end: 108287f0b;  */

void FUN_108287eec(long param_1)

{
  if (*(char *)(param_1 + 0xe0) == '\x01') {
    func_0x00010827f18c();
  }
  return;
}



/* Entry: 108287f0c; end: 108287f4f;  */

int FUN_108287f0c(float param_1)

{
  float fVar1;
  
  if (0.03 < param_1) {
    fVar1 = (float)NEON_fminnm((int)(param_1 * 3.0),0x4effffff);
    if (fVar1 <= -2.1474835e+09) {
      fVar1 = -2.1474835e+09;
    }
    return (int)fVar1;
  }
  return 0;
}



/* Entry: 108287f50; end: 108287feb;  */

void FUN_108287f50(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long *param_8)

{
  long lStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 auStack_58 [40];
  
  FUN_10817500c(param_7);
  uStack_68 = param_1;
  uStack_64 = param_2;
  uStack_60 = param_3;
  uStack_5c = param_4;
  FUN_10814c9e0(auStack_58,&uStack_68,param_6,0);
  lStack_70 = *param_8;
  *param_8 = 0;
  FUN_1082c462c(param_5,param_7,auStack_58,&lStack_70);
  if (lStack_70 != 0) {
    func_0x000108288a38();
  }
  return;
}



/* Entry: 108287fec; end: 10828815f;  */

void FUN_108287fec(float param_1,float param_2,float param_3,float param_4,undefined8 param_5,
                  long param_6,undefined8 *param_7)

{
  undefined8 uVar1;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined2 uStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined2 uStack_64;
  
  if (*(char *)(*(long *)(param_6 + 0x10) + 99) == '\x01') {
    uStack_70 = *param_7;
    *param_7 = 0;
    uStack_68 = *(undefined4 *)(param_7 + 1);
    uStack_64 = *(undefined2 *)((long)param_7 + 0xc);
    FUN_10817500c(in_x6);
    fStack_80 = param_1;
    fStack_7c = param_2;
    fStack_78 = param_3;
    fStack_74 = param_4;
    func_0x000108288edc(&uStack_70);
    FUN_1082cdf08();
    uVar1 = uStack_70;
  }
  else {
    FUN_10817500c(in_x7);
    fStack_80 = param_1 + 0.5;
    fStack_7c = param_2 + 0.5;
    fStack_78 = param_3 + -0.5;
    fStack_74 = param_4 + -0.5;
    func_0x00010816882c(&fStack_80);
    uStack_90 = *param_7;
    *param_7 = 0;
    uStack_88 = *(undefined4 *)(param_7 + 1);
    uStack_84 = *(undefined2 *)((long)param_7 + 0xc);
    FUN_10817500c(in_x6);
    func_0x000108288b34();
    func_0x000108288edc(&uStack_90);
    FUN_1082cdf9c();
    uVar1 = uStack_90;
  }
  FUN_108287d44(uVar1);
  return;
}



/* Entry: 108288160; end: 108288187;  */

void FUN_108288160(long param_1)

{
  FUN_108279a90(param_1 + 8);
  *(undefined1 *)(param_1 + 0x18) = 0;
  return;
}



/* Entry: 108288188; end: 1082881df;  */

void FUN_108288188(undefined8 param_1)

{
  undefined8 *in_x4;
  long *plStack_28;
  
  plStack_28 = (long *)*in_x4;
  *in_x4 = 0;
  FUN_1082cc4bc(param_1,&plStack_28,1);
  if (plStack_28 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000108288e60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plStack_28 + 8))();
    return;
  }
  return;
}



/* Entry: 1082881e0; end: 108288627;  */

void FUN_1082881e0(undefined8 param_1,long *param_2,long param_3,long *param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                  ulong param_10,int param_11,int param_12,int param_13,int param_14,
                  undefined8 *param_15,undefined4 param_16)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 extraout_x9;
  int iVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  undefined8 *puStack_168;
  long *plStack_160;
  long *plStack_158;
  undefined8 *puStack_150;
  undefined4 *puStack_148;
  undefined4 *puStack_140;
  undefined4 *puStack_138;
  undefined4 *puStack_130;
  int *piStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  ulong uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  int aiStack_f8 [2];
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined4 uStack_c8;
  undefined2 uStack_c4;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  int iStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  iVar2 = param_14;
  iVar1 = param_13;
  iVar6 = (int)(param_10 >> 0x20);
  uStack_8c = (undefined4)param_6;
  uStack_90 = (undefined4)param_1;
  iStack_94 = 0;
  uStack_a8 = *param_15;
  *param_15 = 0;
  iVar8 = (int)param_10;
  puStack_168 = (undefined8 *)0x0;
  plStack_160 = (long *)0x3f000000;
  lVar3 = param_3;
  uStack_88 = param_7;
  uStack_80 = param_8;
  func_0x000108288ea4(*(undefined1 *)(*param_4 + 0xcb));
  FUN_1082bfec4(&lStack_a0,lVar3,extraout_x9,&uStack_a8);
  FUN_10810a400(&uStack_a8);
  if (lStack_a0 == 0) {
    *param_2 = 0;
  }
  else {
    uStack_b0 = param_10;
    lVar3 = *param_4;
    FUN_1082b1dfc();
    uStack_c0 = 0;
    puVar4 = &uStack_88;
    lStack_b8 = lVar3;
    func_0x000108219544(puVar4,&uStack_c0);
    if (((int)puVar4 == 0) ||
       ((*(byte *)(*(long *)(*(long *)(*(long *)(param_3 + 0x10) + 0xb8) + 0x10) + 99) & 1) != 0)) {
      piVar7 = (int *)((ulong)&uStack_100 | 4);
      piVar9 = aiStack_f8;
      uStack_f0 = 0;
      uStack_e8 = 0;
      piVar10 = aiStack_f8 + 1;
      uStack_100 = 0;
      aiStack_f8[0] = 0;
      aiStack_f8[1] = 0;
      if (iVar1 == 0) {
        uStack_110 = param_10;
        uStack_108 = CONCAT44(uStack_88._4_4_,param_11);
        iVar1 = uStack_88._4_4_;
        if (uStack_88._4_4_ <= iVar6) {
          iVar1 = iVar6;
        }
        uStack_120 = CONCAT44(uStack_80._4_4_,iVar8);
        uStack_118 = CONCAT44(param_12,param_11);
        iVar6 = uStack_80._4_4_;
        if (param_12 <= uStack_80._4_4_) {
          iVar6 = param_12;
        }
        uStack_e0 = CONCAT44(iVar1,iVar2 + (int)uStack_88);
        uStack_d8 = CONCAT44(iVar6,(int)uStack_80 - iVar2);
        func_0x000108288ca8();
        param_12 = uStack_d8._4_4_;
        iVar6 = uStack_e0._4_4_;
        if ((int)puVar4 == 0) {
          uStack_f0 = CONCAT44(uStack_e0._4_4_,iVar8);
          uStack_e8 = CONCAT44(uStack_d8._4_4_,(int)uStack_e0);
          uStack_100 = CONCAT44(uStack_100._4_4_,(int)uStack_d8);
        }
        else {
          uStack_f0 = CONCAT44(uStack_f0._4_4_,iVar8);
          piVar7 = (int *)((ulong)&uStack_f0 | 4);
          piVar9 = (int *)&uStack_e8;
          piVar10 = (int *)((long)&uStack_e8 + 4);
          param_11 = param_11;
        }
      }
      else {
        uStack_110 = param_10;
        uStack_108 = CONCAT44(param_12,(int)uStack_88);
        iVar1 = (int)uStack_88;
        if ((int)uStack_88 <= iVar8) {
          iVar1 = iVar8;
        }
        uStack_120 = CONCAT44(iVar6,(int)uStack_80);
        iVar8 = (int)uStack_80;
        if (param_11 <= (int)uStack_80) {
          iVar8 = param_11;
        }
        uStack_118 = CONCAT44(param_12,param_11);
        uStack_e0 = CONCAT44(iVar2 + uStack_88._4_4_,iVar1);
        uStack_d8 = CONCAT44(uStack_80._4_4_ - iVar2,iVar8);
        func_0x000108288ca8();
        param_11 = (int)uStack_d8;
        if ((int)puVar4 == 0) {
          uStack_f0 = CONCAT44(iVar6,(int)uStack_e0);
          uStack_e8 = CONCAT44(uStack_e0._4_4_,(int)uStack_d8);
          uStack_100 = CONCAT44(uStack_100._4_4_,(int)uStack_e0);
          iVar6 = uStack_d8._4_4_;
        }
        else {
          uStack_f0 = CONCAT44(uStack_f0._4_4_,(int)uStack_e0);
          piVar7 = (int *)((ulong)&uStack_f0 | 4);
          piVar9 = (int *)&uStack_e8;
          piVar10 = (int *)((long)&uStack_e8 + 4);
        }
      }
      *piVar7 = iVar6;
      *piVar9 = param_11;
      *piVar10 = param_12;
      puStack_168 = &uStack_b0;
      plStack_160 = &lStack_a0;
      puStack_150 = &uStack_88;
      puStack_148 = &uStack_8c;
      puStack_140 = &param_13;
      puStack_138 = &param_14;
      puStack_130 = &uStack_90;
      piStack_128 = &iStack_94;
      plStack_158 = param_4;
      func_0x000108288ca8();
      if (((ulong)puVar4 & 1) == 0) {
        if ((uStack_d8._4_4_ - uStack_e0._4_4_) * ((int)uStack_d8 - (int)uStack_e0) < 0x10000) {
          FUN_10838eae0(&uStack_f0,&uStack_e0);
          FUN_10838eae0(&uStack_f0,&uStack_100);
          uStack_e0 = 0;
          uStack_d8 = 0;
          uStack_100 = 0;
          aiStack_f8[0] = 0;
          aiStack_f8[1] = 0;
          if (iStack_94 == 0) {
            FUN_10838eae0(&uStack_f0,&uStack_110);
            FUN_10838eae0(&uStack_f0,&uStack_120);
            uStack_110 = 0;
            uStack_108 = 0;
            uStack_120 = 0;
            uStack_118 = 0;
          }
        }
      }
      uVar5 = 0;
      FUN_10821a6d8();
      if ((uVar5 & 1) == 0) {
        if (iStack_94 == 3) {
          FUN_1082888b8(uStack_b0 & 0xffffffff,uStack_b0._4_4_,&lStack_a0);
        }
        else {
          func_0x000108288cf8();
        }
      }
      uVar5 = 0;
      FUN_10821a6d8();
      if ((uVar5 & 1) == 0) {
        if (iStack_94 == 3) {
          uVar5 = uStack_b0 & 0xffffffff;
          FUN_1082888b8(uVar5,uStack_b0._4_4_,&lStack_a0);
        }
        else {
          func_0x000108288cf8();
        }
      }
      func_0x000108288ca8();
      if ((uVar5 & 1) == 0) {
        func_0x000108288e3c();
        func_0x000108288e3c();
      }
      func_0x000108288e3c();
    }
    else {
      puStack_168 = (undefined8 *)0x0;
      lStack_d0 = *param_4;
      *param_4 = 0;
      uStack_c8 = (undefined4)param_4[1];
      uStack_c4 = *(undefined2 *)((long)param_4 + 0xc);
      plStack_160 = (long *)CONCAT44(param_12 - iVar6,param_11 - iVar8);
      FUN_108288664(param_1,lStack_a0,&lStack_d0,&uStack_88,param_10,&puStack_168,param_6,iVar1,
                    iVar2,0);
      FUN_108287d44(lStack_d0);
    }
    lVar3 = lStack_a0;
    lStack_a0 = 0;
    *param_2 = lVar3;
  }
  FUN_10827f5e4(&lStack_a0);
  return;
}



/* Entry: 108288628; end: 108288663;  */

ulong FUN_108288628(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = (long)(int)*param_1 - (long)(int)*param_2;
  uVar2 = (long)(int)((ulong)*param_1 >> 0x20) - (long)(int)((ulong)*param_2 >> 0x20);
  uVar1 = uVar1 ^ (uVar1 ^ 0xffffffff80000001) & ~-(ulong)(-0x7fffffff < (long)uVar1);
  uVar2 = uVar2 ^ (uVar2 ^ 0xffffffff80000001) & ~-(ulong)(-0x7fffffff < (long)uVar2);
  return (uVar1 ^ (uVar1 ^ 0x7fffffff) & ~-(ulong)((long)uVar1 < 0x7fffffff)) & 0xffffffff |
         (uVar2 ^ (uVar2 ^ 0x7fffffff) & ~-(ulong)((long)uVar2 < 0x7fffffff)) << 0x20;
}



/* Entry: 108288664; end: 1082888b7;  */

void FUN_108288664(undefined8 param_1,long param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,int param_8,long param_9,
                  uint param_10)

{
  undefined4 uVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  int extraout_w10;
  undefined4 uVar5;
  ulong uVar6;
  long lStack_188;
  undefined8 uStack_180;
  undefined4 uStack_178;
  undefined2 uStack_174;
  long lStack_170;
  undefined1 auStack_168 [224];
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  uVar6 = (ulong)param_10;
  uVar4 = param_6;
  FUN_108287688();
  uStack_88 = uVar4;
  uStack_80 = param_5;
  FUN_10833763c(param_1,param_9,auStack_168);
  func_0x000108287468(uVar6);
  uVar5 = (undefined4)param_9;
  uVar1 = uVar5;
  if (param_8 != 0) {
    uVar1 = 0;
  }
  if (param_8 != 1) {
    uVar5 = 0;
  }
  uVar4 = *(undefined8 *)(*(long *)(*(long *)(param_2 + 8) + 0x10) + 0xb8);
  uStack_180 = *param_3;
  *param_3 = 0;
  uStack_178 = *(undefined4 *)(param_3 + 1);
  uStack_174 = *(undefined2 *)((long)param_3 + 0xc);
  FUN_108287fec(&lStack_170,uVar4,&uStack_180,param_7,
                uVar6 & 0xffffffff | (uVar6 & 0xffffffff) << 8 | 0x100000000,0x100000000,param_4,
                &uStack_88,uVar1,uVar5);
  FUN_108287d44(uStack_180);
  FUN_1083377d0();
  lVar3 = param_9;
  FUN_108287aa8();
  func_0x000108288c60();
  if (param_9 != 0) {
    do {
      func_0x000108288a64();
    } while (extraout_w10 != 0);
  }
  lStack_78 = param_9;
  FUN_1082cc5c8(lVar3,&lStack_78,&UNK_10f481b44,1);
  FUN_108154c00(&lStack_78);
  uVar2 = *(uint *)(lVar3 + 0x50);
  _memcpy(lVar3 + 0x68,auStack_168,0xe0);
  *(ulong *)(lVar3 + 0x148) =
       CONCAT44(-(uint)((int)((uint)(param_8 == 0) << 0x1f) < 0),
                -(uint)((int)((uint)(param_8 == 0) << 0x1f) < 0)) & 0x3f8000003f800000 ^
       0x3f80000000000000;
  FUN_108288188(lVar3,lVar3 + 0x150,lVar3 + 0x68 + (ulong)uVar2 + 2,&UNK_10f47d354,&lStack_170);
  lStack_188 = lVar3;
  FUN_108287478(param_2,&uStack_88,param_6,&lStack_188);
  lVar3 = lStack_188;
  lStack_188 = 0;
  if (lVar3 != 0) {
    func_0x000108288a38();
  }
  lVar3 = lStack_170;
  lStack_170 = 0;
  if (lVar3 != 0) {
    func_0x000108288a38();
  }
  return;
}



/* Entry: 1082888b8; end: 10828890f;  */

void FUN_1082888b8(int param_1,int param_2,undefined8 *param_3,undefined8 param_4,undefined8 param_5
                  )

{
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_38 = CONCAT44(-param_2,-param_1);
  uStack_30 = param_4;
  uStack_28 = param_5;
  FUN_1082889d8(&uStack_30,&uStack_38);
  FUN_10827b97c(*param_3,&uStack_30,&UNK_10df132c8);
  return;
}



/* Entry: 108288910; end: 1082889d7;  */

void FUN_108288910(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 extraout_x9;
  undefined8 uVar1;
  int extraout_w12;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_38 = CONCAT44(-((int *)*param_1)[1],-*(int *)*param_1);
  uStack_30 = param_2;
  uStack_28 = param_3;
  FUN_1082889d8(&uStack_30,&uStack_38);
  uVar1 = 0;
  if (*(long *)param_1[2] != 0) {
    do {
      func_0x000108288adc();
      uVar1 = extraout_x9;
    } while (extraout_w12 != 0);
  }
  FUN_108288664(*(undefined4 *)param_1[7]);
  FUN_108287d44(uVar1);
  return;
}



/* Entry: 1082889d8; end: 108288c67;  */

void FUN_1082889d8(uint *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar5 = (long)(int)*(undefined8 *)param_1 + (long)*param_2;
  uVar6 = (long)(int)((ulong)*(undefined8 *)param_1 >> 0x20) + (long)param_2[1];
  uVar7 = (long)*param_2 + (long)(int)*(undefined8 *)(param_1 + 2);
  uVar8 = (long)param_2[1] + (long)(int)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20);
  uVar7 = uVar7 ^ (uVar7 ^ 0xffffffff80000001) & ~-(ulong)(-0x7fffffff < (long)uVar7);
  uVar8 = uVar8 ^ (uVar8 ^ 0xffffffff80000001) & ~-(ulong)(-0x7fffffff < (long)uVar8);
  uVar5 = uVar5 ^ (uVar5 ^ 0xffffffff80000001) & ~-(ulong)(-0x7fffffff < (long)uVar5);
  uVar6 = uVar6 ^ (uVar6 ^ 0xffffffff80000001) & ~-(ulong)(-0x7fffffff < (long)uVar6);
  uVar4 = (uint)uVar5;
  uVar1 = (uint)uVar6;
  uVar2 = (uint)uVar7;
  uVar3 = (uint)uVar8;
  param_1[2] = uVar2 ^ (uVar2 ^ 0x7fffffff) & ~-(uint)((long)uVar7 < 0x7fffffff);
  param_1[3] = uVar3 ^ (uVar3 ^ 0x7fffffff) & ~-(uint)((long)uVar8 < 0x7fffffff);
  *param_1 = uVar4 ^ (uVar4 ^ 0x7fffffff) & ~-(uint)((long)uVar5 < 0x7fffffff);
  param_1[1] = uVar1 ^ (uVar1 ^ 0x7fffffff) & ~-(uint)((long)uVar6 < 0x7fffffff);
  return;
}



/* Entry: 108288c68; end: 108288c87;  */

void FUN_108288c68(long param_1)

{
  undefined4 in_stack_000001f0;
  undefined4 in_stack_000001f4;
  
  FUN_108287df8(*(undefined8 *)(param_1 + 0x18),in_stack_000001f0,in_stack_000001f4);
  return;
}



/* Entry: 108288c88; end: 108288f3b;  */

undefined8 * FUN_108288c88(void)

{
  long unaff_x29;
  
  FUN_1082a619c(unaff_x29 + -0xc0);
  FUN_10810a400(unaff_x29 + -0xd8);
  FUN_1083312f4(*(undefined8 *)(unaff_x29 + -0xf0));
  return (undefined8 *)(unaff_x29 + -0xf0);
}



/* Entry: 108288f3c; end: 108288f83;  */

void FUN_108288f3c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x18;
  __Znwm();
  FUN_108288f84();
  *param_1 = uVar1;
  return;
}



/* Entry: 108288f84; end: 108288fef;  */

undefined4 * FUN_108288f84(undefined4 *param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  
  *param_1 = 1;
  *(undefined8 *)(param_1 + 2) = 0;
  param_1[4] = param_2;
  if (param_2 != 0) {
    FUN_108288ff0(&uStack_28,(long)param_2);
    uVar1 = uStack_28;
    uStack_28 = 0;
    FUN_108289f94(param_1 + 2,uVar1);
    func_0x000108289f10(&uStack_28);
  }
  return param_1;
}



/* Entry: 108288ff0; end: 10828904f;  */

void FUN_108288ff0(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  
  uVar2 = param_2 * 0x10;
  puVar1 = (undefined8 *)(uVar2 + 0x10);
  if (0xffffffffffffffef < uVar2 || (param_2 & 0xf000000000000000) != 0) {
    puVar1 = (undefined8 *)0xffffffffffffffff;
  }
  __Znam();
  *puVar1 = 0x10;
  puVar1[1] = param_2;
  if (param_2 != 0) {
    _bzero(puVar1 + 2,uVar2);
  }
  *param_1 = puVar1 + 2;
  return;
}



/* Entry: 108289050; end: 1082891af;  */

void FUN_108289050(long *param_1,long param_2,long param_3,int param_4)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lStack_58;
  long lStack_50;
  undefined1 uStack_48;
  
  if (param_3 == 0x8000) {
    plVar3 = (long *)0x0;
    for (lVar4 = 0;
        (ulong)(*(uint *)(param_2 + 0x10) & ((int)*(uint *)(param_2 + 0x10) >> 0x1f ^ 0xffffffffU))
        << 4 != lVar4; lVar4 = lVar4 + 0x10) {
      plVar1 = (long *)(*(long *)(param_2 + 8) + lVar4);
      lVar2 = *plVar1;
      if (lVar2 == 0) {
        if (plVar3 != (long *)0x0) goto LAB_1082890f8;
        FUN_1082891b0(&lStack_50,0x8000);
        lVar2 = lStack_50;
        lStack_50 = 0;
        func_0x000108289228(*(long *)(param_2 + 8) + lVar4,lVar2);
        func_0x00010828a218();
        lStack_50 = 0;
        uStack_48 = 0;
        if (*(long *)(param_2 + 8) == 0) goto LAB_1082890cc;
        plVar3 = (long *)(*(long *)(param_2 + 8) + lVar4);
        goto joined_r0x00010828918c;
      }
      if (*(int *)(lVar2 + 8) != 1) {
        plVar1 = plVar3;
      }
      plVar3 = plVar1;
    }
    if (plVar3 != (long *)0x0) {
LAB_1082890f8:
      lStack_50 = 0;
      uStack_48 = 0;
      goto joined_r0x00010828918c;
    }
  }
LAB_1082890cc:
  uStack_48 = 0;
  lStack_50 = 0;
  FUN_1082891b0(&lStack_58,param_3);
  lVar4 = lStack_50;
  lStack_50 = lStack_58;
  lStack_58 = 0;
  FUN_108289e90(lVar4);
  func_0x00010828a1e0();
  plVar3 = &lStack_50;
joined_r0x00010828918c:
  if ((param_4 != 0) && ((*(byte *)(plVar3 + 1) & 1) == 0)) {
    *(undefined1 *)(plVar3 + 1) = 1;
    _bzero(*(undefined8 *)(*plVar3 + 0x10),*(undefined8 *)(*plVar3 + 0x18));
  }
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
  }
  *param_1 = lVar4;
  func_0x00010828a218();
  return;
}



/* Entry: 1082891b0; end: 10828921f;  */

void FUN_1082891b0(undefined8 *param_1,ulong param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  
  if (param_2 < 0xffffffffffffffe0) {
    puVar2 = (undefined8 *)(param_2 + 0x20);
    __Znwm();
    *(undefined4 *)(puVar2 + 1) = 1;
    *puVar2 = &PTR_FUN_110a34eb8;
    puVar2[2] = puVar2 + 4;
    puVar2[3] = param_2;
    *param_1 = puVar2;
    return;
  }
  FUN_10841076c(&UNK_10f481b6f);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x108289220);
  (*pcVar1)();
}



/* Entry: 108289220; end: 108289237;  */

undefined8 FUN_108289220(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108289238; end: 108289297;  */

undefined8 *
FUN_108289238(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_110a34e00;
  param_1[1] = 0;
  FUN_108289298(param_1 + 2,8);
  uVar1 = *param_4;
  *param_4 = 0;
  param_1[4] = uVar1;
  param_1[5] = 0;
  param_1[6] = param_2;
  *(undefined4 *)(param_1 + 7) = param_3;
  param_1[8] = 0;
  return param_1;
}



/* Entry: 108289298; end: 1082892db;  */

undefined8 * FUN_108289298(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0x100000000;
  func_0x000108289fac();
  return param_1;
}



/* Entry: 1082892dc; end: 108289363;  */

void FUN_1082892dc(ulong param_1)

{
  code *pcVar1;
  int extraout_w8;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x19;
  long lVar2;
  
  func_0x00010828a240();
  if (extraout_w8 != 0) {
    func_0x00010828a234();
    lVar2 = *(long *)(extraout_x8 + -8);
    func_0x00010828a18c();
    if (((param_1 & 1) == 0) && (*(long *)(lVar2 + 8) != 0)) {
      if (*(int *)(unaff_x19 + 0x18) == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x108289340);
        (*pcVar1)();
      }
      func_0x00010828a234();
      func_0x00010828a1ac(*(undefined8 *)(extraout_x8_00 + -8));
      func_0x0001082a0268();
    }
  }
  while (*(int *)(unaff_x19 + 0x18) != 0) {
    func_0x000108289340();
  }
  return;
}



/* Entry: 108289364; end: 1082893ab;  */

undefined8 * FUN_108289364(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a34e00;
  FUN_1082892dc();
  FUN_108289e68(param_1 + 5);
  FUN_108289ea0(param_1 + 4);
  FUN_10828a0d0(param_1 + 2);
  return param_1;
}



/* Entry: 1082893ac; end: 1082893af;  */

undefined8 * FUN_1082893ac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a34e00;
  FUN_1082892dc();
  FUN_108289e68(param_1 + 5);
  FUN_108289ea0(param_1 + 4);
  FUN_10828a0d0(param_1 + 2);
  return param_1;
}



/* Entry: 1082893b0; end: 1082893c3;  */

void FUN_1082893b0(void)

{
  FUN_108289364();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1082893c4; end: 1082893ef;  */

/* WARNING: Possible PIC construction at 0x00010828946c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108289470) */
/* WARNING: Removing unreachable block (ram,0x000108289408) */
/* WARNING: Removing unreachable block (ram,0x000108289410) */
/* WARNING: Removing unreachable block (ram,0x000108289474) */
/* WARNING: Removing unreachable block (ram,0x00010828941c) */
/* WARNING: Removing unreachable block (ram,0x000108289454) */
/* WARNING: Removing unreachable block (ram,0x000108289424) */
/* WARNING: Removing unreachable block (ram,0x000108289460) */

void FUN_1082893c4(long param_1)

{
  int iVar1;
  long lVar2;
  
  *(undefined8 *)(param_1 + 8) = 0;
  FUN_1082892dc();
  lVar2 = *(long *)(param_1 + 0x28);
  *(long *)(param_1 + 0x28) = 0;
  if (lVar2 == 0) {
    return;
  }
  iVar1 = *(int *)(lVar2 + 8) + -1;
  *(int *)(lVar2 + 8) = iVar1;
  if (iVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 1082893f0; end: 108289487;  */

/* WARNING: Possible PIC construction at 0x00010828946c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108289470) */

void FUN_1082893f0(long param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lStack_28;
  
  if (param_2 == 0) {
    lVar2 = 0;
  }
  else {
    if ((*(long *)(param_1 + 0x28) != 0) &&
       (param_2 <= *(ulong *)(*(long *)(param_1 + 0x28) + 0x18))) {
      return;
    }
    if (*(long *)(param_1 + 0x20) == 0) {
      FUN_1082891b0(&lStack_28,param_2);
    }
    else {
      FUN_108289050(&lStack_28,*(long *)(param_1 + 0x20),param_2,
                    *(ulong *)(*(long *)(*(long *)(param_1 + 0x30) + 0x10) + 0x18) >> 0x14 & 1);
    }
    lVar2 = lStack_28;
    lStack_28 = 0;
  }
  lVar3 = *(long *)(param_1 + 0x28);
  *(long *)(param_1 + 0x28) = lVar2;
  if (lVar3 == 0) {
    return;
  }
  iVar1 = *(int *)(lVar3 + 8) + -1;
  *(int *)(lVar3 + 8) = iVar1;
  if (iVar1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar3);
  return;
}



/* Entry: 108289488; end: 10828959f;  */

void FUN_108289488(ulong param_1)

{
  long lVar1;
  code *pcVar2;
  long extraout_x8;
  long unaff_x19;
  long lVar3;
  
  if (*(long *)(param_1 + 0x40) != 0) {
    func_0x00010828a240();
    if ((int)extraout_x8 == 0) {
LAB_108289500:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x108289504);
      (*pcVar2)();
    }
    lVar1 = *(long *)(unaff_x19 + 0x10) + extraout_x8 * 0x10;
    lVar3 = *(long *)(lVar1 + -8);
    func_0x00010828a18c();
    if ((param_1 & 1) == 0) {
      if (*(long *)(lVar3 + 8) == 0) {
        func_0x00010828a180(*(undefined8 *)(lVar1 + -8));
        if (*(int *)(unaff_x19 + 0x18) == 0) goto LAB_108289500;
        func_0x00010828a234();
        func_0x000108289504();
      }
      else {
        func_0x00010828a1f0();
      }
    }
    *(undefined8 *)(unaff_x19 + 0x40) = 0;
  }
  return;
}



/* Entry: 1082895a0; end: 1082896cb;  */

long FUN_1082895a0(long param_1,ulong param_2,ulong param_3,undefined8 param_4,long *param_5)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  if (*(long *)(param_1 + 0x40) != 0) {
    if (*(int *)(param_1 + 0x18) == 0) goto LAB_1082896c8;
    lVar4 = *(long *)(param_1 + 0x10) + (long)*(int *)(param_1 + 0x18) * 0x10;
    lVar3 = *(long *)(lVar4 + -8);
    func_0x00010828a180();
    uVar6 = lVar3 - *(ulong *)(lVar4 + -0x10);
    uVar5 = 0;
    if (param_3 != 0) {
      uVar5 = uVar6 / param_3;
    }
    uVar5 = param_3 + (uVar5 * param_3 - uVar6);
    uVar1 = 0;
    if (param_3 != 0) {
      uVar1 = uVar5 / param_3;
    }
    uVar5 = uVar5 - uVar1 * param_3;
    uVar1 = uVar5 + param_2;
    if (CARRY8(uVar5,param_2)) {
      return 0;
    }
    if (uVar1 <= *(ulong *)(lVar4 + -0x10)) {
      _bzero(uVar6 + *(long *)(param_1 + 0x40),uVar5);
      *param_5 = uVar5 + uVar6;
      FUN_1082896cc(param_4,(long *)(lVar4 + -8));
      *(ulong *)(lVar4 + -0x10) = *(long *)(lVar4 + -0x10) - uVar1;
      *(ulong *)(param_1 + 8) = *(long *)(param_1 + 8) + uVar1;
      return uVar5 + uVar6 + *(long *)(param_1 + 0x40);
    }
  }
  lVar4 = param_1;
  FUN_108289718(param_1,param_2);
  if ((int)lVar4 == 0) {
    return 0;
  }
  *param_5 = 0;
  if (*(int *)(param_1 + 0x18) != 0) {
    lVar4 = *(long *)(param_1 + 0x10) + (long)*(int *)(param_1 + 0x18) * 0x10;
    FUN_1082896cc(param_4,lVar4 + -8);
    *(ulong *)(lVar4 + -0x10) = *(long *)(lVar4 + -0x10) - param_2;
    *(ulong *)(param_1 + 8) = *(long *)(param_1 + 8) + param_2;
    return *(long *)(param_1 + 0x40);
  }
LAB_1082896c8:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1082896cc);
  (*pcVar2)();
}



/* Entry: 1082896cc; end: 108289717;  */

long * FUN_1082896cc(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = (long *)*param_2;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  plVar1 = (long *)*param_1;
  *param_1 = (long)plVar2;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))();
  }
  return param_1;
}



/* Entry: 108289718; end: 108289953;  */

bool FUN_108289718(long param_1,ulong param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  undefined8 uStack_50;
  long lStack_48;
  
  if (param_2 < 0x8001) {
    param_2 = 0x8000;
  }
  FUN_108289fc4(0x3ff8000000000000,param_1 + 0x10,1);
  puVar1 = (undefined8 *)(*(long *)(param_1 + 0x10) + (long)*(int *)(param_1 + 0x18) * 0x10);
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  puVar1[1] = 0;
  uVar7 = *(ulong *)(*(long *)(*(long *)(param_1 + 0x30) + 0x10) + 0x18);
  uVar6 = (uint)uVar7;
  if ((uVar6 >> 0x11 & 1) == 0) {
    if (((uVar6 >> 0xb & 1) != 0) && (*(int *)(param_1 + 0x38) == 2)) goto LAB_108289790;
    FUN_1082af050(&lStack_48,*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 0x20) + 0x80),
                  param_2,*(int *)(param_1 + 0x38),0,0);
    lVar4 = lStack_48;
    lStack_48 = 0;
    lVar8 = 0;
    if (lVar4 != 0) {
      lVar8 = lVar4 + 0xb0;
    }
    FUN_10826b598(&lStack_48);
  }
  else {
LAB_108289790:
    if (*(long *)(param_1 + 0x20) == 0) {
      FUN_1082891b0(&lStack_48,param_2);
    }
    else {
      FUN_108289050(&lStack_48,*(long *)(param_1 + 0x20),param_2,uVar7 >> 0x14 & 1);
    }
    lVar8 = lStack_48;
    lStack_48 = 0;
    func_0x00010828a1e0();
  }
  uStack_50 = 0;
  plVar3 = (long *)puVar1[1];
  puVar1[1] = lVar8;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x18))();
  }
  FUN_10828a140(&uStack_50);
  plVar3 = (long *)puVar1[1];
  if (plVar3 == (long *)0x0) {
    FUN_108289b34(param_1 + 0x10);
    goto LAB_108289914;
  }
  plVar5 = plVar3;
  (**(code **)(*plVar3 + 0x20))();
  *puVar1 = plVar5;
  if (*(long *)(param_1 + 0x40) != 0) {
    if ((int)*(uint *)(param_1 + 0x18) < 2) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x108289944);
      (*pcVar2)();
    }
    lVar8 = *(long *)(param_1 + 0x10) + (ulong)*(uint *)(param_1 + 0x18) * 0x10;
    plVar9 = *(long **)(lVar8 + -0x18);
    plVar5 = plVar9;
    (**(code **)(*plVar9 + 0x28))();
    if (((ulong)plVar5 & 1) == 0) {
      lVar4 = *(long *)(lVar8 + -0x18);
      if (plVar9[1] == 0) {
        func_0x00010828a180(lVar4);
        func_0x000108289504(param_1,(long *)(lVar8 + -0x20),lVar4 - *(long *)(lVar8 + -0x20));
      }
      else {
        func_0x00010828a1f0();
      }
    }
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  plVar5 = (long *)puVar1[1];
  (**(code **)(*plVar5 + 0x28))();
  if ((int)plVar5 == 0) {
    lVar8 = *(long *)(*(long *)(param_1 + 0x30) + 0x10);
    if ((*(int *)(lVar8 + 0x28) != 0) && ((ulong)(long)*(int *)(lVar8 + 0x2c) < param_2)) {
      func_0x00010828a1ac(puVar1[1]);
      FUN_1082a0214();
      goto LAB_1082898f4;
    }
    plVar5 = *(long **)(param_1 + 0x40);
  }
  else {
    plVar5 = *(long **)(puVar1[1] + 0x10);
LAB_1082898f4:
    *(long **)(param_1 + 0x40) = plVar5;
  }
  if (plVar5 == (long *)0x0) {
    FUN_1082893f0(param_1,*puVar1);
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x10);
  }
LAB_108289914:
  return plVar3 != (long *)0x0;
}



/* Entry: 108289954; end: 108289aaf;  */

long FUN_108289954(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5,long *param_6,long *param_7)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  code *pcVar4;
  long lVar5;
  int extraout_w8;
  long extraout_x8;
  ulong uVar6;
  long unaff_x19;
  long lVar7;
  long lVar8;
  ulong uVar9;
  
  func_0x00010828a240();
  if (extraout_w8 == 0) goto LAB_108289a00;
  func_0x00010828a234();
  lVar5 = *(long *)(extraout_x8 + -8);
  func_0x00010828a180();
  iVar2 = *(int *)(unaff_x19 + 0x18);
  if (iVar2 == 0) goto LAB_108289aac;
  uVar9 = lVar5 - *(long *)(*(long *)(unaff_x19 + 0x10) + (long)iVar2 * 0x10 + -0x10);
  if ((iVar2 == 0) || (lVar5 = *(long *)(unaff_x19 + 0x40), lVar5 == 0)) {
LAB_108289a00:
    lVar5 = unaff_x19;
    FUN_108289718();
    if ((int)lVar5 == 0) {
      return 0;
    }
    uVar9 = 0;
    lVar8 = 0;
    lVar5 = *(long *)(unaff_x19 + 0x40);
  }
  else {
    uVar3 = 0;
    if (param_4 != 0) {
      uVar3 = uVar9 / param_4;
    }
    uVar3 = param_4 + (uVar3 * param_4 - uVar9);
    uVar6 = 0;
    if (param_4 != 0) {
      uVar6 = uVar3 / param_4;
    }
    lVar8 = uVar3 - uVar6 * param_4;
    if (*(ulong *)(*(long *)(unaff_x19 + 0x10) + (long)iVar2 * 0x10 + -0x10) <
        (ulong)(lVar8 + param_2)) goto LAB_108289a00;
  }
  _bzero(lVar5 + uVar9,lVar8);
  if (*(int *)(unaff_x19 + 0x18) != 0) {
    lVar7 = *(long *)(unaff_x19 + 8);
    lVar5 = *(long *)(unaff_x19 + 0x10) + (long)*(int *)(unaff_x19 + 0x18) * 0x10;
    uVar6 = *(long *)(lVar5 + -0x10) - lVar8;
    *(ulong *)(lVar5 + -0x10) = uVar6;
    *(long *)(unaff_x19 + 8) = lVar7 + lVar8;
    param_4 = param_4 & 0xffffffff;
    uVar3 = 0;
    if (param_4 != 0) {
      uVar3 = uVar6 / param_4;
    }
    lVar7 = uVar3 * param_4;
    *param_6 = lVar8 + uVar9;
    FUN_1082896cc(param_5,lVar5 + -8);
    *param_7 = lVar7;
    if (*(int *)(unaff_x19 + 0x18) != 0) {
      lVar1 = *(long *)(unaff_x19 + 8);
      lVar5 = *(long *)(unaff_x19 + 0x10) + (long)*(int *)(unaff_x19 + 0x18) * 0x10;
      *(long *)(lVar5 + -0x10) = *(long *)(lVar5 + -0x10) - lVar7;
      *(long *)(unaff_x19 + 8) = lVar1 + lVar7;
      return *(long *)(unaff_x19 + 0x40) + lVar8 + uVar9;
    }
  }
LAB_108289aac:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x108289ab0);
  (*pcVar4)();
}



/* Entry: 108289ab0; end: 108289b33;  */

void FUN_108289ab0(undefined8 param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  ulong uVar4;
  long extraout_x8;
  long unaff_x19;
  long lVar5;
  
  if (param_2 != 0) {
    func_0x00010828a240();
    if ((int)extraout_x8 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x108289b34);
      (*pcVar3)();
    }
    lVar5 = *(long *)(unaff_x19 + 8);
    lVar1 = *(long *)(unaff_x19 + 0x10) + extraout_x8 * 0x10;
    uVar4 = *(ulong *)(lVar1 + -8);
    uVar2 = *(long *)(lVar1 + -0x10) + param_2;
    *(ulong *)(lVar1 + -0x10) = uVar2;
    *(long *)(unaff_x19 + 8) = lVar5 - param_2;
    func_0x00010828a180();
    if (uVar2 == uVar4) {
      lVar5 = *(long *)(lVar1 + -8);
      func_0x00010828a18c();
      if (((uVar4 & 1) == 0) && (*(long *)(lVar5 + 8) != 0)) {
        func_0x00010828a1ac(*(undefined8 *)(lVar1 + -8));
        func_0x0001082a0268();
      }
      FUN_108289b34(unaff_x19 + 0x10);
      *(undefined8 *)(unaff_x19 + 0x40) = 0;
      return;
    }
  }
  return;
}



/* Entry: 108289b34; end: 108289b73;  */

void FUN_108289b34(long *param_1)

{
  code *pcVar1;
  
  if ((int)param_1[1] != 0) {
    FUN_10828a140(*param_1 + (long)(int)param_1[1] * 0x10 + -8);
    *(int *)(param_1 + 1) = (int)param_1[1] + -1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x108289b74);
  (*pcVar1)();
}



/* Entry: 108289b74; end: 108289bbb;  */

void FUN_108289b74(void)

{
  undefined8 *unaff_x19;
  
  func_0x00010828a24c();
  FUN_108289238();
  func_0x00010828a1e8();
  *unaff_x19 = &PTR_FUN_110a34e20;
  return;
}



/* Entry: 108289bbc; end: 108289c1b;  */

void FUN_108289bbc(undefined8 param_1,ulong param_2,int param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  ulong uVar2;
  ulong uStack_38;
  
  uStack_38 = 0;
  uVar2 = param_2;
  func_0x000108410038(param_2,(long)param_3);
  FUN_1082895a0(param_1,uVar2,param_2,param_4,&uStack_38);
  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = (undefined4)(uStack_38 / param_2);
  }
  *param_5 = uVar1;
  return;
}



/* Entry: 108289c1c; end: 108289cc3;  */

void FUN_108289c1c(undefined8 param_1,ulong param_2,int param_3,int param_4,undefined8 param_5,
                  undefined4 *param_6,undefined4 *param_7)

{
  undefined4 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uStack_60;
  ulong uStack_58;
  
  uStack_60 = 0;
  uStack_58 = 0;
  uVar2 = param_2;
  func_0x000108410038(param_2,(long)param_3);
  uVar3 = param_2;
  func_0x000108410038(param_2,(long)param_4);
  FUN_108289954(param_1,uVar2,uVar3,param_2,param_5,&uStack_58,&uStack_60);
  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = (undefined4)(uStack_58 / param_2);
  }
  *param_6 = uVar1;
  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = (undefined4)(uStack_60 / param_2);
  }
  *param_7 = uVar1;
  return;
}


