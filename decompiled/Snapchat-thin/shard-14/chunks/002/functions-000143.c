/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b0310ac; end: 10b031153; -[SCSnapProProfileAllowedActions isEqual:] */

long FUN_10b0310ac(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b03112c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b031138;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_10b031138;
        }
        goto LAB_10b03112c;
      }
    }
    lVar3 = 0;
  }
LAB_10b031138:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b031154; end: 10b03115b; -[SCSnapProProfileAllowedActions businessId] */

undefined8 FUN_10b031154(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b03115c; end: 10b031163; -[SCSnapProProfileAllowedActions allowedActionsArray] */

undefined8 FUN_10b03115c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b031164; end: 10b03120f; -[SCSnapProProfileAllowedActions .cxx_destruct] */

void FUN_10b031164(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b031210; end: 10b03127b;  */

bool FUN_10b031210(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10b03127c; end: 10b0312f7;  */

undefined * FUN_10b03127c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f2408 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f4cc18,
                        &UNK_10e54f558,&UNK_10e54f5ac,4,FUN_10b0312f8,0);
    do {
      if (puRam00000001137f2408 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f2408;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f2408,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f2408 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f2408;
}



/* Entry: 10b0312f8; end: 10b031303;  */

bool FUN_10b0312f8(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10b031304; end: 10b03137f;  */

undefined * FUN_10b031304(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f2410 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f4cc38,
                        &UNK_10e54f5bc,&UNK_10e54f5ec,3,FUN_10b031380,0);
    do {
      if (puRam00000001137f2410 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f2410;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f2410,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f2410 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f2410;
}



/* Entry: 10b031380; end: 10b0313a3;  */

bool FUN_10b031380(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10b0313a4; end: 10b03141f;  */

undefined * FUN_10b0313a4(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f2428 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f4cc98,
                        &UNK_10e54f6bc,&UNK_10e54f84c,10,FUN_10b031420,0);
    do {
      if (puRam00000001137f2428 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f2428;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f2428,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f2428 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f2428;
}



/* Entry: 10b031420; end: 10b03142b;  */

bool FUN_10b031420(uint param_1)

{
  return param_1 < 10;
}



/* Entry: 10b03142c; end: 10b0314bb;  */

undefined * FUN_10b03142c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f2430 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e20(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f4ccb8,
                        &UNK_10e54f874,&UNK_10e54f9b4,0xd,FUN_10b0314bc,0,&UNK_10e54f9e8);
    do {
      if (puRam00000001137f2430 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f2430;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f2430,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f2430 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f2430;
}



/* Entry: 10b0314bc; end: 10b0314c7;  */

bool FUN_10b0314bc(uint param_1)

{
  return param_1 < 0xd;
}



/* Entry: 10b0314c8; end: 10b031543;  */

undefined * FUN_10b0314c8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f2438 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f4ccd8,
                        &UNK_10e54fa2c,&UNK_10e54fa3c,2,FUN_10b031544,0);
    do {
      if (puRam00000001137f2438 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f2438;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f2438,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f2438 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f2438;
}



/* Entry: 10b031544; end: 10b03154f;  */

bool FUN_10b031544(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 10b031550; end: 10b0315cb;  */

undefined * FUN_10b031550(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f2440 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f4ccf8,
                        &UNK_10e54fa44,&UNK_10e54fa68,2,FUN_10b0315cc,0);
    do {
      if (puRam00000001137f2440 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f2440;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f2440,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f2440 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f2440;
}



/* Entry: 10b0315cc; end: 10b0315d7;  */

bool FUN_10b0315cc(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 10b0315d8; end: 10b031653;  */

undefined * FUN_10b0315d8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f2448 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f4cd18,
                        &UNK_10e54fa70,&UNK_10e54fa98,3,FUN_10b031654,0);
    do {
      if (puRam00000001137f2448 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f2448;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f2448,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f2448 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f2448;
}



/* Entry: 10b031654; end: 10b03165f;  */

bool FUN_10b031654(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10b031660; end: 10b0316db;  */

undefined * FUN_10b031660(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f2450 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f4cd38,
                        &UNK_10e54faa4,&UNK_10e54fabc,3,FUN_10b0316dc,0);
    do {
      if (puRam00000001137f2450 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f2450;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f2450,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f2450 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f2450;
}



/* Entry: 10b0316dc; end: 10b0316e7;  */

bool FUN_10b0316dc(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10b0316e8; end: 10b031763;  */

undefined * FUN_10b0316e8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f2458 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f4cd58,
                        &UNK_10e54fac8,&UNK_10e54fd28,0x1a,FUN_10b031764,0);
    do {
      if (puRam00000001137f2458 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f2458;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f2458,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f2458 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f2458;
}



/* Entry: 10b031764; end: 10b03177f;  */

bool FUN_10b031764(uint param_1)

{
  return param_1 < 0xd || param_1 - 100 < 0xd;
}



/* Entry: 10b031780; end: 10b0317fb;  */

undefined * FUN_10b031780(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f2460 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f4cd78,
                        &UNK_10e54fd90,&UNK_10e54fda4,1,FUN_10b0317fc,0);
    do {
      if (puRam00000001137f2460 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f2460;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f2460,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f2460 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f2460;
}



/* Entry: 10b0317fc; end: 10b03181f;  */

bool FUN_10b0317fc(int param_1)

{
  return param_1 == 0;
}



/* Entry: 10b031820; end: 10b03189b;  */

undefined * FUN_10b031820(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f2480 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f4cdf8,
                        &UNK_10e54fe58,&UNK_10e54fe84,5,FUN_10b03189c,0);
    do {
      if (puRam00000001137f2480 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f2480;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f2480,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f2480 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f2480;
}



/* Entry: 10b03189c; end: 10b0318a7;  */

bool FUN_10b03189c(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 10b0318a8; end: 10b031923;  */

undefined * FUN_10b0318a8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f2488 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f4ce18,
                        &UNK_10e54fe98,&UNK_10e54feac,2,FUN_10b031924,0);
    do {
      if (puRam00000001137f2488 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f2488;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f2488,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f2488 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f2488;
}



/* Entry: 10b031924; end: 10b03192f;  */

bool FUN_10b031924(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 10b031930; end: 10b0319ab;  */

undefined * FUN_10b031930(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f2490 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f4ce38,
                        &UNK_10e54feb4,&UNK_10e54fec4,2,FUN_10b0319ac,0);
    do {
      if (puRam00000001137f2490 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f2490;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f2490,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f2490 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f2490;
}



/* Entry: 10b0319ac; end: 10b0319b7;  */

bool FUN_10b0319ac(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 10b0319b8; end: 10b031a33;  */

undefined * FUN_10b0319b8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f2498 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f4ce58,
                        &UNK_10e54fecc,&UNK_10e54ff24,6,FUN_10b031a34,0);
    do {
      if (puRam00000001137f2498 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f2498;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f2498,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f2498 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f2498;
}



/* Entry: 10b031a34; end: 10b031a3f;  */

bool FUN_10b031a34(uint param_1)

{
  return param_1 < 6;
}



/* Entry: 10b031a40; end: 10b031abb;  */

undefined * FUN_10b031a40(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f24a0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f4ce78,
                        &UNK_10e54ff3c,&UNK_10e54ff4c,2,FUN_10b031abc,0);
    do {
      if (puRam00000001137f24a0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f24a0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f24a0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f24a0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f24a0;
}



/* Entry: 10b031abc; end: 10b031ac7;  */

bool FUN_10b031abc(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 10b031ac8; end: 10b031b43;  */

undefined * FUN_10b031ac8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f24a8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f4ce98,
                        &UNK_10e54ff54,&UNK_10e54ff74,3,FUN_10b031b44,0);
    do {
      if (puRam00000001137f24a8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f24a8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f24a8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f24a8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f24a8;
}



/* Entry: 10b031b44; end: 10b031b4f;  */

bool FUN_10b031b44(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10b031b50; end: 10b031bcb;  */

undefined * FUN_10b031b50(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f24b0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f4ceb8,
                        &UNK_10e54ff80,&UNK_10e54ff90,2,FUN_10b031bcc,0);
    do {
      if (puRam00000001137f24b0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f24b0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f24b0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f24b0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f24b0;
}



/* Entry: 10b031bcc; end: 10b031bd7;  */

bool FUN_10b031bcc(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 10b031bd8; end: 10b031c53;  */

undefined * FUN_10b031bd8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f24b8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f4ced8,
                        &UNK_10e54ff98,&UNK_10e54ffb4,3,FUN_10b031c54,0);
    do {
      if (puRam00000001137f24b8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f24b8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f24b8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f24b8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f24b8;
}



/* Entry: 10b031c54; end: 10b031c5f;  */

bool FUN_10b031c54(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10b031c60; end: 10b031cdb;  */

undefined * FUN_10b031c60(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f24c0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f4cef8,
                        &UNK_10e54ffc0,&UNK_10e5500b0,0xd,FUN_10b031cdc,0);
    do {
      if (puRam00000001137f24c0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f24c0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f24c0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f24c0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f24c0;
}



/* Entry: 10b031cdc; end: 10b031cf7;  */

uint FUN_10b031cdc(uint param_1)

{
  return (uint)(param_1 < 0x20) & 0x801ff803U >> (ulong)(param_1 & 0x1f);
}



/* Entry: 10b031cf8; end: 10b031d73;  */

undefined * FUN_10b031cf8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f24c8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f4cf18,
                        &UNK_10e5500e4,&UNK_10e550100,4,FUN_10b031d74,0);
    do {
      if (puRam00000001137f24c8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f24c8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f24c8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f24c8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f24c8;
}



/* Entry: 10b031d74; end: 10b031d7f;  */

bool FUN_10b031d74(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10b031d80; end: 10b031dfb;  */

undefined * FUN_10b031d80(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f24d0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f4cf38,
                        &UNK_10e5500e4,&UNK_10e550110,4,FUN_10b031dfc,0);
    do {
      if (puRam00000001137f24d0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f24d0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f24d0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f24d0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f24d0;
}



/* Entry: 10b031dfc; end: 10b031e07;  */

bool FUN_10b031dfc(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10b031e08; end: 10b031e6f; +[IMPBusinessAccount descriptor] */

void FUN_10b031e08(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f24d8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c50d40,
                        &PTR____CFConstantStringClassReference_110f4cf58,&PTR_s_impala_113357488,
                        &PTR_s_id_p_113358340,2,0x18,0x1c);
    puRam00000001137f24d8 = puVar1;
  }
  return;
}



/* Entry: 10b031e70; end: 10b031ed7; +[IMPUpdateString descriptor] */

void FUN_10b031e70(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f24e0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c50d90,
                        &PTR____CFConstantStringClassReference_110f4cf78,&PTR_s_impala_113357488,
                        &PTR_DAT_1133574a0,1,0x10,0x1c);
    puRam00000001137f24e0 = puVar1;
  }
  return;
}



/* Entry: 10b031ed8; end: 10b031f3f; +[IMPUpdateBytes descriptor] */

void FUN_10b031ed8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f24e8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c50de0,
                        &PTR____CFConstantStringClassReference_110f4cf98,&PTR_s_impala_113357488,
                        &PTR_DAT_1133574c0,1,0x10,0x1c);
    puRam00000001137f24e8 = puVar1;
  }
  return;
}



/* Entry: 10b031f40; end: 10b031fa7; +[IMPUpdateInt descriptor] */

void FUN_10b031f40(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f24f0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c50e30,
                        &PTR____CFConstantStringClassReference_110f4cfb8,&PTR_s_impala_113357488,
                        &PTR_DAT_1133574e0,1,0x10,0x1c);
    puRam00000001137f24f0 = puVar1;
  }
  return;
}



/* Entry: 10b031fa8; end: 10b03200f; +[IMPUpdateBool descriptor] */

void FUN_10b031fa8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f24f8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c50e80,
                        &PTR____CFConstantStringClassReference_110f4cfd8,&PTR_s_impala_113357488,
                        &PTR_DAT_113357500,1,4,0x1c);
    puRam00000001137f24f8 = puVar1;
  }
  return;
}



/* Entry: 10b032010; end: 10b032077; +[IMPUpdateCateory descriptor] */

void FUN_10b032010(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f2500 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c50ed0,
                        &PTR____CFConstantStringClassReference_110f4cff8,&PTR_s_impala_113357488,
                        &PTR_DAT_113357520,1,8,0x1c);
    puRam00000001137f2500 = puVar1;
  }
  return;
}



/* Entry: 10b032078; end: 10b0320df; +[IMPUpdateSubCateory descriptor] */

void FUN_10b032078(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f2508 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c50f20,
                        &PTR____CFConstantStringClassReference_110f4d018,&PTR_s_impala_113357488,
                        &PTR_DAT_113357540,1,8,0x1c);
    puRam00000001137f2508 = puVar1;
  }
  return;
}



/* Entry: 10b0320e0; end: 10b032147; +[IMPUpdateConfiguredStatus descriptor] */

void FUN_10b0320e0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f2510 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c50f70,
                        &PTR____CFConstantStringClassReference_110f4d038,&PTR_s_impala_113357488,
                        &PTR_DAT_113357560,1,8,0x1c);
    puRam00000001137f2510 = puVar1;
  }
  return;
}



/* Entry: 10b032148; end: 10b0321af; +[IMPUpdateMonetizationPayoutType descriptor] */

void FUN_10b032148(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f2518 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c50fc0,
                        &PTR____CFConstantStringClassReference_110f4d058,&PTR_s_impala_113357488,
                        &PTR_DAT_113357580,1,8,0x1c);
    puRam00000001137f2518 = puVar1;
  }
  return;
}



/* Entry: 10b0321b0; end: 10b032217; +[IMPUpdateAccessAdsStatus descriptor] */

void FUN_10b0321b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f2520 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c51010,
                        &PTR____CFConstantStringClassReference_110f4d078,&PTR_s_impala_113357488,
                        &PTR_DAT_1133575a0,1,8,0x1c);
    puRam00000001137f2520 = puVar1;
  }
  return;
}



/* Entry: 10b032218; end: 10b03227f; +[IMPUpdateShowMentionsStatus descriptor] */

void FUN_10b032218(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f2528 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c51060,
                        &PTR____CFConstantStringClassReference_110f4d098,&PTR_s_impala_113357488,
                        &PTR_DAT_1133575c0,1,4,0x1c);
    puRam00000001137f2528 = puVar1;
  }
  return;
}



/* Entry: 10b032280; end: 10b0322eb; +[IMPConvertUserRequest descriptor] */

void FUN_10b032280(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f2530 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c510b0,
                        &PTR____CFConstantStringClassReference_110f4d0b8,&PTR_s_impala_113357488,
                        &PTR_s_userId_113359340,3,0x20,0x1c);
    puRam00000001137f2530 = puVar1;
  }
  return;
}



/* Entry: 10b0322ec; end: 10b032353; +[IMPConvertUserResponse descriptor] */

void FUN_10b0322ec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f2538 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c51100,
                        &PTR____CFConstantStringClassReference_110f4d0d8,&PTR_s_impala_113357488,0,0
                        ,4,0x1c);
    puRam00000001137f2538 = puVar1;
  }
  return;
}



/* Entry: 10b032354; end: 10b0323bb; +[IMPGetBusinessUserLinksRequest descriptor] */

void FUN_10b032354(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f2540 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c51150,
                        &PTR____CFConstantStringClassReference_110f4d0f8,&PTR_s_impala_113357488,
                        &PTR_DAT_1133575e0,1,0x10,0x1c);
    puRam00000001137f2540 = puVar1;
  }
  return;
}



/* Entry: 10b0323bc; end: 10b032423; +[IMPGetBusinessUserLinksResponse descriptor] */

void FUN_10b0323bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f2548 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c511a0,
                        &PTR____CFConstantStringClassReference_110f4d118,&PTR_s_impala_113357488,
                        &PTR_s_links_113357600,1,0x10,0x1c);
    puRam00000001137f2548 = puVar1;
  }
  return;
}



/* Entry: 10b032424; end: 10b03248b; +[IMPGetBusinessUserLinksByBusinessRequest descriptor] */

void FUN_10b032424(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f2550 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c511f0,
                        &PTR____CFConstantStringClassReference_110f4d138,&PTR_s_impala_113357488,
                        &PTR_DAT_113357620,1,0x10,0x1c);
    puRam00000001137f2550 = puVar1;
  }
  return;
}



/* Entry: 10b03248c; end: 10b0324f3; +[IMPGetBusinessUserLinksByBusinessResponse descriptor] */

void FUN_10b03248c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f2558 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c51240,
                        &PTR____CFConstantStringClassReference_110f4d158,&PTR_s_impala_113357488,
                        &PTR_s_links_113357640,1,0x10,0x1c);
    puRam00000001137f2558 = puVar1;
  }
  return;
}



/* Entry: 10b0324f4; end: 10b03255b; +[IMPBusinessUserLink descriptor] */

void FUN_10b0324f4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f2560 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c51290,
                        &PTR____CFConstantStringClassReference_110f4d178,&PTR_s_impala_113357488,
                        &PTR_s_userId_113358380,2,0x18,0x1c);
    puRam00000001137f2560 = puVar1;
  }
  return;
}



/* Entry: 10b03255c; end: 10b0325c3; +[IMPCreateUserInfo descriptor] */

void FUN_10b03255c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f2570 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c51330,
                        &PTR____CFConstantStringClassReference_110f4d198,&PTR_s_impala_113357488,
                        &PTR_DAT_113357660,1,0x10,0x1c);
    puRam00000001137f2570 = puVar1;
  }
  return;
}



/* Entry: 10b0325c4; end: 10b03262b; +[IMPConvertUserInfo descriptor] */

void FUN_10b0325c4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f2578 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c51380,
                        &PTR____CFConstantStringClassReference_110f4d1b8,&PTR_s_impala_113357488,0,0
                        ,4,0x1c);
    puRam00000001137f2578 = puVar1;
  }
  return;
}



/* Entry: 10b03262c; end: 10b0326bb; +[IMPCreateAccountRequest descriptor] */

undefined * FUN_10b03262c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f2580 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c513d0,
                        &PTR____CFConstantStringClassReference_110f4d1d8,&PTR_s_impala_113357488,
                        &PTR_DAT_11335d700,0x24,200,0x1c);
    func_0x00010c229040();
    puRam00000001137f2580 = puVar1;
  }
  return puRam00000001137f2580;
}



/* Entry: 10b0326bc; end: 10b032723; +[IMPCreateAccountResponse descriptor] */

void FUN_10b0326bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f2588 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c51420,
                        &PTR____CFConstantStringClassReference_110f4d1f8,&PTR_s_impala_113357488,
                        &PTR_s_id_p_113357680,1,0x10,0x1c);
    puRam00000001137f2588 = puVar1;
  }
  return;
}



/* Entry: 10b032724; end: 10b0327a3; +[IMPCreatePublisherAccountRequest descriptor] */

undefined * FUN_10b032724(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f2590 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c51470,
                        &PTR____CFConstantStringClassReference_110f4d218,&PTR_s_impala_113357488,
                        &PTR_DAT_11335b1c0,5,0x30,0x1c);
    func_0x00010c2289e0();
    puRam00000001137f2590 = puVar1;
  }
  return puRam00000001137f2590;
}



/* Entry: 10b0327a4; end: 10b03280b; +[IMPCreatePublisherAccountResponse descriptor] */

void FUN_10b0327a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f2598 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c514c0,
                        &PTR____CFConstantStringClassReference_110f4d238,&PTR_s_impala_113357488,
                        &PTR_DAT_1133576a0,1,0x10,0x1c);
    puRam00000001137f2598 = puVar1;
  }
  return;
}



/* Entry: 10b03280c; end: 10b032877; +[IMPInternalCreatePublisherRequest descriptor] */

void FUN_10b03280c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f25a0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c51510,
                        &PTR____CFConstantStringClassReference_110f4d258,&PTR_s_impala_113357488,
                        &PTR_DAT_11335b260,5,0x30,0x1c);
    puRam00000001137f25a0 = puVar1;
  }
  return;
}



/* Entry: 10b032878; end: 10b0328df; +[IMPInternalCreatePublisherResponse descriptor] */

void FUN_10b032878(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f25a8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c51560,
                        &PTR____CFConstantStringClassReference_110f4d278,&PTR_s_impala_113357488,
                        &PTR_DAT_1133576c0,1,0x10,0x1c);
    puRam00000001137f25a8 = puVar1;
  }
  return;
}



/* Entry: 10b0328e0; end: 10b03294b; +[IMPInternalCreatePublisherWithoutUserRequest descriptor] */

void FUN_10b0328e0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f25b0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c515b0,
                        &PTR____CFConstantStringClassReference_110f4d298,&PTR_s_impala_113357488,
                        &PTR_DAT_11335a420,4,0x28,0x1c);
    puRam00000001137f25b0 = puVar1;
  }
  return;
}



/* Entry: 10b03294c; end: 10b0329b3; +[IMPInternalCreatePublisherWithoutUserResponse descriptor] */

void FUN_10b03294c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f25b8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c51600,
                        &PTR____CFConstantStringClassReference_110f4d2b8,&PTR_s_impala_113357488,
                        &PTR_DAT_1133576e0,1,0x10,0x1c);
    puRam00000001137f25b8 = puVar1;
  }
  return;
}



/* Entry: 10b0329b4; end: 10b032a43; +[IMPMoveBusinessProfileRequest descriptor] */

undefined * FUN_10b0329b4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f25c0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c51650,
                        &PTR____CFConstantStringClassReference_110f4d2d8,&PTR_s_impala_113357488,
                        &PTR_s_publisherId_11335a4a0,4,0x30,0x1c);
    func_0x00010c229040();
    puRam00000001137f25c0 = puVar1;
  }
  return puRam00000001137f25c0;
}



/* Entry: 10b032a44; end: 10b032aaf; +[IMPMoveBusinessProfileResponse descriptor] */

void FUN_10b032a44(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f25c8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c516a0,
                        &PTR____CFConstantStringClassReference_110f4d2f8,&PTR_s_impala_113357488,
                        &PTR_DAT_11335a520,4,0x28,0x1c);
    puRam00000001137f25c8 = puVar1;
  }
  return;
}



/* Entry: 10b032ab0; end: 10b032b17; +[IMPUnifyBusinessProfileAccountIdsRequest descriptor] */

void FUN_10b032ab0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f25d0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c516f0,
                        &PTR____CFConstantStringClassReference_110f4d318,&PTR_s_impala_113357488,
                        &PTR_s_businessProfileId_113357700,1,0x10,0x1c);
    puRam00000001137f25d0 = puVar1;
  }
  return;
}



/* Entry: 10b032b18; end: 10b032b83; +[IMPUnifyBusinessProfileAccountIdsResponse descriptor] */

void FUN_10b032b18(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f25d8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c51740,
                        &PTR____CFConstantStringClassReference_110f4d338,&PTR_s_impala_113357488,
                        &PTR_s_businessProfileId_1133593a0,3,0x20,0x1c);
    puRam00000001137f25d8 = puVar1;
  }
  return;
}



/* Entry: 10b032b84; end: 10b032beb; +[IMPGetBusinessAccountRequest descriptor] */

void FUN_10b032b84(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f25e0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c51790,
                        &PTR____CFConstantStringClassReference_110f4d358,&PTR_s_impala_113357488,
                        &PTR_s_id_p_113357720,1,0x10,0x1c);
    puRam00000001137f25e0 = puVar1;
  }
  return;
}



/* Entry: 10b032bec; end: 10b032c53; +[IMPGetBusinessAccountResponse descriptor] */

void FUN_10b032bec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f25e8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c517e0,
                        &PTR____CFConstantStringClassReference_110f4d378,&PTR_s_impala_113357488,
                        &PTR_DAT_113357740,1,0x10,0x1c);
    puRam00000001137f25e8 = puVar1;
  }
  return;
}



/* Entry: 10b032c54; end: 10b032cbb; +[IMPContentIdentifier descriptor] */

void FUN_10b032c54(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f25f8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c51880,
                        &PTR____CFConstantStringClassReference_110f4d3b8,&PTR_s_impala_113357488,
                        &PTR_s_contentType_1133583c0,2,0x10,0x1c);
    puRam00000001137f25f8 = puVar1;
  }
  return;
}



/* Entry: 10b032cbc; end: 10b032d37; +[IMPShowDisplayInfo descriptor] */

undefined * FUN_10b032cbc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f2600 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c518d0,
                        &PTR____CFConstantStringClassReference_110f4d3d8,&PTR_s_impala_113357488,
                        &PTR_DAT_113357760,1,0x10,0x1c);
    func_0x00010c2289e0();
    puRam00000001137f2600 = puVar1;
  }
  return puRam00000001137f2600;
}



/* Entry: 10b032d38; end: 10b032da3; +[IMPCommerceStoreInfo descriptor] */

void FUN_10b032d38(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f2618 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c519c0,
                        &PTR____CFConstantStringClassReference_110f4d438,&PTR_s_impala_113357488,
                        &PTR_s_storeId_11335a5a0,4,0x20,0x1c);
    puRam00000001137f2618 = puVar1;
  }
  return;
}



/* Entry: 10b032da4; end: 10b032e1f; +[IMPDeeplinks descriptor] */

undefined * FUN_10b032da4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f2620 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c51a10,
                        &PTR____CFConstantStringClassReference_110f4d458,&PTR_s_impala_113357488,
                        &PTR_DAT_113357780,1,0x10,0x1c);
    func_0x00010c2289e0();
    puRam00000001137f2620 = puVar1;
  }
  return puRam00000001137f2620;
}



/* Entry: 10b032e20; end: 10b032e8b; +[IMPPendingRoleInvite descriptor] */

void FUN_10b032e20(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f2628 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c51a60,
                        &PTR____CFConstantStringClassReference_110f4d478,&PTR_s_impala_113357488,
                        &PTR_DAT_11335c9e0,0xb,0x58,0x1c);
    puRam00000001137f2628 = puVar1;
  }
  return;
}



/* Entry: 10b032e8c; end: 10b032f0b; +[IMPPromotableContent descriptor] */

undefined * FUN_10b032e8c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f2640 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c51b50,
                        &PTR____CFConstantStringClassReference_110f4d4d8,&PTR_s_impala_113357488,
                        &PTR_s_id_p_11335a620,4,0x20,0x1c);
    func_0x00010c2289e0();
    puRam00000001137f2640 = puVar1;
  }
  return puRam00000001137f2640;
}



/* Entry: 10b032f0c; end: 10b032f77; +[IMPCreatorDataSharingSettings descriptor] */

void FUN_10b032f0c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f2668 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c51ce0,
                        &PTR____CFConstantStringClassReference_110f4d578,&PTR_s_impala_113357488,
                        &PTR_DAT_113359460,3,0x20,0x1c);
    puRam00000001137f2668 = puVar1;
  }
  return;
}



/* Entry: 10b032f78; end: 10b032fdf; +[IMPAudienceGateSettings descriptor] */

void FUN_10b032f78(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f2678 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c51d80,
                        &PTR____CFConstantStringClassReference_110f4d5b8,&PTR_s_impala_113357488,
                        &PTR_DAT_113358400,2,0x18,0x1c);
    puRam00000001137f2678 = puVar1;
  }
  return;
}



/* Entry: 10b032fe0; end: 10b03304b; +[IMPAgeGateSettings descriptor] */

void FUN_10b032fe0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f2680 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c51dd0,
                        &PTR____CFConstantStringClassReference_110f4d5d8,&PTR_s_impala_113357488,
                        &PTR_DAT_113358440,2,0x10,0x1c);
    puRam00000001137f2680 = puVar1;
  }
  return;
}



/* Entry: 10b03304c; end: 10b0330b7; +[IMPUpdateMonetizationSettings descriptor] */

void FUN_10b03304c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f26a8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c51f10,
                        &PTR____CFConstantStringClassReference_110f4d658,&PTR_s_impala_113357488,
                        &PTR_DAT_113359520,3,0x20,0x1c);
    puRam00000001137f26a8 = puVar1;
  }
  return;
}



/* Entry: 10b0330b8; end: 10b03311f; +[IMPUpdateActivityFeedSettings descriptor] */

void FUN_10b0330b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f26b0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c51f60,
                        &PTR____CFConstantStringClassReference_110f4d678,&PTR_s_impala_113357488,
                        &PTR_DAT_1133577e0,1,0x10,0x1c);
    puRam00000001137f26b0 = puVar1;
  }
  return;
}



/* Entry: 10b033120; end: 10b03318b; +[IMPUpdateCreatorMonetizationEligibility descriptor] */

void FUN_10b033120(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f26b8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c51fb0,
                        &PTR____CFConstantStringClassReference_110f4d698,&PTR_s_impala_113357488,
                        &PTR_DAT_113358480,2,0x18,0x1c);
    puRam00000001137f26b8 = puVar1;
  }
  return;
}



/* Entry: 10b03318c; end: 10b0331f7; +[IMPUpdateMonetizationSetting descriptor] */

void FUN_10b03318c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f26c0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c52000,
                        &PTR____CFConstantStringClassReference_110f4d6b8,&PTR_s_impala_113357488,
                        &PTR_DAT_11335a720,4,0x28,0x1c);
    puRam00000001137f26c0 = puVar1;
  }
  return;
}



/* Entry: 10b0331f8; end: 10b033263; +[IMPUpdateCreatorDiscoveryForBrandsSettings descriptor] */

void FUN_10b0331f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f26c8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c52050,
                        &PTR____CFConstantStringClassReference_110f4d6d8,&PTR_s_impala_113357488,
                        &PTR_DAT_11335a7a0,4,0x28,0x1c);
    puRam00000001137f26c8 = puVar1;
  }
  return;
}



/* Entry: 10b033264; end: 10b0332cb; +[IMPUpdateCreatorDiscoveryForBrandsSetting descriptor] */

void FUN_10b033264(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f26d0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c520a0,
                        &PTR____CFConstantStringClassReference_110f4d6f8,&PTR_s_impala_113357488,
                        &PTR_DAT_113357800,1,0x10,0x1c);
    puRam00000001137f26d0 = puVar1;
  }
  return;
}



/* Entry: 10b0332cc; end: 10b033337; +[IMPUpdateAudienceGateSettings descriptor] */

void FUN_10b0332cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f26d8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c520f0,
                        &PTR____CFConstantStringClassReference_110f4d718,&PTR_s_impala_113357488,
                        &PTR_DAT_1133584c0,2,0x18,0x1c);
    puRam00000001137f26d8 = puVar1;
  }
  return;
}



/* Entry: 10b033338; end: 10b03339f; +[IMPUpdateContentAccessList descriptor] */

void FUN_10b033338(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f26e0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c52140,
                        &PTR____CFConstantStringClassReference_110f4d738,&PTR_s_impala_113357488,
                        &PTR_DAT_113357820,1,0x10,0x1c);
    puRam00000001137f26e0 = puVar1;
  }
  return;
}



/* Entry: 10b0333a0; end: 10b03340b; +[IMPUpdateAgeGateSettings descriptor] */

void FUN_10b0333a0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f26e8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c52190,
                        &PTR____CFConstantStringClassReference_110f4d758,&PTR_s_impala_113357488,
                        &PTR_DAT_113358500,2,0x18,0x1c);
    puRam00000001137f26e8 = puVar1;
  }
  return;
}



/* Entry: 10b03340c; end: 10b033477; +[IMPUpdateBusinessProfileSettingsRequest descriptor] */

void FUN_10b03340c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f26f0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c521e0,
                        &PTR____CFConstantStringClassReference_110f4d778,&PTR_s_impala_113357488,
                        &PTR_s_profileId_11335ce40,0xd,0x70,0x1c);
    puRam00000001137f26f0 = puVar1;
  }
  return;
}


